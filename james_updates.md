## Recent updates
1. Added comments for 'struct Specifier' (betty style)
2. Allow printing of negative numbers using the function 'print_numbers' in util.c
3. When using %s, check if "NULL" was passed as argument. If it was, print '(null)'.
	* These change was implemented in 'util.c' inside the function 'print_string'.
4. Check for '\_printf(NULL)'. The program exits if NULL is passed.
