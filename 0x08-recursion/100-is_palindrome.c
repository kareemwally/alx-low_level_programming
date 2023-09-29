#include"main.h"
/**
 *is_palindrome-Function
 *Description:checks whether s is palindrome or not
 *@s:the string we're checking
 *Return: (int) 1,0
 */
int is_palindrome(char *s)
{
int res = 0, size = strlen(s);
if (s[i] == s[size - i - 1])
{
i++;
res = 1;
is_palindrome(s);
}
else
{
res = 0;
}
return (res);
}
