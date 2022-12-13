#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function to generate a random number
 * 
 * Return: Always 0 (Success)
 * 
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is", n);
    n -n % 10;
    if (n > 5)
    {
        printf("%d and is greater than 5\n", n);
    }
    else if ((n < 6) && (n < 0))
    {
        printf("%d and is less than 6 and not 0\n", n);
    }
    else
    {
        printf("%d and is 0\n", n);
    }
	return (0);
}
