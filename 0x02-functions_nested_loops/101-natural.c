#include<stdio.h>
/**
 * main - Lists all the numbers below 1024,
 * that are multiples of 3 0r 5.
 *
 * Return: Always 0
 */
int main(void)
{
int i, sum = 0;
for (i = 0; i < 1024; i++)
{
if ((i % 3) == 0 || (i % 5) == 0)
sum += i;
}
printf("%d\n", sum);
return (0);
}
