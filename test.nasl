#
# KillerApp check
#


for( ; ; )
{
	display(i, "\n");
}

j = 1;

while(true)
{
	display(j, "\n");
	j += 1;
}

x = 0;
repeat {
	display(++x, "\n");
} until (true);

i = 100;
function print_garbage () {
   for (i = 0; i < 5; i++) {
       display(i);
   }
   display(" — ");
   return TRUE;
}
print_garbage();
display("some ", i);

if(description)
{
	script_id(50000);   #sfsfsf
	script_name(english:"Check for KillerApp");
	script_description(english:"KillerApp is a high-risk application and should be removed.");
	script_summary(english:"Checks for KillerApp");
	script_copyright(english:"Copyright 2008, Mike Chapple");
	script_category(ACT_ATTACK);
	script_family(english:"Denial of Service");
	script_require_ports("Services/www",80);
}

include("http_func.inc");
include("http_keepalive.inc");

port = get_http_port(default:80);

if (get_port_state(port))
{
	if (is_cgi_installed_ka(item:"/killerapp.asp",port:port))
	{
		security_hole(port);
	}
}