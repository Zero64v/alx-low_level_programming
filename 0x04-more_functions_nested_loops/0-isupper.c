#include "main.h"
/**
* _isupper - this function checks for an uppercase character
* @c: single character input
* Returns: 1 if int c is lowercase, 0 otherwise
*/
int _isupper(int c)
{
char c;
c = 'A';
printf("%c: %d\n", c, _isupper(c));
c = 'a';
printf("%c: %d\n", c, _isupper(c));
return (0);
}
