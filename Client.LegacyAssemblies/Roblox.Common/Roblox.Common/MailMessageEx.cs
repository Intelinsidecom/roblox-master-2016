using System;
using System.Collections.Generic;
using System.IO;
using System.Net.Mail;
using System.Net.Mime;
using System.Text.RegularExpressions;
using Roblox.Common.Mime;

namespace Roblox.Common
{
	public class MailMessageEx : MailMessage
	{
		public const string EmailRegexPattern = "(['\"]{1,}.+['\"]{1,}\\s+)?<?[\\w\\.\\-]+@[^\\.][\\w\\.\\-]+\\.[a-z]{2,}>?";

		private readonly List<MailMessageEx> _Children;

		public long Octets { get; set; }

		public int MessageNumber { get; internal set; }

		public List<MailMessageEx> Children
		{
			get
			{
				return _Children;
			}
		}

		public string PlainTextBody
		{
			get
			{
				if (ContentType.MediaType == MediaTypes.TextPlain)
				{
					return base.Body;
				}
				foreach (AlternateView view in base.AlternateViews)
				{
					if (view.ContentType.MediaType == MediaTypes.TextPlain)
					{
						return new StreamReader(view.ContentStream).ReadToEnd();
					}
				}
				return "";
			}
		}

		public DateTime DeliveryDate
		{
			get
			{
				string date = GetHeader("date");
				if (string.IsNullOrEmpty(date))
				{
					return DateTime.MinValue;
				}
				return Convert.ToDateTime(date);
			}
		}

		public MailAddress ReturnAddress
		{
			get
			{
				string replyTo = GetHeader("reply-to");
				if (string.IsNullOrEmpty(replyTo))
				{
					return null;
				}
				return CreateMailAddress(replyTo);
			}
		}

		public string Routing
		{
			get
			{
				return GetHeader("received");
			}
		}

		public string MessageId
		{
			get
			{
				return GetHeader("message-id");
			}
		}

		public string ReplyToMessageId
		{
			get
			{
				return GetHeader("in-reply-to", true);
			}
		}

		public string MimeVersion
		{
			get
			{
				return GetHeader("mime-version");
			}
		}

		public string ContentId
		{
			get
			{
				return GetHeader("content-id");
			}
		}

		public string ContentDescription
		{
			get
			{
				return GetHeader("content-description");
			}
		}

		public ContentDisposition ContentDisposition
		{
			get
			{
				string contentDisposition = GetHeader("content-disposition");
				if (string.IsNullOrEmpty(contentDisposition))
				{
					return null;
				}
				return new ContentDisposition(contentDisposition);
			}
		}

		public ContentType ContentType
		{
			get
			{
				string contentType = GetHeader("content-type");
				if (string.IsNullOrEmpty(contentType))
				{
					return null;
				}
				return MimeReader.GetContentType(contentType);
			}
		}

		public MailMessageEx()
		{
			_Children = new List<MailMessageEx>();
		}

		private string GetHeader(string header)
		{
			return GetHeader(header, false);
		}

		private string GetHeader(string header, bool stripBrackets)
		{
			if (stripBrackets)
			{
				return MimeEntity.TrimBrackets(base.Headers[header]);
			}
			return base.Headers[header];
		}

		public static MailMessageEx CreateMailMessageFromEntity(MimeEntity entity)
		{
			MailMessageEx message = new MailMessageEx();
			string[] allKeys = entity.Headers.AllKeys;
			foreach (string key in allKeys)
			{
				string value = entity.Headers[key];
				if (value.Equals(string.Empty))
				{
					value = " ";
				}
				message.Headers.Add(key.ToLowerInvariant(), value);
				switch (key.ToLowerInvariant())
				{
				case "bcc":
					PopulateAddressList(value, message.Bcc);
					break;
				case "cc":
					PopulateAddressList(value, message.CC);
					break;
				case "from":
					message.From = CreateMailAddress(value);
					break;
				case "reply-to":
					message.ReplyToList.Add(CreateMailAddress(value));
					break;
				case "subject":
					message.Subject = value;
					break;
				case "to":
					PopulateAddressList(value, message.To);
					break;
				}
			}
			return message;
		}

		public static MailAddress CreateMailAddress(string address)
		{
			try
			{
				return new MailAddress(address.Trim('\t'));
			}
			catch (FormatException innerException)
			{
				throw new ApplicationException(string.Format("Unable to create mail address from provided string: {0}", address), innerException);
			}
		}

		public static void PopulateAddressList(string addressList, MailAddressCollection recipients)
		{
			foreach (MailAddress address in GetMailAddresses(addressList))
			{
				recipients.Add(address);
			}
		}

		private static IEnumerable<MailAddress> GetMailAddresses(string addressList)
		{
			Regex email = new Regex("(['\"]{1,}.+['\"]{1,}\\s+)?<?[\\w\\.\\-]+@[^\\.][\\w\\.\\-]+\\.[a-z]{2,}>?");
			foreach (Match match in email.Matches(addressList))
			{
				yield return CreateMailAddress(match.Value);
			}
		}
	}
}
