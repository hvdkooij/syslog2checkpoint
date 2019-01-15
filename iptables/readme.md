# Check Point parser for syslog from iptables events.

Installation instructions:
 1. Follow [SecureKnowledge article sk55020](https://supportcenter.checkpoint.com/supportcenter/portal?eventSubmit_doGoviewsolutiondetails=&solutionid=sk55020)
 2. Copy files to work directory on Smart Center.
 3. `addParsingFile -p iptables.C -d iptables_dict.ini`

 ## WARNING: This will stop and restart your SmartCenter!!!
 
See also [The netfilter.org "iptables" project](https://netfilter.org/projects/iptables/index.html)
