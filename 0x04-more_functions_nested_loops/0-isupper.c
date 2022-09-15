#include "main.h"
* _isupper - a function that checks for uppercase character
* @c: single letter input
* Return: 1 if c is lowercase, 0 otherwise
*/
int main(void)
{
char c;
c = 'A';
printf("%c: %d\n", c, _isdigit(c));
c = 'a';
printf("%c: %d\n", c, _isdigit(c));
return (0);
}
