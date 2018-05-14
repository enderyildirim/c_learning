/*
 * The C Programming Language Second Edition 
 * Exercise 3-1 answer 
 *
 *  Created on: May 14, 2018
 *      Author: Ender Yildirim
 *        Mail: enderyildirim@outlook.com
 */

#include <stdio.h>
#include <stdlib.h>

/* binsearch: find x in v[0] <= v[1] <= ... <= v[n - 1]  */
int binsearch(int x, int v[], int n) {
	int low, high, mid;
	
	low = 0;
	high = n - 1;
	while(low <= high) {
		mid = (low + high) / 2;
		if (x < v[mid]) 
			high = mid - 1;
		else 
			low = mid + 1;
	}
	mid = (low + high) / 2;
	return x == v[mid] ? mid : -1;
}

int main(void) {
	int size = 16;
	int v[] = { -1, 2, 7, 9, 13, 17, 21, 27, 29, 38, 46, 48, 55, 72, 94, 115 };
	printf("%d\n", binsearch(9, v, size));
	printf("%d\n", binsearch(-9, v, size));
	printf("%d\n", binsearch(-19, v, size));
	printf("%d\n", binsearch(55, v, size));
	printf("%d\n", binsearch(94, v, size));
	return EXIT_SUCCESS;
}

