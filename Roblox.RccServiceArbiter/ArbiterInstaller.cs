using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.ServiceProcess;

namespace Roblox.RccServiceArbiter
{
    [RunInstaller(true)]
    public class ArbiterInstaller : ServiceInstaller
    {
        public ArbiterInstaller()
        {
            ServiceName = "Roblox.RccServiceArbiter";
            DisplayName = "Roblox RccService Arbiter";
            Description = "Manages a handful of processes running the RCC web service.";
        }
    }
}
