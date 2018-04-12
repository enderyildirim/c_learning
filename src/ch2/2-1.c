/*
 * The C Programming Language Second Edition 
 * Exercise 2-1 answer 
 *
 *  Created on: Apr 12, 2018
 *      Author: Ender Yildirim
 *        Mail: enderyildirim@outlook.com
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void) {
	printf("Signed values:\n");
	printf("signed min char  = %15d\n", CHAR_MIN);
	printf("signed max char  = %15d\n", CHAR_MAX);
	printf("signed min short = %15d\n", SHRT_MIN);
	printf("signed max short = %15d\n", SHRT_MAX);
	printf("signed min int   = %15d\n", INT_MIN);
	printf("signed max int   = %15d\n", INT_MAX);
	printf("signed min long  = %15ld\n", LONG_MIN);
	printf("signed max long  = %15ld\n", LONG_MAX);
	printf("\n\n");
	printf("Unsigned values:\n");
	printf("unsigned min value for all = %15d\n", 0);
	printf("unsigned max char          = %15d\n", UCHAR_MAX);
	printf("unsigned max short         = %15d\n", USHRT_MAX);
	printf("unsigned max int           = %15u\n", UINT_MAX);
	printf("unsigned max long          = %15lu\n", ULONG_MAX);
	return EXIT_SUCCESS;
}

