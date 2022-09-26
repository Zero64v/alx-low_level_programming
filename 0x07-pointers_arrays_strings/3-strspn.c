#include "main.h"
/**
* _strspn - function that gets the length of a prefix substring
* @s: string to be checked
* @accept: string to be checked against
*
* Return: number of s (bytes) in accept
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;
for (i = 0; s[i]; i++)
{
for (i = 0; accept[j]; j++)
{
if (s[i] == accept[j])
break;
}
if (!accept[j])
break;
}
return (i);
}
