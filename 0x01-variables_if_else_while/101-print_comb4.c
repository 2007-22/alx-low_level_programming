#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * 
 * Return: Always 0 (Success)
 * 
*/
int main(void)
{
int ones = '0';
int tens = '0';
int hundreds = '0';
for (hundreds = '0'; hundreds <= '9'; hundreds++)
{
for (tens = '0'; tens <= '9'; tens++)/*print tens digits*/
{
for (ones = '0'; ones <= '9'; ones++)/*print ones digits*/
{
if (!((ones == tens) || (tens == hundreds) || (tens > ones) || (hundreds > tens)))
{
putchar(hundreds);
putchar(tens);
putchar(ones);
if (!(ones == '9' && hundreds == '7' && tens == '8'))/*add commas and spaces*/
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
putchar (0);
} 
