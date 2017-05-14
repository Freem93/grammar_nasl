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

#if tests

if (-1);
if (0);
if (1);
if (q = 1);
if (foo());
if (FALSE);
if (TRUE);
if (NULL);
#if ('');
if ('foo');
if ("");
if ("foo");
if (1) {}
if (1) if (1) foo();
if (1) if (1) {foo();}
if (1) if (1) foo(); else bar();
if (foo) {};

#tests array

foo = {};
foo = {1:02, 3:4, 5:0x6};
foo = {'a':"b", "c":'d'};
foo = {'a':1, 2:"b"};
foo = {'a':1, 2:"b",}; #must be fail?
foo = {'a':1, 2:"b",,}; #must be fail
return {,}; #must be fail
return {a:@foo, b:"hello", c:3};

#assigment tests

q = 0;
q = '';
q = 'foo';
q = "";
q = "foo";
q = foo();
q = @foo;
b = a = 0;
b = 1 + a = 0;
c = 1 + b = 1 + a = 0;
q = 0 + 0;
q = 0 - 0;
q = 0 * 0;
q = 0 / 0;
q = 0 % 0;
if (q = foo());
while (q = foo());
q = [];
q = [[[]], [[]], [[]]];
q = [1];
q = [1, 'b', foo()];
foo(arg:[1]);
q = [] + [];
q = [] + [];
q = {'a':{'b':{}}, 'c':{'d':{}}, 'e':{'f':{}}};
q = {"a":1}
q = {1:1, 2:'b', 3:foo()};
foo(arg:{1:1});
q = {} + {};

#test blank
;
;;
;;;

#test block
{
	a = 1;
	break;
	fn();
	;
}


{}

{;}
{\n#\n}


#test call
break(); #must be fail
continue(); #must be fail
else(); #must be fail
export(); #must be fail
for(); #must be fail
foreach(); #must be fail
function(); #must be fail
global_var(); #must be fail
if(); #must be fail
import(); #must be fail
include(); #must be fail
local_var(); #must be fail
local_var(); #must be fail
return(); #must be fail
until(); #must be fail
while(); #must be fail
FALSE(); #must be fail
NULL(); #must be fail
TRUE(); #must be fail

in();
x();
break_();
continue_();
else_();
export_();
export_();
foreach_();
function_();
global_var_();
if_();
import_();
include_();
local_var_();
repeat_();
return_();
until_();
while_();
FALSE_();
NULL_();
TRUE_();

foo[a][1]['b'][c+d].e.f.g(); #test_no_args
foo[a][1]['b'][c+d].e.f.g(1, '2', three); #test_anonymous_args
foo[a][1]['b'][c+d].e.f.g(a:1, b:'2', c:three) #test_named_args
foo[a][1]['b'][c+d].e.f.g(a:1, '2', c:three, bar()); #test_mixed_args


#Constant tests
z = FALSE;
z = NULL;
z = TRUE;


#Expression tests
q = (-a);
q = (a);
q = (~a);
q = (a + b);
q = (a + (b + c));
q = ((a + b) + (b + d));
q = (a + b) == c;
q = (a + b) == (c + d);
q = ((a + b) == (c + d));
q = (a + b) >> c;
q = (a + b) >> (c + d);
q = ((a + b) >> (c + d));
q = (((1)));
q = (((a = b)));

q = 0 | 1;
q = 0 & 1;

q = a.b; #test period
q = a._;
q = a.1 #must be fail
q = a + b / c + d;

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