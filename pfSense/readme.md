# Check Point parser for syslog from pfsense firewall events

Installation instructions:
 1. Follow [SecureKnowledge article sk55020](https://supportcenter.checkpoint.com/supportcenter/portal?eventSubmit_doGoviewsolutiondetails=&solutionid=sk55020)
 2. Copy files to work directory on Smart Center.
 3. `addParsingFile -p pfSense.C -d pfSense_dict.ini`
 
 ## WARNING: This will stop and restart your SmartCenter!!!

More details about the log format can be found on [Filter Log Format for pfSense 2.2](https://www.netgate.com/docs/pfsense/monitoring/filter-log-format-for-pfsense-2-2.html)

| File | Description |
| --- | --- |
| pfSense.C | Log Parser |
| pfSense_dict.ini | Dictionary |
| pfSense.prs | Eventia Log Parser Editor |
