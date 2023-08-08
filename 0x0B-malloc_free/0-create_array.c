#include "main.h"
/**
* create_array - creates an array of char, and
* initializes it with a specific char
* @size: array size
* @c: character to insert
* Return: NULLif the size of array zero of fails,
* pointer to array IF everthing is normal.
*/
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;

str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
return (NULL);

for (i = 0; i < size; i++)
str[i] = c;
return (str);
}
