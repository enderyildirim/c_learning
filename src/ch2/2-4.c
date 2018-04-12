/*
 * The C Programming Language Second Edition 
 * Exercise 2-4 answer 
 *
 *  Created on: Apr 12, 2018
 *      Author: Ender Yildirim
 *        Mail: enderyildirim@outlook.com
 */

#include <stdio.h>
#include <stdlib.h>

/* delete all c from s */
void squeeze1(char s[], int c) {
	int j = 0;
	for (int i = 0; s[i] != '\0'; ++i) {
		if (s[i] != c) {
			s[j++] = s[i];
		}
	}
	s[j] = '\0';
}

/* delete all characters of s2 from s1 */
void squeeze2(char s1[], const char s2[]) {
	for (int i = 0; s2[i] != '\0'; i++) {
		squeeze1(s1, s2[i]);
	}
}

int main(void) {
	char s1[] = "abcde";
	char s2[] = "b d";
	squeeze2(s1, s2);
	printf("%s", (const char*)s1);
	return EXIT_SUCCESS;
}

