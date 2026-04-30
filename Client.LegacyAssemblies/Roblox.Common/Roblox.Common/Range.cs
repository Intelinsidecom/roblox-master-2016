namespace Roblox.Common
{
	public struct Range
	{
		public int Min { get; set; }

		public int Max { get; set; }

		public Range(int min, int max) : this()
		{
			Min = min;
			Max = max;
		}
	}
}
