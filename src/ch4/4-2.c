/*
 * The C Programming Language Second Edition 
 * Exercise 4-2 answer 
 *
 *  Created on: Apr 21, 2018
 *      Author: Ender Yildirim
 *        Mail: enderyildirim@outlook.com
 */

#include <stdio.h>
#include <ctype.h>
#include <math.h>

double atof(char s[]) {
	double val, power;
	int i, sign;
	for (i = 0; isspace(s[i]); ++i)
		;
	sign = s[i] == '-' ? -1 : 1;
	i++;
	val = 0;
	while (isdigit(s[i])) {
		val = 10 * val + (s[i++] - '0');
	}
	if (s[i] == '.') {
		i++;
	}
	power = 1.0 / 10.0;
	while (isdigit(s[i])) {
		val += power * (s[i++] - '0');
		power /= 10;
	}
	if (s[i] == 'e') {
		power = s[++i] == '-' ? (1.0/10.0) : 10.0;
		int times = s[++i] - '0';
		while(times) {
			val *= power;
			times--;
		}
	}
	return sign * val;
}

int main(void) {
	char* s = "-1254.123e-3";
	double x = -1254.123e-3;
	printf("%f\n", atof(s));
	printf("%f", x);
}

