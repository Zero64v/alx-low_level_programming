#include "main.h"
/**
* print_sign - a function that prints the sign of a number
* @v: number input
* Return: 1 prints '+' if v > 0, 0 prints '0' if v = 0, -1 prints '-' if v < 0
*/
int print_sign(int v)
{
if (v > 0)
{
_putchar ('+');
return (1);
}
else if (v == 0)
{
_putchar ('0');
return (0);
}
else
{
_putchar ('-');
return (-1);
}
}
