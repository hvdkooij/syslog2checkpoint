# Check Point parser for syslog from iptables events.

Installation instructions:
1. Follow [SecureKnowledge article sk55020](https://supportcenter.checkpoint.com/supportcenter/portal?eventSubmit_doGoviewsolutiondetails=&solutionid=sk55020) to install the Parser on you SmartCenter (or LogServer).
* Install Eventia Log Parsing Editor
* ```mkdir Syslog```
* ```cd Syslog```
* scp the proper addParserFile to the directory you just created
* ```chmod +x addParsingFile```
2. Copy files to work directory on Smart Center.
* ```curl_cli -k https://raw.githubusercontent.com/hvdkooij/syslog2checkpoint/master/iptables/iptables.C --output iptables.C```
* ```curl_cli -k https://raw.githubusercontent.com/hvdkooij/syslog2checkpoint/master/iptables/iptables_dict.ini --output iptables_dict.ini```
3. Install the parser.
* ```./addParsingFile -p iptables.C -d iptables_dict.ini```

 ## WARNING: This will stop and restart your SmartCenter!!!
 
 This has been tested with R80.10, R80.20, R80.30, R80.40 and R81.
 
See also [The netfilter.org "iptables" project](https://netfilter.org/projects/iptables/index.html)

| File | Description |
| --- | --- |
| iptables.C | Log Parser |
| iptables_dict.ini | Dictionary |
| iptables.prs | Eventia Log Parser Editor |
