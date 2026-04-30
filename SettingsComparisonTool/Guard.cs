using System;

namespace SettingsReader
{
    internal static class Guard
    {
        public static void ArgumentNotNull(object arg, string parameterName)
        {
            if (arg == null)
                throw new ArgumentNullException(parameterName);
        }

        public static void ArgumentNotNullOrEmpty(string arg, string parameterName)
        {
            if (string.IsNullOrWhiteSpace(arg))
                throw new ArgumentException("Value cannot be null or empty.", parameterName);
        }
    }
}
