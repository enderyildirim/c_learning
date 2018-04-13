/*
 * The C Programming Language Second Edition 
 * Exercise 3-2 answer 
 *
 *  Created on: Apr 14, 2018
 *      Author: Ender Yildirim
 *        Mail: enderyildirim@outlook.com
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE sizeof(char)*8*6

void escape(char s[], char t[]) {
	int i, j;
	for (i = 0, j = 0; t[i] != '\0'; ++i) {
		switch (t[i]) {
			case '\n':
				s[j++] = '\\';
				s[j++] = 'n';
				break;
			case '\t':
				s[j++] = '\\';
				s[j++] = 't';
				break;
			default:
				s[j++] = t[i];
				break;
		}
	}
	s[j] = '\0';
}

void escape2(char s[], char t[]) {
	int i, j;
	for (i = 0, j = 0; t[i] != '\0'; ++i) {
		switch (t[i]) {
			case '\\':
				s[j++] = (t[i + 1] == 'n') ? '\n' : '\t';
				i++;
				break;
			default:
				s[j++] = t[i];
				break;
		}
	}
	s[j] = '\0';
}

int main(void) {
	char* t = malloc(SIZE);
	t[0] = 'a';
	t[1] = '\n';
	t[2] = '\t';
	t[3] = 'c';
	t[4] = 'x';
	t[5] = '\0';
	char* s = malloc(SIZE);
	escape(s, t);
	printf("%s\n", s);
	escape2(t, s);
	printf("%s\n", t);
	return EXIT_SUCCESS;
}

