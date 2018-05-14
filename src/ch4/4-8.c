/*
 * The C Programming Language Second Edition 
 * Exercise 4-8 answer 
 *
 *  Created on: May 15, 2018
 *      Author: Ender Yildirim
 *        Mail: enderyildirim@outlook.com
 */

#include <stdio.h>
#include <stdlib.h>

int buff = -1;

int getch(void) {
	if(buff != -1) {
		int tmp = buff;
		buff = -1;
		return tmp;
	} else
		return getchar();
}

void ungetch(int c) {
	if(buff != -1)
		printf("ungetch: too many characters\n");
	else
		buff = c;
}

int main(void) {
	int c = getch();
	ungetch(c);
	ungetch(c);
	ungetch(c);
	return EXIT_SUCCESS;
}

