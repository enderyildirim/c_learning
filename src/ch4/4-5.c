/*
 * The C Programming Language Second Edition 
 * Exercise 4-5 answer 
 *
 *  Created on: May 3, 2018
 *      Author: Ender Yildirim
 *        Mail: enderyildirim@outlook.com
 */

#include <stdio.h>
#include <stdlib.h>

extern double sin(double x);
extern double exp(double x);
extern double pow(double x, double y);

int main(void) {
	double x;
	printf("Enter a floating point number...\n");
	scanf("%lf", &x);
	printf("x=%f\n", x);
	printf("sin(x)=%f\n", sin(x));
	printf("exp(x)=%f\n", exp(x));
	printf("pow(x, 2)=%f\n", pow(x, 2));
	return EXIT_SUCCESS;
}

