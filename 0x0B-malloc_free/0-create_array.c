#include "main.h"
char *create_array(unsigned int size,char c)
{
char *s;
if (size == 0)
return (NULL);
else
{
s = malloc(sizeof(char) * size);
s[0] = c;
}
return (s);
}
