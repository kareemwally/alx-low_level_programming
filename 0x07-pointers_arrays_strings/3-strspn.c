#include"main.h"
/**
 *_strspn -Function
 *Description:finds the length of suitable substring of (s)
 *@s:the string we wanna check its substring
 *@accept:the string we wanna match
 *return:(int)
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int res = strspn (s, accept);
return (res);
}
