# Field Names

This is the result of a bit of reverse enginering.
Most particularly by running a `fwm logexport` and fetching the first line.

| Field Name | Type | Description |
| ---------- | ---- | ----------- |
| num | number | line number in log |
| date | N/A | N/A |
| time | N/A | N/A |
| orig | N/A | Origin of the log event |
| type | N/A | N/A |
| action | N/A | N/A |
| alert | N/A | N/A |
| i/f_name | Text | Interface Name |
| i/f_dir | (0/1) | Interface direction |
| product | Usually the blade in use |
| log_sys_message | N/A |
| origin_id | N/A |
| ProductFamily | N/A |
| inzone | N/A |
| outzone | N/A |
| rule | Security policy rule number [number] |
| rule_uid | UID of policy rule |
| rule_name | Name of policy rule |
| service_id | N/A |
| src | Source IP address [IP] |
| dst | Destination IP Address [IP] |
| proto | IP Protocol [number] |
| scheme: | N/A |
| methods: | N/A |
| peer gateway | N/A |
| encryption failure: | N/A |
| partner | N/A |
| community | N/A |
| fw_subproduct | N/A |
| vpn_feature_name | N/A |
| service | Destination Port [number] |
| s_port | Source Port [number] |
| resource | N/A |
| xlatesrc | Translated Source IP Address (after NAT) [IP] |
| xlatedst | Translated Destination IP address (after NAT) [IP] |
| NAT_rulenum | NAT policy rule number |
| NAT_addtnl_rulenum | additional NAT policy rule number |
| xlatedport | Translated destination port [number] |
| xlatesport | Translated source port [number] |
| UserCheck_incident_uid | N/A |
| UserCheck | N/A |
| dlp_incident_uid | N/A |
| log_id | N/A |
| user_status | N/A |
| portal_message | N/A |
| UserCheck_Confirmation_Level | N/A |
| frequency | N/A |
| UserCheck_Interaction_name | N/A |
| ICMP | N/A |
| ICMP Type | N/A |
| ICMP Code | N/A |
| bytes | N/A |
| sent_bytes | N/A |
| received_bytes | N/A |
| app_id | N/A |
| browse_time | N/A |
| appi_name | N/A |
| app_desc | N/A |
| app_category | N/A |
| matched_category | N/A |
| app_properties | N/A |
| app_risk | N/A |
| app_rule_id | N/A |
| app_rule_name | N/A |
| web_client_type | N/A |
| web_server_type | N/A |
| app_sig_id | N/A |
| ticket_id | N/A |
| reason | N/A |
| proxy_src_ip | N/A |
| Referrer_self_uid | N/A |
| update_status | N/A |
| update_description | N/A |
| is_first_download | N/A |
| blade_status | N/A |
| blade_description | N/A |
| email_scanned | N/A |
| downloaded_files_scanned | N/A |
| files_in_queue | N/A |
| number_of_emulation_environments | N/A |
| scanned_files | N/A |
| scanned_files_last_day | N/A |
| scanned_files_last_week | N/A |
| scanned_files_last_month | N/A |
| malware_detected | N/A |
| malware_detected_last_day | N/A |
| malware_detected_last_week | N/A |
| malware_detected_last_month | N/A |
| scanned_files_on_threat_cloud | N/A |
| scanned_files_on_threat_cloud_last_day | N/A |
| scanned_files_on_threat_cloud_last_week | N/A |
| scanned_files_on_threat_cloud_last_month | N/A |
| malware_detected_on_threat_cloud | N/A |
| malware_detected_on_threat_cloud_last_day | N/A |
| malware_detected_on_threat_cloud_last_week | N/A |
| malware_detected_on_threat_cloud_last_month | N/A |
| average_process_time | N/A |
| average_process_time_last_day | N/A |
| average_process_time_last_week | N/A |
| average_process_time_last_month | N/A |
| average_emulated_file_size | N/A |
| average_emulated_file_size_last_day | N/A |
| average_emulated_file_size_last_week | N/A |
| average_emulated_file_size_last_month | N/A |
| average_queue_size | N/A |
| average_queue_size_last_day | N/A |
| average_queue_size_last_week | N/A |
| average_queue_size_last_month | N/A |
| peak_queue_size | N/A |
| peak_queue_size_last_day | N/A |
| peak_queue_size_last_week | N/A |
| peak_queue_size_last_month | N/A |
| engine_major_version | N/A |
| engine_minor_version | N/A |
| file_type | N/A |
| scanned | N/A |
| scanned_last_day | N/A |
| scanned_last_week | N/A |
| scanned_last_month | N/A |
| threatcloud_scanned | N/A |
| threatcloud_scanned_last_day | N/A |
| threatcloud_scanned_last_week | N/A |
| threatcloud_scanned_last_month | N/A |
| threatcloud_malware | N/A |
| threatcloud_malware_detected_last_day | N/A |
| threatcloud_malware_detected_last_week | N/A |
| threatcloud_malware_detected_last_month | N/A |
| filter_by_static_analysis | N/A |
| filter_by_static_analysis_last_day | N/A |
| filter_by_static_analysis_last_week | N/A |
| filter_by_static_analysis_last_month | N/A |
| cache_hit_rate | N/A |
| cache_hit_rate_last_day | N/A |
| cache_hit_rate_last_week | N/A |
| cache_hit_rate_last_month | N/A |
| error_count | N/A |
| error_count_last_day | N/A |
| error_count_last_week | N/A |
| error_count_last_month | N/A |
| no_resource_count | N/A |
| no_resource_count_last_day | N/A |
| no_resource_count_last_week | N/A |
| no_resource_count_last_month | N/A |
| Suppressed logs | N/A |
| contract_name | N/A |
| subs_exp | N/A |
| cloud_hourly_quota | N/A |
| cloud_monthly_quota | N/A |
| cloud_hourly_remaining_quota | N/A |
| cloud_remaining_quota | N/A |
| max_vms_num | N/A |
| subscription_status | N/A |
| subscription_description | N/A |
| cloud_quota_status | N/A |
| cloud_quota_description | N/A |
| cloud_quota_identifier | N/A |
| cloud_monthly_quota_period_start | N/A |
| cloud_monthly_quota_period_end | N/A |
| cloud_monthly_quota_usage_for_this_gw | N/A |
| cloud_hourly_quota_usage_for_this_gw | N/A |
| cloud_monthly_quota_usage_for_quota_id | N/A |
| cloud_hourly_quota_usage_for_quota_id | N/A |
| cloud_monthly_quota_exceeded | N/A |
| cloud_hourly_quota_exceeded | N/A |
| cloud_last_quota_update_gmt_time | N/A |
| status | N/A |
| short_desc | N/A |
| long_desc | N/A |
| scan_hosts_hour | N/A |
| scan_hosts_day | N/A |
| scan_hosts_week | N/A |
| unique_detected_hour | N/A |
| unique_detected_day | N/A |
| unique_detected_week | N/A |
| scan_mail | N/A |
| TCP packet out of state | N/A |
| tcp_flags | N/A |
| message_info | N/A |
| session_id | N/A |
| severity | N/A |
| url | N/A |
| file name | N/A |
| scan result | N/A |
| Protection name | N/A |
| malware_family | N/A |
| file_md5 | N/A |
| Source OS | N/A |
| dst_country | N/A |
| Protection Type | N/A |
| Confidence Level | N/A |
| protection_id | N/A |
| malware_rule_id | N/A |
| malware_rule_name | N/A |
| malware_action | N/A |
| vendor_list | N/A |
| action_details | N/A |
| description | N/A |scope | N/A |
| FollowUp | N/A |
| db_ver | N/A |
| Update Status | N/A |
| subscription_stat | N/A |
| subscription_stat_desc | N/A |
| next_update_desc | N/A |
| SmartDefense Profile | N/A |
| Performance Impact | N/A |
| Industry Reference | N/A |
| Update Version | N/A |
| Attack Info | N/A |
| attack | N/A |
| rule_guid | N/A |
| hit | N/A |
| policy | N/A |
| first_hit_time | N/A |
| last_hit_time | N/A |
| version | N/A |
| comment | N/A |
| update_service | N/A |
| file_name | N/A |
| file_size | N/A |
| file_sha1 | N/A |
| file_sha256 | N/A |
| verdict | N/A |
| analyzed_on | N/A |
| emulated_on | N/A |
| detected_on | N/A |
| Errors | N/A |
| TE_verdict_determined_by | N/A |
| from | SMTP Sender [email address] |
| to | SMTP Recipient [email address] |
| Email Subject | N/A |
| packet_capture_unique_id | N/A |
| srckeyid | N/A |
| dstkeyid | N/A |
| IKE: | N/A |
| CookieI | N/A |
| CookieR | N/A |
| msgid | N/A |
| IKE notification: | N/A |
| Certificate DN: | N/A |
| IKE IDs: | N/A |
| user | N/A |
| packet_capture_time | N/A |
| packet_capture_name | N/A |
| Validation log: | N/A |
| Reason: | N/A |
| Serial num: | N/A |
| DN: | N/A |
| Instruction: | N/A |
| file_id | N/A |
| mail_id | N/A |
| mail_sender | N/A |
| mail_recipient | N/A |
| scrubbed_content | N/A |
| scrub_activity | N/A |
| risk | N/A |
| information | N/A |
| Destination DNS Hostname | N/A |
| email_session_id | N/A |
| email_id | N/A |
| email_recipients_num | N/A |
| reject_id | N/A |
| Total logs | N/A |
| TCP flags | N/A |
| reject_category | N/A |
| fw_message | N/A |
| rpc_prog | N/A |
| event_count | N/A |
| Summary | N/A |
| message | N/A |
| ip_id | N/A |
| ip_len | N/A |
| ip_offset | N/A |
| fragments_dropped | N/A |
| during_sec | N/A |
| DCE-RPC Interface UUID | N/A |
| precise_error | N/A |
| Referrer_Parent_uid | N/A |
| control_log_type | N/A |
| cvpn_category | N/A |
| event_type | N/A |
| client_name | N/A |
| client_version | N/A |
| client_build | N/A |
| auth_method | N/A |
| auth_method2 | N/A |
| auth_method3 | N/A |
| user_dn | N/A |
| fingerprint | N/A |
| certificate_serial_number | N/A |
| certificate_issuer | N/A |
| user_group | N/A |
| host_type | N/A |
| os_name | N/A |
| os_version | N/A |
| os_edition | N/A |
| os_service_pack | N/A |
| os_build | N/A |
| os_bits | N/A |
| browser | N/A |
| device_identification | N/A |
| hardware_model | N/A |
| session_timeout | N/A |
| login_timestamp | N/A |
| host_ip | N/A |
| office_mode_ip | N/A |
| tunnel_protocol | N/A |
| latitude | N/A |
| longitude | N/A |
| license | N/A |
| Suppressed_Logs | N/A |
| More | N/A |
| session_uid | N/A |
| mac_address | N/A |
| domain_name | N/A |
| endpoint_ip | N/A |
| MACSourceAddress | N/A |
| auth_status | N/A |
| identity_src | N/A |
| snid | N/A |
| src_user_name | N/A |
| src_machine_name | N/A |
| src_user_group | N/A |
| src_machine_group | N/A |
| identity_type | N/A |
| Authentication trial | N/A |
| roles | N/A |
| Log ID | N/A |
| vpn_user | N/A |
| dst_user_name | N/A |
| dst_machine_name | N/A |
| duration | N/A |
| termination_reason | N/A |
| UserCheck_UserInput | N/A |
| Streaming Engine | N/A |
| drop reason | N/A |
| Log delay | N/A |
| capture_uuid | N/A |
