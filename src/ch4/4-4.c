/*
 * The C Programming Language Second Edition 
 * Exercise 4-4 answer 
 *
 *  Created on: May 3, 2018
 *      Author: Ender Yildirim
 *        Mail: enderyildirim@outlook.com
 */

#include <stdio.h>
#include <stdlib.h>

#define ARRAYSIZE 10

double pop();
void push(double);
double top(void);
void duplicate(double*, int);
void swapTop(void);
void clear(void);

int main(void) {
	for (int i = 0; i < 10; ++i) {
		push(i);
	}
	printf("%f\n", top());
	
	double dup[ARRAYSIZE];
	duplicate(dup, ARRAYSIZE);
	for (int i = 0; i < ARRAYSIZE; ++i) {
		printf("%f\t", dup[i]);
	}
	printf("\n");
	swapTop();
	printf("%f\n", top());
	clear();
	printf("%f\n", top());
	return EXIT_SUCCESS;
}

#define MAXVAL 100    /* maximum depth of val stack */

static int sp = 0;           /* next free stack position */
static double val[MAXVAL];   /* value stack */

/* push: push f onto value stack */
void push(double f) {
	if (sp < MAXVAL) 
		val[sp++] = f;
	else 
		printf("error: stack full, can't push %g\n", f);
}

/* pop: pop and return top value from stack */
double pop(void) { 
	if (sp > 0) 
		return val[--sp];
	else {
		printf("error: stack empty\n");
		return 0.0;
	}
}

/* top: return top value from stack without popping */
double top(void) {
	if (sp > 0)
		return val[sp - 1];
	else {
		printf("error: stack empty\n");
		return 0.0;
	}
}

/* duplicate: duplicates stack to given array */
void duplicate(double* v, int n) {
	if(n > sp)
		n = sp;
	for (int i = 0; i < n; ++i) {
		v[i] = val[i];
	}
}

void swapTop(void) {
	int topIndex = sp - 1;
	double tmp = val[topIndex];
	val[topIndex] = val[topIndex - 1];
	val[topIndex - 1] = tmp;
}

/* clear: remove all stack elements */
void clear(void) {
	sp = 0;
}


