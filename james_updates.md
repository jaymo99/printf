### Recent updates
1. Added comments for 'struct Specifier' (betty style)
2. Allow printing of negative numbers using the function 'print_numbers' in util.c
3. When using %s, check if "NULL" was passed as argument and print '(null)', instead.
	* This change was implemented in 'util.c' inside the function 'print_string'.
4. Check for '\_printf(NULL)'. The \_printf function returns -1.


## notable additions
In 'struct Specifier'
<hr>
* The symbol is now declared as 'char * ' instead of 'char'

In the file specifier.c
<hr>
* The last element in the array of structs contains {NULL, NULL}.
* The return type of function 'get_specifier' was changed from 'int' to 'Specifier'.
* The arguments of function 'get_specifer' were reduced to only one. The function no longer requires (va_list).
* A new function was added named 'empty_specifier'.

In the file printf.c
* A new variable was introduced of type 'Specifier'.
