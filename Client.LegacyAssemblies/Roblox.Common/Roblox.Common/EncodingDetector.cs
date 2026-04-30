using System.IO;
using System.Text;

namespace Roblox.Common
{
	public static class EncodingDetector
	{
		public static Encoding GetFileEncoding(Stream stream)
		{
			Encoding enc = Encoding.Default;
			byte[] buffer = new byte[5];
			stream.Read(buffer, 0, 5);
			if (buffer[0] == 239 && buffer[1] == 187 && buffer[2] == 191)
			{
				enc = Encoding.UTF8;
			}
			else if (buffer[0] == 254 && buffer[1] == byte.MaxValue)
			{
				enc = Encoding.Unicode;
			}
			else if (buffer[0] == 0 && buffer[1] == 0 && buffer[2] == 254 && buffer[3] == byte.MaxValue)
			{
				enc = Encoding.UTF32;
			}
			else if (buffer[0] == 43 && buffer[1] == 47 && buffer[2] == 118)
			{
				enc = Encoding.UTF7;
			}
			else if (buffer[0] == 254 && buffer[1] == byte.MaxValue)
			{
				enc = Encoding.GetEncoding(1201);
			}
			else if (buffer[0] == byte.MaxValue && buffer[1] == 254)
			{
				enc = Encoding.GetEncoding(1200);
			}
			return enc;
		}

		public static bool IsEntireFileUtf8(Stream stream)
		{
			UTF8Encoding utf8 = new UTF8Encoding(true, true);
			byte[] bytes = new byte[stream.Length];
			stream.Read(bytes, 0, bytes.Length);
			try
			{
				utf8.GetChars(bytes);
				return true;
			}
			catch (DecoderFallbackException)
			{
				return false;
			}
			finally
			{
				stream.Position = 0L;
			}
		}
	}
}
