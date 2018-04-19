/*
 * The C Programming Language Second Edition 
 * Exercise 4-1 answer 
 *
 *  Created on: Apr 19, 2018
 *      Author: Ender Yildirim
 *        Mail: enderyildirim@outlook.com
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse(char s[]) {
	int l = strlen(s);
	for (int i = 0; i != l / 2; ++i) {
		char temp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = temp;
	}
}

int strindex(char s1[], char s2[]) {
	reverse(s1);
	reverse(s2);
	int i, j, k;
	for (i = 0; s1[i] != '\0'; ++i) {
		for (j = i, k = 0; s2[k] != '\0' && s1[j] == s2[k]; j++, k++);
		if (k > 0 && s2[k] == '\0') {
			return strlen(s1) - i - 1;
		}
	}
	return -1;
}


int main(void) {
	char s[] = {'a', 'f', 'c', 'a', 'd'};
	printf("%d", strindex(s, "a"));
	return EXIT_SUCCESS;
}

