#include "main.h"
/**
* _isalpha - a function that checks for alphabetic character
* @v: single letter input
* Return: 1 if v is a letter (lower or uppercase), 0 otherwise
*/
int _isalpha(int v)
{
if (((v >= 'a') && (v <= 'z')) || ((v >= 'A') && (v <= 'Z')))
return (1);
else
return (0);
}
