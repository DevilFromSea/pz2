#ifndef QUEUE_H
#define QUEUE_H
#define sMAX 10

struct stack {
	int data[sMAX];
	int top;
};

void create(stack *s);

int push(stack *s, int x);

int pop(stack *s, int *x);

int isEmpty(stack *s);

void printStack(stack *s);

int isElem(stack *s, int x);

void instructions(void);

#endif
