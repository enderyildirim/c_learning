/*
 * The C Programming Language Second Edition 
 * Exercise 4-9 answer 
 *
 *  Created on: May 15, 2018
 *      Author: Ender Yildirim
 *        Mail: enderyildirim@outlook.com
 */

#include <stdio.h>
#include <stdlib.h>

#define BUFFSIZE 100

int buff[BUFFSIZE];  // EOF an integer so the buffer must be integer
int bufp = 0;

int getch(void) {
	return bufp > 0 ? buff[--bufp] : getchar();
}

void ungetch(int c) {
	if(bufp >= BUFFSIZE)
		printf("ungetch: too many characters\n");
	else
		buff[bufp++] = c;
}

int main(void) {
	return EXIT_SUCCESS;
}

