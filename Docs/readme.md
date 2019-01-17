# Information

This is the result of a bit of reverse enginering.
Most particularly by running a `fwm logexport` and fetching the first line.

### Field names

| Field Name | Type | Description |
| ---------- | ---- | ----------- |
| num | Integer | line number in log |
| date | N/A | Date of log event |
| time | N/A | Time of log event |
| orig | N/A | Origin of the log event |
| type | N/A | N/A |
| action | N/A | N/A |
| alert | N/A | N/A |
| i/f_name | Text | Interface Name |
| i/f_dir | Binary | Interface direction (0=inbound, 1=outbound) |
| product | N/A | Usually the blade in use |
| log_sys_message | N/A | N/A |
| origin_id | N/A | N/A |
| ProductFamily | N/A | N/A |
| inzone | N/A | N/A |
| outzone | N/A | N/A |
| rule | Number |  Security policy rule number |
| rule_uid | N/A | UID of policy rule |
| rule_name | Text | Name of policy rule |
| service_id | N/A | N/A |
| src | IP | Source IP address |
| dst | IP | Destination IP Address |
| proto | uint8 | IP Protocol |
| scheme: | N/A | N/A |
| methods: | N/A | N/A |
| peer gateway | N/A | N/A |
| encryption failure: | N/A | N/A |
| partner | N/A | N/A |
| community | N/A | N/A |
| fw_subproduct | N/A | N/A |
| vpn_feature_name | N/A | N/A |
| service | uint16 | Destination Port |
| s_port | uint16 | Source Port |
| resource | N/A | N/A |
| xlatesrc | IP | Translated Source IP Address (after NAT) |
| xlatedst | IP | Translated Destination IP address (after NAT) |
| NAT_rulenum | Number | NAT policy rule number |
| NAT_addtnl_rulenum | Number | additional NAT policy rule number |
| xlatedport | uint16 | Translated destination port |
| xlatesport | uint16 | Translated source port |
| UserCheck_incident_uid | N/A | N/A |
| UserCheck | N/A | N/A |
| dlp_incident_uid | N/A | N/A |
| log_id | N/A | N/A |
| user_status | N/A | N/A |
| portal_message | N/A | N/A |
| UserCheck_Confirmation_Level | N/A | N/A |
| frequency | N/A | N/A |
| UserCheck_Interaction_name | N/A | N/A |
| ICMP | N/A | N/A |
| ICMP Type | uint8 | N/A |
| ICMP Code | uint8 | N/A |
| bytes | N/A | N/A |
| sent_bytes | N/A | N/A |
| received_bytes | N/A | N/A |
| app_id | N/A | N/A |
| browse_time | N/A | N/A |
| appi_name | N/A | N/A |
| app_desc | N/A | N/A |
| app_category | N/A | N/A |
| matched_category | N/A | N/A |
| app_properties | N/A | N/A |
| app_risk | N/A | N/A |
| app_rule_id | N/A | N/A |
| app_rule_name | N/A | N/A |
| web_client_type | N/A | N/A |
| web_server_type | N/A | N/A |
| app_sig_id | N/A | N/A |
| ticket_id | N/A | N/A |
| reason | N/A | N/A |
| proxy_src_ip | IP address | N/A |
| Referrer_self_uid | N/A | N/A |
| update_status | N/A | N/A |
| update_description | N/A | N/A |
| is_first_download | N/A | N/A |
| blade_status | N/A | N/A |
| blade_description | N/A | N/A |
| email_scanned | N/A | N/A |
| downloaded_files_scanned | N/A | N/A |
| files_in_queue | N/A | N/A |
| number_of_emulation_environments | N/A | N/A |
| scanned_files | N/A | N/A |
| scanned_files_last_day | N/A | N/A |
| scanned_files_last_week | N/A | N/A |
| scanned_files_last_month | N/A | N/A |
| malware_detected | N/A | N/A |
| malware_detected_last_day | N/A | N/A |
| malware_detected_last_week | N/A | N/A |
| malware_detected_last_month | N/A | N/A |
| scanned_files_on_threat_cloud | N/A | N/A |
| scanned_files_on_threat_cloud_last_day | N/A | N/A |
| scanned_files_on_threat_cloud_last_week | N/A | N/A |
| scanned_files_on_threat_cloud_last_month | N/A | N/A |
| malware_detected_on_threat_cloud | N/A | N/A |
| malware_detected_on_threat_cloud_last_day | N/A | N/A |
| malware_detected_on_threat_cloud_last_week | N/A | N/A |
| malware_detected_on_threat_cloud_last_month | N/A | N/A |
| average_process_time | N/A | N/A |
| average_process_time_last_day | N/A | N/A |
| average_process_time_last_week | N/A | N/A |
| average_process_time_last_month | N/A | N/A |
| average_emulated_file_size | N/A | N/A |
| average_emulated_file_size_last_day | N/A | N/A |
| average_emulated_file_size_last_week | N/A | N/A |
| average_emulated_file_size_last_month | N/A | N/A |
| average_queue_size | N/A | N/A |
| average_queue_size_last_day | N/A | N/A |
| average_queue_size_last_week | N/A | N/A |
| average_queue_size_last_month | N/A | N/A |
| peak_queue_size | N/A | N/A |
| peak_queue_size_last_day | N/A | N/A |
| peak_queue_size_last_week | N/A | N/A |
| peak_queue_size_last_month | N/A | N/A |
| engine_major_version | N/A | N/A |
| engine_minor_version | N/A | N/A |
| file_type | N/A | N/A |
| scanned | N/A | N/A |
| scanned_last_day | N/A | N/A |
| scanned_last_week | N/A | N/A |
| scanned_last_month | N/A | N/A |
| threatcloud_scanned | N/A | N/A |
| threatcloud_scanned_last_day | N/A | N/A |
| threatcloud_scanned_last_week | N/A | N/A |
| threatcloud_scanned_last_month | N/A | N/A |
| threatcloud_malware | N/A | N/A |
| threatcloud_malware_detected_last_day | N/A | N/A |
| threatcloud_malware_detected_last_week | N/A | N/A |
| threatcloud_malware_detected_last_month | N/A | N/A |
| filter_by_static_analysis | N/A | N/A |
| filter_by_static_analysis_last_day | N/A | N/A |
| filter_by_static_analysis_last_week | N/A | N/A |
| filter_by_static_analysis_last_month | N/A | N/A |
| cache_hit_rate | N/A | N/A |
| cache_hit_rate_last_day | N/A | N/A |
| cache_hit_rate_last_week | N/A | N/A |
| cache_hit_rate_last_month | N/A | N/A |
| error_count | N/A | N/A |
| error_count_last_day | N/A | N/A |
| error_count_last_week | N/A | N/A |
| error_count_last_month | N/A | N/A |
| no_resource_count | N/A | N/A |
| no_resource_count_last_day | N/A | N/A |
| no_resource_count_last_week | N/A | N/A |
| no_resource_count_last_month | N/A | N/A |
| Suppressed logs | N/A | N/A |
| contract_name | N/A | N/A |
| subs_exp | N/A | N/A |
| cloud_hourly_quota | N/A | N/A |
| cloud_monthly_quota | N/A | N/A |
| cloud_hourly_remaining_quota | N/A | N/A |
| cloud_remaining_quota | N/A | N/A |
| max_vms_num | N/A | N/A |
| subscription_status | N/A | N/A |
| subscription_description | N/A | N/A |
| cloud_quota_status | N/A | N/A |
| cloud_quota_description | N/A | N/A |
| cloud_quota_identifier | N/A | N/A |
| cloud_monthly_quota_period_start | N/A | N/A |
| cloud_monthly_quota_period_end | N/A | N/A |
| cloud_monthly_quota_usage_for_this_gw | N/A | N/A |
| cloud_hourly_quota_usage_for_this_gw | N/A | N/A |
| cloud_monthly_quota_usage_for_quota_id | N/A | N/A |
| cloud_hourly_quota_usage_for_quota_id | N/A | N/A |
| cloud_monthly_quota_exceeded | N/A | N/A |
| cloud_hourly_quota_exceeded | N/A | N/A |
| cloud_last_quota_update_gmt_time | N/A | N/A |
| status | N/A | N/A |
| short_desc | N/A | N/A |
| long_desc | N/A | N/A |
| scan_hosts_hour | N/A | N/A |
| scan_hosts_day | N/A | N/A |
| scan_hosts_week | N/A | N/A |
| unique_detected_hour | N/A | N/A |
| unique_detected_day | N/A | N/A |
| unique_detected_week | N/A | N/A |
| scan_mail | N/A | N/A |
| TCP packet out of state | N/A | N/A |
| tcp_flags | N/A | N/A |
| message_info | N/A | N/A |
| session_id | N/A | N/A |
| severity | N/A | N/A |
| url | N/A | N/A |
| file name | N/A | N/A |
| scan result | N/A | N/A |
| Protection name | N/A | N/A |
| malware_family | N/A | N/A |
| file_md5 | N/A | N/A |
| Source OS | N/A | N/A |
| dst_country | N/A | N/A |
| Protection Type | N/A | N/A |
| Confidence Level | N/A | N/A |
| protection_id | N/A | N/A |
| malware_rule_id | N/A | N/A |
| malware_rule_name | N/A | N/A |
| malware_action | N/A | N/A |
| vendor_list | N/A | N/A |
| action_details | N/A | N/A |
| description | N/A |scope | N/A |
| FollowUp | N/A | N/A |
| db_ver | N/A | N/A |
| Update Status | N/A | N/A |
| subscription_stat | N/A | N/A |
| subscription_stat_desc | N/A | N/A |
| next_update_desc | N/A | N/A |
| SmartDefense Profile | N/A | N/A |
| Performance Impact | N/A | N/A |
| Industry Reference | N/A | N/A |
| Update Version | N/A | N/A |
| Attack Info | N/A | N/A |
| attack | N/A | N/A |
| rule_guid | N/A | N/A |
| hit | N/A | N/A |
| policy | N/A | N/A |
| first_hit_time | N/A | N/A |
| last_hit_time | N/A | N/A |
| version | N/A | N/A |
| comment | N/A | N/A |
| update_service | N/A | N/A |
| file_name | N/A | N/A |
| file_size | N/A | N/A |
| file_sha1 | N/A | N/A |
| file_sha256 | N/A | N/A |
| verdict | N/A | N/A |
| analyzed_on | N/A | N/A |
| emulated_on | N/A | N/A |
| detected_on | N/A | N/A |
| Errors | N/A | N/A |
| TE_verdict_determined_by | N/A | N/A |
| from | Email address | SMTP Sender |
| to | REmail address | SMTP Recipient |
| Email Subject | N/A | N/A |
| packet_capture_unique_id | N/A | N/A |
| srckeyid | N/A | N/A |
| dstkeyid | N/A | N/A |
| IKE: | N/A | N/A |
| CookieI | N/A | N/A |
| CookieR | N/A | N/A |
| msgid | N/A | N/A |
| IKE notification: | N/A | N/A |
| Certificate DN: | N/A | N/A |
| IKE IDs: | N/A | N/A |
| user | N/A | N/A |
| packet_capture_time | N/A | N/A |
| packet_capture_name | N/A | N/A |
| Validation log: | N/A | N/A |
| Reason: | N/A | N/A |
| Serial num: | N/A | N/A |
| DN: | N/A | N/A |
| Instruction: | N/A | N/A |
| file_id | N/A | N/A |
| mail_id | N/A | N/A |
| mail_sender | email address | N/A |
| mail_recipient | email address | N/A |
| scrubbed_content | N/A | N/A |
| scrub_activity | N/A | N/A |
| risk | N/A | N/A |
| information | N/A | N/A |
| Destination DNS Hostname | N/A | N/A |
| email_session_id | N/A | N/A |
| email_id | N/A | N/A |
| email_recipients_num | N/A | N/A |
| reject_id | N/A | N/A |
| Total logs | N/A | N/A |
| TCP flags | N/A | N/A |
| reject_category | N/A | N/A |
| fw_message | N/A | N/A |
| rpc_prog | N/A | N/A |
| event_count | N/A | N/A |
| Summary | N/A | N/A |
| message | N/A | N/A |
| ip_id | N/A | N/A |
| ip_len | uint16 | N/A |
| ip_offset | uint16 | N/A |
| fragments_dropped | N/A | N/A |
| during_sec | N/A | N/A |
| DCE-RPC Interface UUID | N/A | N/A |
| precise_error | N/A | N/A |
| Referrer_Parent_uid | N/A | N/A |
| control_log_type | N/A | N/A |
| cvpn_category | N/A | N/A |
| event_type | N/A | N/A |
| client_name | N/A | N/A |
| client_version | N/A | N/A |
| client_build | N/A | N/A |
| auth_method | N/A | N/A |
| auth_method2 | N/A | N/A |
| auth_method3 | N/A | N/A |
| user_dn | N/A | N/A |
| fingerprint | N/A | N/A |
| certificate_serial_number | N/A | N/A |
| certificate_issuer | N/A | N/A |
| user_group | N/A | N/A |
| host_type | N/A | N/A |
| os_name | N/A | N/A |
| os_version | N/A | N/A |
| os_edition | N/A | N/A |
| os_service_pack | N/A | N/A |
| os_build | N/A | N/A |
| os_bits | N/A | N/A |
| browser | N/A | N/A |
| device_identification | N/A | N/A |
| hardware_model | N/A | N/A |
| session_timeout | N/A | N/A |
| login_timestamp | N/A | N/A |
| host_ip | N/A | N/A |
| office_mode_ip | N/A | N/A |
| tunnel_protocol | N/A | N/A |
| latitude | N/A | N/A |
| longitude | N/A | N/A |
| license | N/A | N/A |
| Suppressed_Logs | N/A | N/A |
| More | N/A | N/A |
| session_uid | N/A | N/A |
| mac_address | N/A | N/A |
| domain_name | N/A | N/A |
| endpoint_ip | N/A | N/A |
| MACSourceAddress | N/A | N/A |
| auth_status | N/A | N/A |
| identity_src | N/A | N/A |
| snid | N/A | N/A |
| src_user_name | N/A | N/A |
| src_machine_name | N/A | N/A |
| src_user_group | N/A | N/A |
| src_machine_group | N/A | N/A |
| identity_type | N/A | N/A |
| Authentication trial | N/A | N/A |
| roles | N/A | N/A |
| Log ID | N/A | N/A |
| vpn_user | N/A | N/A |
| dst_user_name | N/A | N/A |
| dst_machine_name | N/A | N/A |
| duration | N/A | N/A |
| termination_reason | N/A | N/A |
| UserCheck_UserInput | N/A | N/A |
| Streaming Engine | N/A | N/A |
| drop reason | N/A | N/A |
| Log delay | N/A | N/A |
| capture_uuid | N/A | N/A |

### Types

| Type | Description |
| ---- | ----------- |
| uint8 | Unsigned 8 bit integer |
| uint16 | Unsigned 16 bit integer |
| uint32 | Unsigned 32 bit integer |

Please provide additional information if you have it.
