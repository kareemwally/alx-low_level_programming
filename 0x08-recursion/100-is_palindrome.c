#include"main.h"
/**
 *is_palindrome-Function
 *Description:checks whether s is palindrome or not
 *@s:the string we're checking
 *Return: (int) 1,0
 */
int is_palindrome(char *s)
{
int size = strlen(s);
if (s[i] == s[size - i - 1])
{
i++;
if (i == size - 1)
{
return (1);
}
is_palindrome(s);
}
else
{
return (0);
}
return (res);
}
