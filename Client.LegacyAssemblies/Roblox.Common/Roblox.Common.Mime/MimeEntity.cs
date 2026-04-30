using System;
using System.Collections.Generic;
using System.Collections.Specialized;
using System.IO;
using System.Net.Mail;
using System.Net.Mime;
using System.Text;

namespace Roblox.Common.Mime
{
	public class MimeEntity
	{
		private StringBuilder _encodedMessage;

		private List<MimeEntity> _children;

		private ContentType _contentType;

		private string _mediaSubType;

		private string _mediaMainType;

		private NameValueCollection _headers;

		private string _mimeVersion;

		private string _contentId;

		private string _contentDescription;

		private ContentDisposition _contentDisposition;

		private string _transferEncoding;

		private TransferEncoding _contentTransferEncoding;

		private string _startBoundary;

		private MimeEntity _parent;

		private MemoryStream _content;

		public StringBuilder EncodedMessage
		{
			get
			{
				return _encodedMessage;
			}
		}

		public List<MimeEntity> Children
		{
			get
			{
				return _children;
			}
		}

		public ContentType ContentType
		{
			get
			{
				return _contentType;
			}
		}

		public string MediaSubType
		{
			get
			{
				return _mediaSubType;
			}
		}

		public string MediaMainType
		{
			get
			{
				return _mediaMainType;
			}
		}

		public NameValueCollection Headers
		{
			get
			{
				return _headers;
			}
		}

		public string MimeVersion
		{
			get
			{
				return _mimeVersion;
			}
			set
			{
				_mimeVersion = value;
			}
		}

		public string ContentId
		{
			get
			{
				return _contentId;
			}
			set
			{
				_contentId = value;
			}
		}

		public string ContentDescription
		{
			get
			{
				return _contentDescription;
			}
			set
			{
				_contentDescription = value;
			}
		}

		public ContentDisposition ContentDisposition
		{
			get
			{
				return _contentDisposition;
			}
			set
			{
				_contentDisposition = value;
			}
		}

		public string TransferEncoding
		{
			get
			{
				return _transferEncoding;
			}
			set
			{
				_transferEncoding = value;
			}
		}

		public TransferEncoding ContentTransferEncoding
		{
			get
			{
				return _contentTransferEncoding;
			}
			set
			{
				_contentTransferEncoding = value;
			}
		}

		internal bool HasBoundary
		{
			get
			{
				if (string.IsNullOrEmpty(_contentType.Boundary))
				{
					return !string.IsNullOrEmpty(_startBoundary);
				}
				return true;
			}
		}

		public string StartBoundary
		{
			get
			{
				if (string.IsNullOrEmpty(_startBoundary) || !string.IsNullOrEmpty(_contentType.Boundary))
				{
					return "--" + _contentType.Boundary;
				}
				return _startBoundary;
			}
		}

		public string EndBoundary
		{
			get
			{
				return StartBoundary + "--";
			}
		}

		public MimeEntity Parent
		{
			get
			{
				return _parent;
			}
			set
			{
				_parent = value;
			}
		}

		public MemoryStream Content
		{
			get
			{
				return _content;
			}
			internal set
			{
				_content = value;
			}
		}

		public MimeEntity()
		{
			_children = new List<MimeEntity>();
			_headers = new NameValueCollection();
			_contentType = MimeReader.GetContentType(string.Empty);
			_parent = null;
			_encodedMessage = new StringBuilder();
		}

		public MimeEntity(MimeEntity parent)
			: this()
		{
			if (parent == null)
			{
				throw new ArgumentNullException("parent");
			}
			_parent = parent;
			_startBoundary = parent.StartBoundary;
		}

		internal void SetContentType(ContentType contentType)
		{
			_contentType = contentType;
			_contentType.MediaType = MimeReader.GetMediaType(contentType.MediaType);
			_mediaMainType = MimeReader.GetMediaMainType(contentType.MediaType);
			_mediaSubType = MimeReader.GetMediaSubType(contentType.MediaType);
		}

		public MailMessageEx ToMailMessageEx()
		{
			return ToMailMessageEx(this);
		}

		private MailMessageEx ToMailMessageEx(MimeEntity entity)
		{
			if (entity == null)
			{
				throw new ArgumentNullException("entity");
			}
			MailMessageEx message = MailMessageEx.CreateMailMessageFromEntity(entity);
			if (!string.IsNullOrEmpty(entity.ContentType.Boundary))
			{
				message = MailMessageEx.CreateMailMessageFromEntity(entity);
				BuildMultiPartMessage(entity, message);
			}
			else if (string.Equals(entity.ContentType.MediaType, MediaTypes.MessageRfc822, StringComparison.InvariantCultureIgnoreCase))
			{
				if (entity.Children.Count < 0)
				{
					throw new ApplicationException("Invalid child count on message/rfc822 entity.");
				}
				message = MailMessageEx.CreateMailMessageFromEntity(entity.Children[0]);
				BuildMultiPartMessage(entity, message);
			}
			else
			{
				message = MailMessageEx.CreateMailMessageFromEntity(entity);
				BuildSinglePartMessage(entity, message);
			}
			return message;
		}

		private void BuildSinglePartMessage(MimeEntity entity, MailMessageEx message)
		{
			SetMessageBody(message, entity);
		}

		public Encoding GetEncoding()
		{
			if (string.IsNullOrEmpty(ContentType.CharSet))
			{
				return Encoding.ASCII;
			}
			try
			{
				return Encoding.GetEncoding(ContentType.CharSet);
			}
			catch (ArgumentException)
			{
				return Encoding.ASCII;
			}
		}

		private void BuildMultiPartMessage(MimeEntity entity, MailMessageEx message)
		{
			foreach (MimeEntity child in entity.Children)
			{
				if (string.Equals(child.ContentType.MediaType, MediaTypes.MultipartAlternative, StringComparison.InvariantCultureIgnoreCase) || string.Equals(child.ContentType.MediaType, MediaTypes.MultipartMixed, StringComparison.InvariantCultureIgnoreCase))
				{
					BuildMultiPartMessage(child, message);
				}
				else if (!IsAttachment(child) && (string.Equals(child.ContentType.MediaType, MediaTypes.TextPlain) || string.Equals(child.ContentType.MediaType, MediaTypes.TextHtml)))
				{
					message.AlternateViews.Add(CreateAlternateView(child));
					SetMessageBody(message, child);
				}
				else if (string.Equals(child.ContentType.MediaType, MediaTypes.MessageRfc822, StringComparison.InvariantCultureIgnoreCase) && string.Equals(child.ContentDisposition.DispositionType, "attachment", StringComparison.InvariantCultureIgnoreCase))
				{
					message.Children.Add(ToMailMessageEx(child));
				}
				else if (IsAttachment(child))
				{
					message.Attachments.Add(CreateAttachment(child));
				}
			}
		}

		private static bool IsAttachment(MimeEntity child)
		{
			if (child.ContentDisposition != null)
			{
				return string.Equals(child.ContentDisposition.DispositionType, "attachment", StringComparison.InvariantCultureIgnoreCase);
			}
			return false;
		}

		private void SetMessageBody(MailMessageEx message, MimeEntity child)
		{
			Encoding encoding = child.GetEncoding();
			message.Body = DecodeBytes(child.Content.ToArray(), encoding);
			message.BodyEncoding = encoding;
			message.IsBodyHtml = string.Equals(MediaTypes.TextHtml, child.ContentType.MediaType, StringComparison.InvariantCultureIgnoreCase);
		}

		private string DecodeBytes(byte[] buffer, Encoding encoding)
		{
			if (buffer == null)
			{
				return null;
			}
			if (encoding == null)
			{
				encoding = Encoding.UTF7;
			}
			return encoding.GetString(buffer);
		}

		private AlternateView CreateAlternateView(MimeEntity view)
		{
			return new AlternateView(view.Content, view.ContentType)
			{
				TransferEncoding = view.ContentTransferEncoding,
				ContentId = TrimBrackets(view.ContentId)
			};
		}

		public static string TrimBrackets(string value)
		{
			if (value == null)
			{
				return value;
			}
			if (value.StartsWith("<") && value.EndsWith(">"))
			{
				return value.Trim('<', '>');
			}
			return value;
		}

		private Attachment CreateAttachment(MimeEntity entity)
		{
			Attachment attachment = new Attachment(entity.Content, entity.ContentType);
			if (entity.ContentDisposition != null)
			{
				attachment.ContentDisposition.Parameters.Clear();
				foreach (string key in entity.ContentDisposition.Parameters.Keys)
				{
					attachment.ContentDisposition.Parameters.Add(key, entity.ContentDisposition.Parameters[key]);
				}
				attachment.ContentDisposition.CreationDate = entity.ContentDisposition.CreationDate;
				attachment.ContentDisposition.DispositionType = entity.ContentDisposition.DispositionType;
				attachment.ContentDisposition.FileName = entity.ContentDisposition.FileName;
				attachment.ContentDisposition.Inline = entity.ContentDisposition.Inline;
				attachment.ContentDisposition.ModificationDate = entity.ContentDisposition.ModificationDate;
				attachment.ContentDisposition.ReadDate = entity.ContentDisposition.ReadDate;
				attachment.ContentDisposition.Size = entity.ContentDisposition.Size;
			}
			if (!string.IsNullOrEmpty(entity.ContentId))
			{
				attachment.ContentId = TrimBrackets(entity.ContentId);
			}
			attachment.TransferEncoding = entity.ContentTransferEncoding;
			return attachment;
		}
	}
}
