#include"main.h"
/**
 *_print_rev_recursion-Function
 *Description:printing the reversed word
 *@s:the pointer to the word we wanna print
 *return:void
 */
void _print_rev_recursion(char *s)
{
if (i < (int) strlen(s))
{
putchar(s[strlen(s) - i - 1]);
i++;
_print_rev_recursion(s);
}
}
