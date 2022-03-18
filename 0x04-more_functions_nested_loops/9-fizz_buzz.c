#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (0 == num % 3 && 0 == num % 5)
		{
			printf("FizzBUZZ");
		}
		else if (0 != num % 3 && 0 == num % 5)
		{
			printf("Buzz");
		}
		else if (0 == num % 3 && 0 != num % 5)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", num);
		}
		printf(" ");
	}
	return (0);
}
