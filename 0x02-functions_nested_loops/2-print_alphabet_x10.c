#include "main.h"

/**
* print_alphabet_x10 - a function that prints 10 times the alphabet
*
* Return: x10 a-z
*/

void print_alphabet_x10(void)
{
int n, kij;

kij = 0;

while (kij < 10)
{
for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
}
kij++;
_putchar('\n');
}

}

