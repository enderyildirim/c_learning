/*
 * The C Programming Language Second Edition 
 * Exercise 2-2 answer 
 *
 *  Created on: Apr 21, 2018
 *      Author: Ender Yildirim
 *        Mail: enderyildirim@outlook.com
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE 1000

int _getline(char s[], int lim) {
	int i = 0, c;
	while((c = getchar()) != '\n') {
		if (i < lim - 1) {
			if (c != EOF) {
				s[i] = c;
			}
		}
		i++;
	}
	return i;
}

int main(void) {
	char s[MAX_LINE];
	_getline(s, MAX_LINE);
	printf("%s", s);
	return EXIT_SUCCESS;
}

