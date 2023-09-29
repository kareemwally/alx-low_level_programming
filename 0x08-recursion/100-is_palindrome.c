#include"main.h"
/**
 *is_palindrome-Function
 *Description:checks whether s is palindrome or not
 *@s:the string we're checking
 *Return: (int) 1,0
 */
int is_palindrome(char *s)
{
int res = 1, size = strlen(s);
if (s[i] == s[size - i - 1])
{
i++;
is_palindrome(s);
}
else
{
res = 0;
}
return (res);
}
