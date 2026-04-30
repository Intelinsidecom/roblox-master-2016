using System;
using System.IO;
using System.Net;
using System.Net.Sockets;
using System.Runtime.CompilerServices;
using System.Text;

namespace BeIT.MemCached
{
	internal class PooledSocket : IPooledSocket, IDisposable
	{
		private readonly Socket _Socket;

		private readonly Stream _Stream;

		private readonly MemcachedMonitor _MemcachedMonitor;

		private readonly IMemCachedClientSettings _Settings;

		private readonly IMemcachedClientExceptionHandler _ExceptionHandler;

		private readonly IPEndPoint _EndPoint;

		private volatile bool _Disposed;

		[CompilerGenerated]
		private readonly string _003CRemoteEndPoint_003Ek__BackingField;

		[CompilerGenerated]
		private readonly DateTime _003CCreated_003Ek__BackingField;

		public string RemoteEndPoint
		{
			[CompilerGenerated]
			get
			{
				return _003CRemoteEndPoint_003Ek__BackingField;
			}
		}

		public DateTime Created
		{
			[CompilerGenerated]
			get
			{
				return _003CCreated_003Ek__BackingField;
			}
		}

		public bool IsAlive
		{
			get
			{
				if (_Socket != null && _Socket.Connected)
				{
					return _Stream.CanRead;
				}
				return false;
			}
		}

		public event EventHandler Disposed;

		public PooledSocket(MemcachedMonitor monitor, IPEndPoint endPoint, IMemCachedClientSettings settings, IMemcachedClientExceptionHandler exceptionHandler)
		{
			if (monitor == null)
			{
				throw new ArgumentNullException("monitor");
			}
			_MemcachedMonitor = monitor;
			if (endPoint == null)
			{
				throw new ArgumentNullException("endPoint");
			}
			_EndPoint = endPoint;
			if (settings == null)
			{
				throw new ArgumentNullException("settings");
			}
			_Settings = settings;
			if (exceptionHandler == null)
			{
				throw new ArgumentNullException("exceptionHandler");
			}
			_ExceptionHandler = exceptionHandler;
			_003CCreated_003Ek__BackingField = DateTime.UtcNow;
			_Socket = new Socket(endPoint.AddressFamily, SocketType.Stream, ProtocolType.Tcp);
			int num = (int)settings.SendReceiveTimeout.TotalMilliseconds;
			_Socket.SetSocketOption(SocketOptionLevel.Socket, SocketOptionName.SendTimeout, num);
			_Socket.SetSocketOption(SocketOptionLevel.Socket, SocketOptionName.ReceiveTimeout, num);
			_Socket.ReceiveTimeout = num;
			_Socket.SendTimeout = num;
			_003CRemoteEndPoint_003Ek__BackingField = endPoint.ToString();
			_Socket.NoDelay = true;
			Connect(_Settings.PooledSocketConstructionSocketConnectTimeout);
			_Stream = new BufferedStream(new NetworkStream(_Socket, false));
		}

		private void Connect(TimeSpan connectTimeout)
		{
			if (connectTimeout <= TimeSpan.Zero)
			{
				throw new ArgumentOutOfRangeException("connectTimeout");
			}
			IAsyncResult asyncResult = _Socket.BeginConnect(_EndPoint, null, null);
			asyncResult.AsyncWaitHandle.WaitOne((int)connectTimeout.TotalMilliseconds);
			if (!_Socket.Connected)
			{
				_Socket.Close();
				throw new TimeoutException(string.Format("Failed to connect to {0} after {1}.", _EndPoint, connectTimeout));
			}
			_Socket.EndConnect(asyncResult);
		}

		public void Write(string str)
		{
			Write(Encoding.UTF8.GetBytes(str));
		}

		public void Write(byte[] bytes)
		{
			if (bytes == null)
			{
				throw new ArgumentNullException("bytes");
			}
			_Stream.Write(bytes, 0, bytes.Length);
			_Stream.Flush();
		}

		public string ReadLine()
		{
			MemoryStream memoryStream = new MemoryStream();
			bool flag = false;
			int num;
			while ((num = _Stream.ReadByte()) != -1)
			{
				if (flag)
				{
					if (num == 10)
					{
						break;
					}
					memoryStream.WriteByte(13);
					flag = false;
				}
				if (num == 13)
				{
					flag = true;
				}
				else
				{
					memoryStream.WriteByte((byte)num);
				}
			}
			byte[] buffer = memoryStream.GetBuffer();
			return Encoding.UTF8.GetString(buffer);
		}

		public string ReadResponse()
		{
			string text = ReadLine();
			if (string.IsNullOrEmpty(text))
			{
				throw new MemcachedClientException(RemoteEndPoint, "Received empty response.");
			}
			if (text.StartsWith("ERROR") || text.StartsWith("CLIENT_ERROR") || text.StartsWith("SERVER_ERROR"))
			{
				throw new MemcachedClientException(RemoteEndPoint, string.Format("Server returned {0}", text));
			}
			return text;
		}

		public void Read(byte[] bytes)
		{
			if (bytes == null)
			{
				return;
			}
			int num;
			for (int i = 0; i < bytes.Length; i += num)
			{
				num = _Stream.Read(bytes, i, bytes.Length - i);
				if (num == 0)
				{
					break;
				}
			}
		}

		public void SkipUntilEndOfLine()
		{
			bool flag = false;
			int num;
			while ((num = _Stream.ReadByte()) != -1)
			{
				if (flag)
				{
					if (num == 10)
					{
						break;
					}
					flag = false;
				}
				if (num == 13)
				{
					flag = true;
				}
			}
		}

		public bool Reset(bool forceReset)
		{
			if (_Socket.Available > 0)
			{
				_MemcachedMonitor.PooledSocketReadLeftoverBytesReadAttemptsPerSecond.Increment();
				byte[] bytes = new byte[_Socket.Available];
				Read(bytes);
				return true;
			}
			if (forceReset)
			{
				int num = 0;
				try
				{
					int num2 = Math.Max(1, _Settings.ForceResetBytesMaxAttempts);
					int forceResetBytesMaxNumberOfBytes = _Settings.ForceResetBytesMaxNumberOfBytes;
					for (int i = 0; i < num2; i++)
					{
						byte[] array = new byte[forceResetBytesMaxNumberOfBytes];
						int num3 = _Stream.Read(array, 0, array.Length);
						num += num3;
						if (num3 < array.Length)
						{
							break;
						}
					}
				}
				catch (Exception)
				{
					_MemcachedMonitor.PooledSocketForceResetExceptionsPerSecond.Increment();
				}
				if (num > 0)
				{
					_MemcachedMonitor.PooledSocketForceResetAnyBytesReturnedPerSecond.Increment();
					return true;
				}
				_MemcachedMonitor.PooledSocketForceResetNoBytesReturnedPerSecond.Increment();
				return false;
			}
			return false;
		}

		public void Dispose()
		{
			if (!_Disposed)
			{
				_Disposed = true;
				EventHandler eventHandler = this.Disposed;
				if (eventHandler != null)
				{
					eventHandler(this, null);
				}
				_MemcachedMonitor.PooledSocketDisposedPerSecond.Increment();
			}
			try
			{
				Stream stream = _Stream;
				if (stream != null)
				{
					stream.Dispose();
				}
				Socket socket = _Socket;
				if (socket != null)
				{
					socket.Close();
				}
			}
			catch (Exception innerException)
			{
				IMemcachedClientExceptionHandler exceptionHandler = _ExceptionHandler;
				if (exceptionHandler != null)
				{
					exceptionHandler.HandleException(new MemcachedClientException(RemoteEndPoint, string.Format("Failed to dispose {0}", "PooledSocket"), innerException));
				}
			}
		}
	}
}
