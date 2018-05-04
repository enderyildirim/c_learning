/*
 * The C Programming Language Second Edition 
 * Exercise 4-14 answer 
 *
 *  Created on: May 4, 2018
 *      Author: Ender Yildirim
 *        Mail: enderyildirim@outlook.com
 */

#include <stdio.h>
#include <stdlib.h>

#define swap(t, x, y) t temp = x; x = y; y = temp

int main(void) {
	int a = 1;
	int b = 2;
	swap(int, a, b);
	printf("a=%d\n", a);
	printf("b=%d\n", b);
	return EXIT_SUCCESS;
}

