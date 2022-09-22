#include "main.h"
/**
* _strncpy - c function that copies a string, including the
* terminating null byte, using the most an inputted number of bytes.
* if lenth of source code is < than max byte number
* reminder of the destinaion string is filled with null bytes.
* works identically to the std lib function 'strncpy'.
* @dest: buffer storing the string copy
* @src: the source string
* @n: max number of bytes copied
*Return: returns
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}
