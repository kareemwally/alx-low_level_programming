#include "main.h"
/**
 *create_array-Function
 *Description :this function allocates the right size of memory
 *@size:the memory size
 *@c:the char we wanna place
 *Return: (pointer)
 */
char *create_array(unsigned int size, char c)
{
char *s = malloc(size);
if (size > 0 && s != NULL)
{
for (i = 0; i < size; i++)
{
s[i] = c;
}
}
else
{
return (NULL);
}
return (s);
}
