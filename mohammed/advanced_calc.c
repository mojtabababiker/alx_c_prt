#include <stdio.h>
#include <stdlib.h>

/*
 * main : program starting point
 * return : end of program
*/

int main(void)
{
	double num1, num2;
	char op;

	printf("Enter a number  : ");
	scanf("%lf", &num1);
	printf("Enter an operator : ");
	scanf(" %c", &op);
	printf("Enter a number  : ");
	scanf("%lf", &num2);
	if (op == '+')
	{
		printf("%f\n", num1 + num2);
	} else if (op == '-')
	{
		printf("%f\n", num1 - num2);
	} else if (op == '*')
	{
		printf("%f\n", num1 * num2);
	} else if (op == '/')
	{
		printf("%f\n", num1 / num2);
	} else
	{
		printf("Invalid operator\n");
	}
	return (0);
}
