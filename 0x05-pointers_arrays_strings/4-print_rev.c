#include"main.h"
/**
 *print_rev - function
 *description: this function prints string reversely
 *@s:the string we wanna print reversely
 *Return:void
 */
void print_rev(char *s)
{
int i, a = strlen(s);
/*char c [a];*/
for (i = a - 1; i >= 0; i--)
{
/*c[i] = s[a - i - 1];*/
printf("%c", s[i]);
}
}
