(
	:cmd_name (try)
	:parse_from (last_position)
	:regexp ("kernel: (ACCEPT|DROP)")
	:add_field (
		:type (const)
		:field_name (product)
		:field_type (string_id)
		:field_value (Firewall)
	)
	:on_success (
		:command (
			:cmd_name (group_try)
			:mode (try_until_success)
			: (
				:command (
					:cmd_name (try)
					:parse_from (start_position)
					:regexp ("((Jan|Feb|Mar|Apr|May|Jun|Jul|Aug|Sep|Oct|Nov|Dec)[ 	]+[0-9]+[ 	]+[0-9]+:[0-9]+:[0-9]+)[ 	]+([a-zA-Z]+[0-9a-z A-Z_-]*:)[ 	]+([a-zA-Z]+[0-9a-zA-Z_-]*)[ 	]+(IN=)([a-zA-Z]+[0-9a-zA-Z_-]*)[ 	]+(.*)[ 	]+(SRC=)([0-9]+\.[0-9]+\.[0-9]+\.[0-9]+)[ 	]+")
					:add_field (
						:type (index)
						:field_name (action)
						:field_type (action)
						:field_index (4)
						:dict_name (Firewall_action)
						:comment ("Any word without whitespace that begins with a letter")
					)
					:add_field (
						:type (index)
						:field_name (ifname)
						:field_type (ifname)
						:field_index (6)
						:comment ("Any word without whitespace that begins with a letter")
					)
					:add_field (
						:type (index)
						:field_name (src)
						:field_type (ipaddr)
						:field_index (9)
						:comment ("V4 IP address")
					)
					:on_success (
						:command (
							:cmd_name (try)
							:parse_from (last_position)
							:regexp ("(DST=)([0-9]+\.[0-9]+\.[0-9]+\.[0-9]+)[ 	]+(LEN=)([0-9]+)[ 	]+(.*)[ 	]+(PROTO=)(udp|UDP|tcp|TCP|icmp|ICMP)[ 	]+(SPT=)")
							:add_field (
								:type (index)
								:field_name (dst)
								:field_type (ipaddr)
								:field_index (2)
								:comment ("V4 IP address")
							)
							:add_field (
								:type (index)
								:field_name (len)
								:field_type (string)
								:field_index (4)
								:comment ("Any natural number")
							)
							:add_field (
								:type (index)
								:field_name (proto)
								:field_type (protocol)
								:field_index (7)
								:dict_name (Firewall_protocol)
								:comment ("Common protocols names - Don't forget to use mapping for these")
							)
							:on_success (
								:command (
									:cmd_name (try)
									:parse_from (last_position)
									:regexp ("([0-9]+)[ 	]+(DPT=)")
									:add_field (
										:type (index)
										:field_name (s_port)
										:field_type (port)
										:field_index (1)
										:comment ("Any natural number")
									)
									:on_success (
										:command (
											:cmd_name (try)
											:parse_from (last_position)
											:regexp ("([0-9]+)[ 	]+(.*)")
											:add_field (
												:type (index)
												:field_name (service)
												:field_type (port)
												:field_index (1)
												:comment ("Any natural number")
											)
										)
									)
								)
							)
						)
					)
				)
			)
			: (
				:command (
					:cmd_name (try)
					:parse_from (start_position)
					:regexp ("((Jan|Feb|Mar|Apr|May|Jun|Jul|Aug|Sep|Oct|Nov|Dec)[ 	]+[0-9]+[ 	]+[0-9]+:[0-9]+:[0-9]+)[ 	]+([a-zA-Z]+[0-9a-zA-Z_-]*:)[ 	]+([a-zA-Z]+[0-9a-zA-Z_-]*)[ 	]+(IN=)([a-zA-Z]+[0-9a-zA-Z_-]*)[ 	]+(.*)[ 	]+(SRC=)")
					:add_field (
						:type (index)
						:field_name (action)
						:field_type (action)
						:field_index (4)
						:dict_name (Firewall_action)
						:comment ("Any word without whitespace that begins with a letter")
					)
					:add_field (
						:type (index)
						:field_name (ifname)
						:field_type (ifname)
						:field_index (6)
						:comment ("Any word without whitespace that begins with a letter")
					)
					:on_success (
						:command (
							:cmd_name (group_try)
							:mode (try_until_success)
							: (
								:command (
									:cmd_name (try)
									:parse_from (last_position)
									:regexp ("([0-9]+\.[0-9]+\.[0-9]+\.[0-9]+)[ 	]+(DST=)")
									:add_field (
										:type (index)
										:field_name (src)
										:field_type (ipaddr)
										:field_index (1)
										:comment ("V4 IP address")
									)
									:on_success (
										:command (
											:cmd_name (try)
											:parse_from (last_position)
											:regexp ("([0-9]+\.[0-9]+\.[0-9]+\.[0-9]+)[ 	]+(LEN=)([0-9]+)[ 	]+(.*)[ 	]+(PROTO=)(udp|UDP|tcp|TCP|icmp|ICMP)[ 	]+(TYPE=)([0-9]+)[ 	]+")
											:add_field (
												:type (index)
												:field_name (dst)
												:field_type (ipaddr)
												:field_index (1)
												:comment ("V4 IP address")
											)
											:add_field (
												:type (index)
												:field_name (len)
												:field_type (string)
												:field_index (3)
												:comment ("Any natural number")
											)
											:add_field (
												:type (index)
												:field_name (proto)
												:field_type (protocol)
												:field_index (6)
												:dict_name (Firewall_protocol)
												:comment ("Common protocols names - Don't forget to use mapping for these")
											)
											:add_field (
												:type (index)
												:field_name (icmp-type)
												:field_type (string)
												:field_index (8)
												:comment ("Any natural number")
											)
											:on_success (
												:command (
													:cmd_name (try)
													:parse_from (last_position)
													:regexp ("(CODE=)([0-9]+)[ 	]+(.*)")
													:add_field (
														:type (index)
														:field_name (icmp-code)
														:field_type (string)
														:field_index (2)
														:comment ("Any natural number")
													)
												)
											)
										)
									)
								)
							)
							: (
								:command (
									:cmd_name (try)
									:parse_from (start_position)
									:regexp ("(([0-9a-fA-F]{1,4}:){7,7}[0-9a-fA-F]{1,4})[ 	]+")
									:add_field (
										:type (index)
										:field_name (src)
										:field_type (ipaddr)
										:field_index (1)
										:comment ("Any unix path")
									)
									:on_success (
										:command (
											:cmd_name (group_try)
											:mode (try_until_success)
											: (
												:command (
													:cmd_name (try)
													:parse_from (start_position)
													:regexp ("(DST=)(([0-9a-fA-F]{1,4}:){7,7}[0-9a-fA-F]{1,4})[ 	]+(LEN=)([0-9]+)[ 	]+(.*)[ 	]+(PROTO=)([a-zA-Z]+[0-9a-zA-Z_-]*)[ 	]+")
													:add_field (
														:type (index)
														:field_name (dst)
														:field_type (ipaddr)
														:field_index (2)
														:comment ("Any unix path")
													)
													:add_field (
														:type (index)
														:field_name (len)
														:field_type (string)
														:field_index (5)
														:comment ("Any natural number")
													)
													:add_field (
														:type (index)
														:field_name (proto)
														:field_type (protocol)
														:field_index (8)
														:dict_name (Firewall_protocol)
														:comment ("Any word without whitespace that begins with a letter")
													)
													:on_success (
														:command (
															:cmd_name (group_try)
															:mode (try_until_success)
															: (
																:command (
																	:cmd_name (try)
																	:parse_from (last_position)
																	:regexp ("(SPT=)([0-9]+)[ 	]+")
																	:add_field (
																		:type (index)
																		:field_name (s_port)
																		:field_type (port)
																		:field_index (2)
																		:comment ("Any natural number")
																	)
																	:on_success (
																		:command (
																			:cmd_name (try)
																			:parse_from (last_position)
																			:regexp ("(DPT=)([0-9]+)[ 	]+(.*)")
																			:add_field (
																				:type (index)
																				:field_name (service)
																				:field_type (port)
																				:field_index (2)
																				:comment ("Any natural number")
																			)
																		)
																	)
																)
															)
															: (
																:command (
																	:cmd_name (try)
																	:parse_from (last_position)
																	:regexp ("(TYPE=)([0-9]+)[ 	]+")
																	:add_field (
																		:type (index)
																		:field_name (icmp-type)
																		:field_type (string)
																		:field_index (2)
																		:comment ("Any natural number")
																	)
																	:on_success (
																		:command (
																			:cmd_name (try)
																			:parse_from (last_position)
																			:regexp ("(CODE=)([0-9]+)[ 	]+(.*)")
																			:add_field (
																				:type (index)
																				:field_name (icmp-code)
																				:field_type (string)
																				:field_index (2)
																				:comment ("Any natural number")
																			)
																		)
																	)
																)
															)
														)
													)
												)
											)
										)
									)
								)
							)
						)
					)
				)
			)
		)
	)
)
