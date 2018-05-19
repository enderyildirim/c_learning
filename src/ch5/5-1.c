/*
 * The C Programming Language Second Edition 
 * Exercise 5-1 answer 
 *
 *  Created on: May 19, 2018
 *      Author: Ender Yildirim
 *        Mail: enderyildirim@outlook.com
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int getch(void);
void ungetch(int c);

/* getint: get next integer from input into *pn */
int getint(int *pn) {
	int c, sign, c2;
	
	while(isspace(c = getch()))  /* skip white space */
			;
	if(!isdigit(c) && c != EOF && c != '+' && c != '-') {
		ungetch(c);       /* it's not a number */
		return 0;
	}
	sign = (c == '-') ? -1 : 1; 
	if(c == '+' || c == '-') {
		if (!isdigit(c2 = getch())) {
			ungetch(c2);
			ungetch(c);
			return 0;
		} else
			c = c2;
	}
	for(*pn = 0; isdigit(c); c = getch())
		*pn = 10 * *pn + (c - '0');
	*pn *= sign;
	if (*pn == 0) {
		ungetch(c);
	}
	if(c != EOF)
		ungetch(c);
	return c;
}

int main(void) {
	int x;
	getint(&x);
	printf("%d\n", x);
	return EXIT_SUCCESS;
}

#define BUFSIZE 100

char buf[BUFSIZE];  /* buffer fpr ungetch */
int bufp = 0;       /* next free position in buf */

int getch(void) { /* get a (possibly pushed back) character */
	return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c) { /* push character back on input */
	if(bufp >= BUFSIZE)
		printf("ungetch: too many characters\n");
	else
		buf[bufp++] = c;
}

