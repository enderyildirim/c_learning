/*
 * The C Programming Language Second Edition 
 * Exercise 2-8 answer 
 *
 *  Created on: Apr 12, 2018
 *      Author: Ender Yildirim
 *        Mail: enderyildirim@outlook.com
 */

#include <stdio.h>
#include <stdlib.h>

void rightrot(int* x, int n) {
	unsigned int mask = ~(0u);
	mask = mask<<n;
	int leftRemaining = *x & mask;
	*x >>= n;
	*x |= leftRemaining;
}

int main(void) {
	int x = 0xff;
	rightrot(&x, 4);
	printf("%d", x);
	return EXIT_SUCCESS;
}

