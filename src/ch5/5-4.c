/*
 * The C Programming Language Second Edition 
 * Exercise 5-4 answer 
 *
 *  Created on: May 20, 2018
 *      Author: Ender Yildirim
 *        Mail: enderyildirim@outlook.com
 */

#include <stdio.h>
#include <stdlib.h>

int strend(char *s, char *t) {
	char *t2 = t;
	while (*++s)
		;
	while (*++t)
		;
	while (t != t2) {
		if (*--t != *--s) {
			return 0;
		}
	}
	return 1;
}

int main(void) {
	char s1[] = "The C Programming Language Second Edition";
	char s2[] = "ion";
	char s3[] = "xion";
	char s4[] = "";
	printf("%d\n", strend(s1, s2));
	printf("%d\n", strend(s1, s3));
	printf("%d\n", strend(s1, s4));
	return EXIT_SUCCESS;
}

