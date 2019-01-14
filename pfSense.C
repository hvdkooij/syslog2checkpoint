(
	:cmd_name (try)
	:parse_from (last_position)
	:regexp (filterlog:)
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
					:regexp ("((Jan|Feb|Mar|Apr|May|Jun|Jul|Aug|Sep|Oct|Nov|Dec)[ 	]+[0-9]+[ 	]+[0-9]+:[0-9]+:[0-9]+)[ 	]+filterlog:[ 	]+([0-9]+),,,([0-9]+),([a-zA-Z]+[0-9a-zA-Z_-]*),([a-zA-Z]+[0-9a-zA-Z_-]*),([a-zA-Z]+[0-9a-zA-Z_-]*),(in|out),")
					:add_field (
						:type (index)
						:field_name (ifname)
						:field_type (ifname)
						:field_index (5)
						:comment ("Real interface")
					)
					:add_field (
						:type (index)
						:field_name (action)
						:field_type (action)
						:field_index (7)
						:dict_name (Firewall_action)
						:comment (Action)
					)
					:add_field (
						:type (index)
						:field_name (ifdir)
						:field_type (ifdir)
						:field_index (8)
						:dict_name (Firewall_interface_dir)
						:comment (Direction)
					)
					:on_success (
						:command (
							:cmd_name (group_try)
							:mode (try_until_success)
							: (
								:command (
									:cmd_name (try)
									:parse_from (last_position)
									:regexp ("(4|6),((0x[0-9a-fA-F]+|)),(([a-zA-Z]+[0-9a-zA-Z_-]*|[0-9]+|)),(([0-9]+|)),")
									:on_success (
										:command (
											:cmd_name (try)
											:parse_from (last_position)
											:regexp ("(([0-9]+|)),(([0-9]+|)),(([a-zA-Z]+[0-9a-zA-Z_-]*|)),((6|17)),(udp|UDP|tcp|TCP|icmp|ICMP),")
											:add_field (
												:type (index)
												:field_name (proto)
												:field_type (protocol)
												:field_index (7)
												:comment ("Protocol ID")
											)
											:on_success (
												:command (
													:cmd_name (try)
													:parse_from (last_position)
													:regexp ("(([0-9]+|)),([0-9]+\.[0-9]+\.[0-9]+\.[0-9]+),([0-9]+\.[0-9]+\.[0-9]+\.[0-9]+),([0-9]+),([0-9]+),(.*)")
													:add_field (
														:type (index)
														:field_name (src)
														:field_type (ipaddr)
														:field_index (3)
														:comment ("V4 IP address")
													)
													:add_field (
														:type (index)
														:field_name (dst)
														:field_type (ipaddr)
														:field_index (4)
														:comment ("V4 IP address")
													)
													:add_field (
														:type (index)
														:field_name (s_port)
														:field_type (port)
														:field_index (5)
														:comment ("Any natural number")
													)
													:add_field (
														:type (index)
														:field_name (service)
														:field_type (port)
														:field_index (6)
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
									:parse_from (last_position)
									:regexp ("(4|6),((0x[0-9a-fA-F]+|)),,(([0-9]+|)),(([0-9]+|)),")
									:on_success (
										:command (
											:cmd_name (try)
											:parse_from (last_position)
											:regexp ("(([0-9]+|)),(([a-zA-Z]+[0-9a-zA-Z_-]*|)),(1),(udp|UDP|tcp|TCP|icmp|ICMP),([0-9]+),")
											:add_field (
												:type (index)
												:field_name (proto)
												:field_type (protocol)
												:field_index (5)
												:comment ("Protocol ID")
											)
											:on_success (
												:command (
													:cmd_name (try)
													:parse_from (last_position)
													:regexp ("([0-9]+\.[0-9]+\.[0-9]+\.[0-9]+),([0-9]+\.[0-9]+\.[0-9]+\.[0-9]+),([a-zA-Z]+[0-9a-zA-Z_-]*),(.*)")
													:add_field (
														:type (index)
														:field_name (src)
														:field_type (ipaddr)
														:field_index (1)
														:comment ("V4 IP address")
													)
													:add_field (
														:type (index)
														:field_name (dst)
														:field_type (ipaddr)
														:field_index (2)
														:comment ("V4 IP address")
													)
													:add_field (
														:type (index)
														:field_name (service)
														:field_type (port)
														:field_index (3)
														:dict_name (Firewall_ICMP)
														:comment ("Any word without whitespace that begins with a letter")
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