#include"main.h"
/**
 *_print_rev_recursion-Function
 *Description:printing the reversed word
 *@s:the pointer to the word we wanna print
 *return:void
 */
void _print_rev_recursion(char *s)
{
int size = strlen(s);
char str [size];
for (int i = 0; i < size; i++)
{
str[i] = s [size - 1 - i];
}
for(int i = 0; i < size; i++)
{
printf("%c", str[i]);
}
}
