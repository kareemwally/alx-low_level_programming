#include"main.h"
/**
 *_strdup-Function
 *Description :this function allocates the same size of memory as str
 *@str:the string we wanna match
 *Return: (pointer)
 */
char *_strdup(char *str)
{
char *s;
int size;
if (str == NULL)
{
return (NULL);
}
size = strlen(str);
s = malloc(size + 1);
if (s == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
s[i] = str[i];
return (s);
}
