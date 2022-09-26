#include "main.h"
/**
* _memcpy - copies a memory area
* @dest: memory area copied (to be)
* @src: memory area  (to be copied)
* @n: number of bytes to be copied
*
* Return: pointer to be copied
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
for (; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
