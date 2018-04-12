/*
 * The C Programming Language Second Edition 
 * Exercise 2-9 answer 
 *
 *  Created on: Apr 12, 2018
 *      Author: Ender Yildirim
 *        Mail: enderyildirim@outlook.com
 */

#include <stdio.h>
#include <stdlib.h>

int bitcount(unsigned int x) {
	int i = 0;
	while(x != 0) {
		x &= (x - 1);
		i++;
	}
	return i;
}

int main(void) {
	printf("%d\n", bitcount(15));
	printf("%d\n", bitcount(7));
	printf("%d\n", bitcount(8));
	printf("%d\n", bitcount(0));
	printf("%d\n", bitcount(-1));
	return EXIT_SUCCESS;
}

