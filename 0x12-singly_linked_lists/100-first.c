#include "lists.h"
void mirror(void)__attribute__ ((constructor));
/**
 * mirror - runs before main function
 */
void mirror(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
