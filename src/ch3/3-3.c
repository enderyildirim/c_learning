/*
 * The C Programming Language Second Edition 
 * Exercise 3-3 answer 
 *
 *  Created on: Apr 14, 2018
 *      Author: Ender Yildirim
 *        Mail: enderyildirim@outlook.com
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE sizeof(char)*8*100

void expand(char s1[], char s2[]) {
	int i, j;
	for (i = 0, j = 0; s1[i] != '\0' && i != strlen(s1) - 1; i++) {
		char begin = s1[i];
		char end = s1[i + 2];
		if (('a' <= begin && begin <= 'z' && 'a' <= end && end <= 'z')
				|| ('A' <= begin && begin <= 'Z' && 'A' <= end && end <= 'Z')
				|| ('0' <= begin && begin <= '9' && '0' <= end && end <= '9')) {
			while(begin != end + 1) {
				s2[j++] = begin++;
			}
		}
	}
	s2[j] = '\0';
}

int main(void) {
	char* s = malloc(MAX_SIZE);
	char* s1 = "a-b";
	char* s2 = "a-z0-9";
	char* s3 = "a-bA-Z";
	char* s4 = "-a-z";
	char* s5 = "a-b-c";
	expand(s1, s);
	printf("%s\n", s);
	expand(s2, s);
	printf("%s\n", s);
	expand(s3, s);
	printf("%s\n", s);
	expand(s4, s);
	printf("%s\n", s);
	expand(s5, s);
	printf("%s\n", s);
	return EXIT_SUCCESS;
}

