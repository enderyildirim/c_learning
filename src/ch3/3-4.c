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

#define STR_LENGTH 100

void itoa(int n, char s[]) {
	int i, sign, reminder;
	i = 0;
	sign = n;
	do {
		s[i++] = ((reminder = n % 10) < 0 ? -reminder : reminder)+ '0';
	} while ((n /= 10) != 0);
	if (sign < 0) {
		s[i++] = '-';
	}
	s[i] = '\0';
	_strrev(s); 
}



int main(void) {
	char s[STR_LENGTH];
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

