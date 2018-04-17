/*
 * The C Programming Language Second Edition 
 * Exercise 3-4 answer 
 *
 *  Created on: Apr 14, 2018
 *      Author: Ender Yildirim
 *        Mail: enderyildirim@outlook.com
 */

#include <stdio.h>
#include <string.h>
#include <limits.h>

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

void itoa(int n, char s[]) {
	int i, sign, reminder;
	i = 0;
	sign = n;
	do {
		s[i++] = ((reminder = n % 10) < 0 ? -reminder : reminder) + '0';
	} while ((n /= 10) != 0);
	if (sign < 0) {
		s[i++] = '-';
	}
	s[i] = '\0';
	reverse(s);
}



int main(void) {
	char s[MAX_SIZE];
	itoa(INT_MIN, s);
	printf("%s\n", s);
	itoa(13, s);
	printf("%s\n", s);
	itoa(-10, s);
	itoa(INT_MAX, s);
	printf("%s\n", s);
	itoa(121343, s);
	printf("%s\n", s);
	itoa(-1, s);
	printf("%s\n", s);
}

