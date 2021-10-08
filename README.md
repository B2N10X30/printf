An Application of the common c function printf, this project was designed for learning as part the alx software engineering program.

   printf is the C language function to do format-ted printing,The functions in the _printf() produce output according to
   a format as described below.

 Resources
Secrets of printf by Don colton https://www.cypress.com/file/54761/download

_printf() function format string is a character string, arguments are placed using the percentage '%' operator followed by a
letter which work according to a basic data type.

    Code must be compiled this way:

$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 .c

Use & Examples

Prototype: int _printf(const char *format, ...); Use - General: _printf("format string", var1, var2, ...);

Examples:

    Basic String: _printf("%s Holberton", "Hello");`
        Output: Hello Holberton

    Print integers: _printf("This is an array element: arr[%d]:%c", 32, arr[32]);`
        Output: This is an array element arr[32]:A

Many other specifiers and flags were added and by combinig those the _printf() function generate a different ouput. 

The following list are the specifiers that can be used with this function:

%c print a singlecharacter
%d print a decimal (base 10) number
%e print an exponential floating-point number (has different use case (flags) for priting number of decimal place)
%f print a floating-point number
%g print a general-format floating-point number
%i print an integer in base 10
%o print a number in octal (base 8)
%s print a string of characters
%u print an unsigned int or decimal (base 10) 
%x print a number in hexidecimal in (base 16)

This Function has some useful flags that aids accurate printing i.e real life use case(In development...):

Flag 	Description
- 	Left-justify the output within the field width that was given; Right justification is the default (see width sub-specifier).
+ 	Preceeds the result with a plus or minus sign (+ or -) even for positive numbers. By default, only negative numbers are preceded with a - sign.
(space) 	If no sign is going to be written, a blank space is inserted before the value.
# 	Used with o, x or X specifiers the value is preceeded with 0, 0x or 0X respectively for values different than zero.
0 	Left-pads the number with zeroes (0) instead of spaces when padding is specified (see width sub-specifier).

Authors ©

.Bonu Samuel
.Emmanuel Omisakin



