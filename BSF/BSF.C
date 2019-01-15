(
	:cmd_name (try)
	:parse_from (last_position)
	:regexp ("(inbound/pass(1|2)|scan|outbound/smtp):")
	:add_field (
		:type (const)
		:field_name (product)
		:field_type (string_id)
		:field_value (AntiSpam)
	)
	:on_success (
		:command (
			:cmd_name (group_try)
			:mode (try_until_success)
			: (
				:command (
					:cmd_name (try)
					:parse_from (start_position)
					:regexp ("([ 	]*)(scan):[ 	]+([0-9a-zA-Z_./-]+)\[([0-9]+\.[0-9]+\.[0-9]+\.[0-9]+)][ 	]+([0-9a-zA-Z_./-]+)[ 	]+([0-9]+)[ 	]+([0-9]+)[ 	]+(SCAN|RECV|SEND)[ 	]+")
					:add_field (
						:type (index)
						:field_name (action)
						:field_type (action)
						:field_index (2)
						:dict_name (AntiSpam_BSF_action)
						:comment (SCAN)
					)
					:add_field (
						:type (index)
						:field_name (src)
						:field_type (ipaddr)
						:field_index (4)
						:comment ("Source IP")
					)
					:add_field (
						:type (index)
						:field_name (email_id)
						:field_type (string)
						:field_index (5)
						:comment ("Barracuda Message ID")
					)
					:on_success (
						:command (
							:cmd_name (try)
							:parse_from (last_position)
							:regexp ("([0-9a-zA-Z_./-]+)[ 	]+([^ 	]+)[ 	]+([^ 	]+)[ 	]+(((-|)[0-9.]+|-))[ 	]+([0-9]+)[ 	]+([0-9]+)[ 	]+([^ 	]+)[ 	]+")
							:add_field (
								:type (index)
								:field_name (from)
								:field_type (string)
								:field_index (2)
								:comment (Sender)
							)
							:add_field (
								:type (index)
								:field_name (to)
								:field_type (string)
								:field_index (3)
								:comment (Recipient)
							)
							:on_success (
								:command (
									:cmd_name (try)
									:parse_from (last_position)
									:regexp ("(SZ:)([0-9]+)[ 	]+(.*)")
									:add_field (
										:type (index)
										:field_name (message_info)
										:field_type (string)
										:field_index (3)
										:comment (Stuff)
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
					:regexp ("([ 	]*)(outbound/smtp):[ 	]+([0-9]+\.[0-9]+\.[0-9]+\.[0-9]+)[ 	]+([0-9a-zA-Z_./-]+)[ 	]+([0-9]+)[ 	]+([0-9]+)[ 	]+(SEND)[ 	]+(ENC|-)[ 	]+")
					:add_field (
						:type (index)
						:field_name (src)
						:field_type (ipaddr)
						:field_index (3)
						:comment ("V4 IP address")
					)
					:add_field (
						:type (index)
						:field_name (email_id)
						:field_type (string)
						:field_index (4)
						:comment ("Barracuda Message ID")
					)
					:on_success (
						:command (
							:cmd_name (try)
							:parse_from (last_position)
							:regexp ("([0-9]+)[ 	]+([0-9a-zA-Z_./-]+)[ 	]+([0-9]+)[ 	]+(.*)")
							:add_field (
								:type (index)
								:field_name (message_info)
								:field_type (string)
								:field_index (4)
								:comment ("SMTP response string")
							)
						)
					)
				)
			)
			: (
				:command (
					:cmd_name (try)
					:parse_from (start_position)
					:regexp ("([ 	]*)(inbound/pass1):[ 	]+([0-9a-zA-Z_./-]+)\[([0-9]+\.[0-9]+\.[0-9]+\.[0-9]+)][ 	]+([0-9a-zA-Z_./-]+)[ 	]+([0-9]+)[ 	]+([0-9]+)[ 	]+(RECV)[ 	]+")
					:add_field (
						:type (index)
						:field_name (src)
						:field_type (ipaddr)
						:field_index (4)
						:comment ("V4 IP address")
					)
					:add_field (
						:type (index)
						:field_name (email_id)
						:field_type (string)
						:field_index (5)
						:comment ("Barracuda Message ID")
					)
					:on_success (
						:command (
							:cmd_name (try)
							:parse_from (last_position)
							:regexp ("([^ 	]+)[ 	]+([^ 	]+)[ 	]+([0-9]+)[ 	]+([0-9]+)[ 	]+(.*)")
							:add_field (
								:type (index)
								:field_name (from)
								:field_type (string)
								:field_index (1)
								:comment (Sender)
							)
							:add_field (
								:type (index)
								:field_name (to)
								:field_type (string)
								:field_index (2)
								:comment (Recipient)
							)
						)
					)
				)
			)
			: (
				:command (
					:cmd_name (try)
					:parse_from (start_position)
					:regexp ("([ 	]*)(inbound/pass1):[ 	]+([0-9a-zA-Z_./-]+)\[([0-9]+\.[0-9]+\.[0-9]+\.[0-9]+)][ 	]+([0-9a-zA-Z_./-]+)[ 	]+([0-9]+)[ 	]+([0-9]+)[ 	]+(SCAN)[ 	]+")
					:add_field (
						:type (index)
						:field_name (src)
						:field_type (ipaddr)
						:field_index (4)
						:comment ("V4 IP address")
					)
					:add_field (
						:type (index)
						:field_name (email_id)
						:field_type (string)
						:field_index (5)
						:comment ("Barracuda Message ID")
					)
					:on_success (
						:command (
							:cmd_name (try)
							:parse_from (last_position)
							:regexp ("(ENC|-)[ 	]+([^ 	]+)[ 	]+([^ 	]+)[ 	]+(((-|)[0-9.]+|-))[ 	]+([0-9]+)[ 	]+([0-9]+)[ 	]+")
							:add_field (
								:type (index)
								:field_name (from)
								:field_type (string)
								:field_index (2)
								:comment (Sender)
							)
							:add_field (
								:type (index)
								:field_name (to)
								:field_type (string)
								:field_index (3)
								:comment (Recipient)
							)
							:on_success (
								:command (
									:cmd_name (try)
									:parse_from (last_position)
									:regexp ("([^ 	]+)[ 	]+(SZ:)([0-9]+)[ 	]+(.*)")
									:add_field (
										:type (index)
										:field_name (message_info)
										:field_type (string)
										:field_index (4)
										:comment (Info)
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