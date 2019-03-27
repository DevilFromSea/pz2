#include <stdio.h>
#include "stack.h"

void create(stack *s) {
	s->top = -1;
}

int push(stack *s, int x) {
	if (s->top != sMAX - 1) {
		s->top++;
		s->data[s->top] = x;
		return 1;
	}
	else
		return 0;
}

int pop(stack *s, int *x) {
	if (isEmpty(s)) {
		return 0;
	}
	*x = s->data[s->top];
	s->top--;
	return 1;
}

int isEmpty(stack *s) {
	if (s->top == -1)
		return 1;
	return 0;
}

void printStack(stack *s) {
	int x;
	FILE *f;
	stack B;
	create(&B);
	
	fopen_s(&f, "f.txt", "w");
	while (!isEmpty(s)) {
		pop(s, &x);
		printf("%d <-- ", x);
		fprintf(f, "%d ", x);
		push(&B, x);
	}
	fclose(f);
	while (!isEmpty(&B)) {
		pop(&B, &x);
		push(s, x);
	}
}

int isElem(stack *s, int x) {
	for (int i = 0; i <= s->top; i++)
		if (s->data[i] == x)
			return 1;
	return 0;
}

void instructions(void)
{
	puts("Enter choise:\n"
		"1 to put a value on the stack\n"
		"2 to pop a value off the stack\n"
		"3 to find out if the number belongs to the stack\n"
		"4 to end program");
}
