/*
 * The C Programming Language Second Edition 
 * Exercise 5-3 answer 
 *
 *  Created on: May 20, 2018
 *      Author: Ender Yildirim
 *        Mail: enderyildirim@outlook.com
 */

#include <stdio.h>
#include <stdlib.h>

char *strcat(char *s, char *t) {
	while (*++s)
		;
	while((*s++ = *t++))
		;
	*s++ = '\0';
	return s;
}

int main(void) {
	char s[] = "ender";
	char t[] = "yildirim";
	strcat(s, t);
	printf("%s\n", s);
	return EXIT_SUCCESS;
}

