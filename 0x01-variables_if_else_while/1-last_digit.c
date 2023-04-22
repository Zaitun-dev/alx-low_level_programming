#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Generate a number and print it's last digits 
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

        printf("The last digit of %d is %d, which is ", num, num % 10);

	if ((n % 10) > 5)
	{
		printf(("greater than 5.\n");
		
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("less than 6.\n");
	}
	else
	{
		printf("0.\n");
		
	}

	return (0);

}

