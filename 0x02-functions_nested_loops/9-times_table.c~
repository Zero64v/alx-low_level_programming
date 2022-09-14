#include "main.h"
/**
* times_table -  a function that prints the 9 times table, starting with 0
* brian = row, teddy = column, vivian = digits of current result
* Return: times table
* add extra space past single digit
*/
void times_table(void)
{
int brian, teddy, vivian;
for (brian = 0; brian <= 9; brian++)
{
_putchar('0');
_putchar(',');
_putchar(' ');
for (teddy = 1; teddy <= 9; teddy++)
{
vivian = (brian * teddy);
if ((vivian / 10) > 0)
{
_putchar((vivian / 10) + '0');
}
else
{
_putchar(' ');
}
_putchar((vivian % 10) + '0');
if (teddy < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
