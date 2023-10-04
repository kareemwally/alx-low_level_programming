#include "main.h"
/**
 *create_array-Function
 *Description :this function allocates the right size of memory
 *@size:the memory size
 *@c:the char we wanna place
 *return :(pointer)
 */
char *create_array(unsigned int size, char c)
{
char *s;
if (size == 0)
return (NULL);
else
{
s = malloc(sizeof(char) * size);
}
for (i = 0; i < size; i++)
{
s[i] = c;
}
return (s);
}
