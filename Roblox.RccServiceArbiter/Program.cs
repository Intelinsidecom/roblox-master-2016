using System;
using System.ServiceProcess;

namespace Roblox.RccServiceArbiter
{
    class Program
    {
        static void Main(string[] args)
        {
            Log.Event("Starting");
            //Cleanup old RCCService instances
            System.Diagnostics.Process[] processlist = System.Diagnostics.Process.GetProcesses();
            foreach(System.Diagnostics.Process theprocess in processlist)
            {
                if (theprocess.ProcessName == "RCCService")
                {
                    theprocess.Kill();
                }
            }

            RccService rccService = new RccService();
            rccService.initializeJobManager();
            
            ServiceBase[] ServicesToRun = new ServiceBase[] 
            { 
                new RccServiceWrapper(rccService)
            };
            ServiceBase.Run(ServicesToRun);
        }
    }

    class RccServiceWrapper : ServiceBase
    {
        private RccService _rccService;

        public RccServiceWrapper(RccService rccService)
        {
            _rccService = rccService;
            ServiceName = "Roblox.RccServiceArbiter";
        }

        protected override void OnStart(string[] args)
        {
            Log.Event("Service Started");
        }

        protected override void OnStop()
        {
            Log.Event("Service Stopped");
        }
    }
}
