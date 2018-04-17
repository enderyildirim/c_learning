/*
 * The C Programming Language Second Edition 
 * Exercise 3-5 answer 
 *
 *  Created on: Apr 17, 2018
 *      Author: Ender Yildirim
 *        Mail: enderyildirim@outlook.com
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int strlen(char s[]) {
	int i = 0;
	while(s[i++] != '\0');
	return i - 1;
}

void reverse(char s[]) {
	int length = strlen(s);
	for (int i = 0; i < length / 2; ++i) {
		int temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}

void itob(int n, char s[], int b) {
	int i;
	for (i = 0; n != 0; i++, n /= b) {
		s[i] = (n % b) + '0';
	}
	s[i] = '\0';
	reverse(s);
}

int main(void) {
	char s[MAX_SIZE];
	itob(21, s, 8);
	printf("%s\n",s);
	itob(15, s, 2);
	printf("%s\n",s);
	return EXIT_SUCCESS;
}

