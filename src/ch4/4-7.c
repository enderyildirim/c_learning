/*
 * The C Programming Language Second Edition 
 * Exercise 4-7 answer 
 *
 *  Created on: May 14, 2018
 *      Author: Ender Yildirim
 *        Mail: enderyildirim@outlook.com
 */

#include <stdio.h>
#include <stdlib.h>

#define BUFFSIZE 100

char buff[BUFFSIZE];
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

void ungets(char *s) {
	int c;
	while((c = *s++)) {
		ungetch(c);
	}
}

#define ARR_SIZE 10

int main(void) {
	char s[ARR_SIZE];
	for (int i = 0; i < ARR_SIZE; ++i) {
		s[i] = getch();
	}
	ungets(s);
	printf("buffer=%s\n", buff);
	return EXIT_SUCCESS;
}

