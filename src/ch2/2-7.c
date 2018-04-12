/*
 * The C Programming Language Second Edition 
 * Exercise 2-7 answer 
 *
 *  Created on: Apr 12, 2018
 *      Author: Ender Yildirim
 *        Mail: enderyildirim@outlook.com
 */

#include <stdio.h>
#include <stdlib.h>

void invert(int* x, int p, int n) {
	unsigned int mask = 0xffffffff;
	mask = ~(mask<<n);
	mask<<=(p - n);
	*x ^= mask;
}

int main(void) {      //        6th position
	int x = 0;        //           |
	invert(&x, 6, 2); // must be   110000
	printf("%d", x);  //                |  
	return EXIT_SUCCESS; //         first position
}

