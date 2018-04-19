/*
 * The C Programming Language Second Edition 
 * Exercise 3-6 answer 
 *
 *  Created on: Apr 17, 2018
 *      Author: Ender Yildirim
 *        Mail: enderyildirim@outlook.com
 */

#include <stdio.h>
#include <string.h>
#include <limits.h>

#define MAX_SIZE 100

void itoa(int n, char s[], int w) {
	int i, sign, reminder;
	i = 0;
	sign = n;
	do {
		s[i++] = ((reminder = n % 10) < 0 ? -reminder : reminder) + '0';
	} while ((n /= 10) != 0);
	if (sign < 0) {
		s[i++] = '-';
	}
	while(i < w) {
		s[i++] = ' ';
	}
	s[i] = '\0';
	_strrev(s);
}

int main(void) {
	char s[MAX_SIZE];
	itoa(INT_MIN, s, 15);
	printf("%s\n", s);
	itoa(13, s, 20);
	printf("%s\n", s);
	itoa(-10, s, 10);
	printf("%s\n", s);
}
