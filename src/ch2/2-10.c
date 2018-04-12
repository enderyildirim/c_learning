/*
 * The C Programming Language Second Edition 
 * Exercise 2-10 answer 
 *
 *  Created on: Apr 12, 2018
 *      Author: Ender Yildirim
 *        Mail: enderyildirim@outlook.com
 */

#include <stdio.h>
#include <stdlib.h>

int tolower(int c) {
	return c >= 'A' && c <= 'Z' ? c + 'a' - 'A' : c;
}

int main(void) {
	printf("%c", tolower('A'));
	return EXIT_SUCCESS;
}

