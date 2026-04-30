using System;
using System.Security.Cryptography;
using System.Text;
using Roblox.EventLog;

namespace Roblox.Data
{
	public static class SharedSecurityNotary
	{
		public enum FormatVersion
		{
			V1 = 1,
			V2,
			V3,
			V4
		}

		public static string CreateSignature(string message, byte[] blob)
		{
			CspParameters parameters = new CspParameters
			{
				Flags = CspProviderFlags.UseMachineKeyStore
			};
			byte[] asciiMessage = Encoding.ASCII.GetBytes(message);
			byte[] signature;
			using (RSACryptoServiceProvider rsaCryptoServiceProvider = new RSACryptoServiceProvider(parameters))
			{
				rsaCryptoServiceProvider.ImportCspBlob(blob);
				using (SHA1CryptoServiceProvider sha1CryptoServiceProvider = new SHA1CryptoServiceProvider())
				{
					byte[] hash = sha1CryptoServiceProvider.ComputeHash(asciiMessage);
					signature = rsaCryptoServiceProvider.SignHash(hash, null);
				}
			}
			return Convert.ToBase64String(signature);
		}

		public static string SignScript(string script, byte[] blob, FormatVersion version = FormatVersion.V1)
		{
			string signature;
			switch (version)
			{
			case FormatVersion.V4:
				script = "\r\n" + script;
				signature = CreateSignature(script, blob);
				return string.Format("--rbxsig4%{0}%{1}", signature, script);
			case FormatVersion.V3:
				script = "\r\n" + script;
				signature = CreateSignature(script, blob);
				return string.Format("--rbxsig2%{0}%{1}", signature, script);
			case FormatVersion.V2:
				script = "\r\n" + script;
				signature = CreateSignature(script, blob);
				return string.Format("--rbxsig%{0}%{1}", signature, script);
			default:
				StaticLoggerRegistry.Instance.Error("Unimplemented signature format in SharedSecurityNotary.cs, defaulting to V1");
				break;
			case FormatVersion.V1:
				break;
			}
			signature = CreateSignature(script, blob);
			return string.Format("%{0}%{1}", signature, script);
		}
	}
}
