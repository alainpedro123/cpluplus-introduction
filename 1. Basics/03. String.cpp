STRING

1) String Declaration
string mystring = "This is a string";
string mystring ("This is a string");
string mystring {"This is a string"};


2) Character and string literals are enclosed in quotes:

'z'
'p'
"Hello world"
"How do you do?"

3) List of the single character escape codes:

Escape code	Description
\n	newline
\r	carriage return
\t	tab
\v	vertical tab
\b	backspace
\f	form feed (page feed)
\a	alert (beep)
\'	single quote (')
\"	double quote (")
\?	question mark (?)
\\	backslash (\)

following code:
x = "string expressed in \
two lines"

is equivalent to:
x = "string expressed in two lines"



4) String is also a Class - It is a very powerful class to handle and manipulate strings of characters

1) Array that can store up to 20 elements of type char
char foo [20];

2)
char myword[] = { 'H', 'e', 'l', 'l', 'o', '\0' };
char myword2[] = "Hello"; 