/*
 * The C Programming Language Second Edition 
 * Exercise 5-5 answer 
 *
 *  Created on: May 20, 2018
 *      Author: Ender Yildirim
 *        Mail: enderyildirim@outlook.com
 */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

char *strncpy(char *s, const char *t, size_t n) {
	char *s2 = s;
	while ((*s++ = *t++) && --n)
		;
	*s = '\0';
	return s2;
}

char *strncat(char *s, const char *t, size_t n) {
	while (*++s)
		;
	while ((*s++ = *t++) && --n)
		;
	*s++ = '\0';
	return s;
}

int strncmp(const char *s, const char *t, size_t n) {
	for (; n > 0; n--, t++, s++) {
		if (*t != *s) {
			return *t - *s;
		}
	}
	return 0;
}

int main(void) {
	char s1[] = "The C Programming Language";
	char s2[100];
	strncpy(s2, s1, 18);
	printf("s1=%s\n", s1);
	printf("s2=%s\n", s2);
	strncat(s2, "5-5 answer", 7);
	printf("s1=%s\n", s1);
	printf("s2=%s\n", s2);
	printf("%d\n", strncmp(s1, s2, 17));
	printf("%d\n", strncmp(s1, s2, 25));
	return EXIT_SUCCESS;
}

