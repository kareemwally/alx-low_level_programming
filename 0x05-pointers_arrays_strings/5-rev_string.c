#include"main.h"
/**
 *rev_string - function
 *description: this function prints string reversely
 *@s:the string we wanna print reversely
 *Return:void
 */
void rev_string(char *s)
{
int i, a = strlen(s);
for (i = a - 1; i >= 0; i--)
{
printf("%c", s[i]);
}
}
