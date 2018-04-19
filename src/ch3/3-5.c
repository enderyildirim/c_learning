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

void itob(int n, char s[], int b) {
	int i, reminder;
	for (i = 0; n != 0; i++, n /= b) {
		s[i] = (reminder = n % b) >= 10 ? reminder - 10 + 'A'  : reminder + '0';
	}
	s[i] = '\0';
	_strrev(s);
}

int main(void) {
	char s[MAX_SIZE];
	itob(123, s, 8);
	printf("%s\n",s);
	itob(123, s, 2);
	printf("%s\n",s);
	itob(123, s, 16);
	printf("%s\n",s);
	itob(123, s, 10);
	printf("%s\n",s);
	return EXIT_SUCCESS;
}

