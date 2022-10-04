#include <stdio.h>
#include <main.h>

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else
	{
		largestn = c;
	}

	return (largest);
}
/**
 * main - debugging example
 * Return: 0
 */
int main(void)
{
	int a, b, c;
	int largest;

	a = 0;
	b = 0;
	c = 0;
	largest = largest_number(a, b, c);

	printf("%d is the largest \n", largest);

	return (0);
}
