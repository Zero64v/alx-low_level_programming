#include "main.h"
/**
* _islower - a function that checks for lowercase character
* @v: single letter input
* Return: 1 if int v is lowercase, 0 if otherwise
*/
int _islower(int v)
{
if (v >= 'a' && v <= 'z')
{
return (1);
}
else
return (0);
}
