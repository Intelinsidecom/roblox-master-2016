using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

namespace RobloxLib
{
	[ComImport]
	[ClassInterface(ClassInterfaceType.None)]
	[Guid("6614D880-6572-4C04-8A7C-D026502A6B95")]
	public class ContentClass : IContent, Content
	{
		[MethodImpl(MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime)]
		[DispId(1)]
		public virtual extern void Upload([In][MarshalAs(UnmanagedType.BStr)] string url);
	}
}
