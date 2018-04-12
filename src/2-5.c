/*
 * The C Programming Language Second Edition 
 * Exercise 2-5 answer 
 *
 *  Created on: Apr 12, 2018
 *      Author: Ender Yildirim
 *        Mail: enderyildirim@outlook.com
 */

#include <stdio.h>
#include <stdlib.h>

int any(const char s1[], const char s2[]) {
	for (int i = 0; s2[i] != '\0'; ++i) {
		for (int j = 0; s1[j] != '\0'; ++j) {
			if (s1[j] == s2[i]) {
				return j;
			}
		}
	}
	return -1;
}

int main(void) {
	printf("%d\n", any("abcde", "xd"));
	printf("%d\n", any("11s2dz", "<"));
	printf("%d\n", any("11s2dz", "z"));
	return EXIT_SUCCESS;
}


