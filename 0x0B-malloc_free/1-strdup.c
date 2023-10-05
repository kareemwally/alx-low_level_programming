#include"main.h"
/**
 *_strdup-Function
 *Description :this function allocates the same size of memory as str
 *@str:the string we wanna match
 *Return: (pointer)
 */
char *_strdup(char *str)
{
char *s = malloc(strlen(str) + 1);
if (s == 0 || str == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < strlen(str); i++)
s[i] = str[i];
}
return (s);
}
