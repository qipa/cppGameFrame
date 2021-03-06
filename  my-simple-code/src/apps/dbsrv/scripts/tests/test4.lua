
module(..., package.seeall);

function test()
	local msg = pb.new("db_srv.set");
	msg.uid = 2222;
	msg.argback = "test4";
	
	local table1 = msg.tables.add();
	table1.table_name = "user";
	table1.table_bin = "2343254354354354654455454fksjdkfjdskfjkd";
	
	local table2 = msg.tables.add();
	table2.table_name = "pet";
	table2.table_bin = "dsfjsdkafjkjfksajfkjskdfjklasjfkdljafjalj";
	
	local user2 = pb.new("lm.user2");
	user2.uid = 2222;
	user2.uname = "zjx";
	--user2.param1 = 999999;
	user2.param2 = "fjdskfjdskljfklsjdfklslfjsldfjdkslfjksajf;";
	
	local table_bin = pb.serializeToString(user2);
	local table3 = msg.tables.add();
	table3.table_name = "user2";
	table3.table_bin = table_bin;
	
	local function assert_function(retmsg)
		print("\nstart check test4============");
		if retmsg.uid == 2222 then
			local size = retmsg.table_statuses.size();
			for i = 1, size do
				assert_equal(retmsg.table_statuses[i].status, "OK",  "", 1);
			end
		end	
	end
	
	return msg, assert_function;
end

addTestUnit(test);
