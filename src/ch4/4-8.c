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
	return buff != -1 ? buff : getchar();
}

void ungetch(int c) {
	if(buff != -1)
		printf("ungetch: too many characters\n");
	else
		buff = c;
}

int main(void) {
	getch();
	getch();
	getch();
	getch();
	return EXIT_SUCCESS;
}

