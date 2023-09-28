#include"main.h"
/**
 *_print_rev_recursion-Function
 *Description:printing the reversed word
 *@s:the pointer to the word we wanna print
 *return:void
 */
void _print_rev_recursion(char *s)
{
int i, size = strlen(s);
char str [60];
for (i = 0; i < size; i++)
{
str[i] = s [size - 1 - i];
}
for(i = 0; i < size; i++)
{
putchar(str[i]);
}
}
