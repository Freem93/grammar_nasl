#
# KillerApp check
#

for(i = 1; i < 10; i++)
{
	display(i, "\n");
}

j = 1;

while( j <= 10)
{
	display(j, "\n");
	j++;
}

x = 0;
repeat {
	display(++x, "\n");
} until ( x >= 10);

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