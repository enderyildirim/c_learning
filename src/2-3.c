/*
 * 2-3.c
 *
 *  Created on: Apr 11, 2018
 *      Author: eyildirim
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int htoi(const char str[]) {
	int index = 0;
	
	for (; (str[index] == ' ') || 
		   (str[index] == '\n') || 
		   (str[index] == '\t') ; ++index);
	
	int sign = str[index] == '-' ? -1 : 1;
	for (; (str[index] == '-') ||
		   (str[index] == '+') ||
		   (str[index] == '0') ||
		   (str[index] == 'x') ||
		   (str[index] == 'X') ; ++index);
	
	int num = 0;
	for (; str[index] != '\0'; ++index) {
		int digit;
		if (isalpha(str[index]) && toupper(str[index]) >= 'A' && toupper(str[index]) <= 'F') {
			digit = 10 + toupper(str[index]) - 'A';
		} else if (isdigit(str[index])) {
			digit = str[index] - '0';
		} else return 0;
		num = 16 * num + digit;
	}
	return num*sign;
}

int main(void) {
	printf("%d\n", -0x21AC);
	printf("%d\n", htoi("-0x21AC"));

	printf("%d\n", -0x7aF);
	printf("%d\n", htoi("-0x7aF"));
	
	printf("%d\n", -0x333d);
	printf("%d\n", htoi("-0x333d"));
	
	return EXIT_SUCCESS;
}
