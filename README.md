# Syslog parsers for SmartCenter(s)

This is a repository that will contain some parsers I created to parse syslog data into a Check Point SmartCenter.

So far I have created  the following parsers:
- Linux iptables (also works for routers using iptables like the ASUS WRT routers)
- pfSense (only IPv4 at the moment)

I am working a bit on:
- Barracuda Email Security Gateway (could use some help with the email fields in Check Point)

| Parser | Status |
| --- | --- |
| BSF | Under development, very limited use |
| iptables | Workable (no IPv6 support yet) |
| pfSense | Workable (no IPv6 support yet) |

See also: [Logging and Monitoring R80.20 Administration Guide => Appendix: Manual Syslog Parsing](https://sc1.checkpoint.com/documents/R80.20_GA/WebAdminGuides/EN/CP_R80.20_LoggingAndMonitoring_AdminGuide/124810.htm)

This has been tested with R80.20 and R80.30
This has not been tested with R80.20 M1 or R80.20 M2
