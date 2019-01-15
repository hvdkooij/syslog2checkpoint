# Check Point parser for syslog from Barracuda Email Security Gateway
(This unit was formerly known as the Barracuda Spam Firewall so hence the use of BSF.)

Installation instructions:
 1. Follow [SecureKnowledge article sk55020](https://supportcenter.checkpoint.com/supportcenter/portal?eventSubmit_doGoviewsolutiondetails=&solutionid=sk55020)
 2. Copy files to work directory on Smart Center.
 3. `addParsingFile -p BSF.C -d BSF_dict.ini`

 ## WARNING: This will stop and restart your SmartCenter!!!
 
 Logging format details can be found on [Syslog and the Barracuda Email Security Gateway](https://campus.barracuda.com/product/emailsecuritygateway/doc/12193950/syslog-and-the-barracuda-email-security-gateway)
 
 # *THIS IS NOT A USABLE PARSER YET!!!*
 
| BSF.C | Log Parser |
| BSF.prs | Eventia Log Parser Editor |
| BSF_dict.ini | Dictionary |
