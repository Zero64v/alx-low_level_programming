#include "main.h"
/**
* _isdigit - function checks for digit 0-9
* @c - checks function input
* Return: 1 if int c is digit, otherwise 0
*/
int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
{
return (1);
}
return (0);
}
