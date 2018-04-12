/*
 * The C Programming Language Second Edition 
 * Exercise 2-6 answer 
 *
 *  Created on: Apr 12, 2018
 *      Author: Ender Yildirim
 *        Mail: enderyildirim@outlook.com
 */

#include <stdio.h>
#include <stdlib.h>

void setbits(int* x, int p, int n, int y) {
	unsigned int clearMask = 0xffffffff; // 32-bit unsigned int, refer to page 50 last paragraph
	clearMask = ~(clearMask<<n);
	y &= clearMask; 
	y <<= (p - n);
	*x |= y; 
}

int main(void) {
	int x = 0;
	setbits(&x, 15, 2, 0xff);
	printf("%d", x);
	return EXIT_SUCCESS;
}
