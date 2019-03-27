#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "stack.h"

int main()
{
	stack A;
	create(&A);
	int choise;
	int value;

	instructions();
	printf("%s", "? ");
	scanf("%d", &choise);

	while(choise != 4)
	{
		switch (choise)
		{
			case 1:
				printf("%s", "Enter an integer: ");
				scanf("%d", &value);
				push(&A, value);
				printStack(&A);
				break;

			case 2:
				if (!isEmpty (&A)) {
					pop(&A, &value);
					printf("The popped value is %d.\n", value);
				}
				printStack(&A);
				break;
			case 3:
				printf("%s", "Enter an integer to show, belongs or not: ");
				scanf("%d", &value);
				if (isElem(&A, value)) {
					printf("%d belongs to stack.\n", value);
					break;
				}
				printf("%d doesn't belong to stack.\n", value);
				break;
			default:
				puts("Invalid choise.\n");
				instructions();
				break;	
		}
		printf("%s", "? ");
		scanf("%d", &choise);
	}
	puts("End of run.");
	return 0;
}
