#include <stdio.h>

/**
 * main - prints single digits in base 10
 * Return: Always 0 
*/
int main(void)
{ 
int n;
for (n = 0; n < 10; n++)
putchar((n % 10) + '0');
putchar('\n');
return (0);
} 
