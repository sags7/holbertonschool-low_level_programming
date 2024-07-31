#include <stdio.h>

/**
 * preMain - executes before main()
 */
void __attribute__((constructor)) preMain()
{
	printf("You're beat! and yet, you must allow,\n"
		   "I bore my house upon my back!\n");
}
