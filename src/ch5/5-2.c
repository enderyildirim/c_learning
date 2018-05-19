/*
 * The C Programming Language Second Edition 
 * Exercise 5-2 answer 
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
int getfloat(float *pn) {
	int c, sign;
	float power;
	
	while(isspace(c = getch()))  /* skip white space */
			;
	if(!isdigit(c) && c != EOF && c != '+' && c != '-') {
		ungetch(c);       /* it's not a number */
		return 0;
	}
	sign = (c == '-') ? -1 : 1; 
	if(c == '+' || c == '-')
		c = getch();
	for(*pn = 0; isdigit(c); c = getch())
		*pn = 10 * *pn + (c - '0');
	if(c == '.') {
		power = 0.1f;
		c = getch();
		for (; isdigit(c); c = getch(), power *= 0.1f) {
			*pn += power * (c - '0');
		}
	}
	*pn *= sign;
	if(c != EOF)
		ungetch(c);
	return c;
}

int main(void) {
	float x;
	for (int i = 0; i < 10; ++i) {
		printf("Enter a float number...\n");
		getfloat(&x);
		printf("%0.4f\n", x);
	}
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
