#include"main.h"
/**
 *_strpbrk -Function
 *Description:matches 1st occurrence of any characters in the S with accept
 *@s:the 1st string we wanna check
 *@accept:the 2nd string we wanna check
 *return:(pointer)
 */
char *_strpbrk(char *s, char *accept)
{
char* res = strpbrk(s, accept);
return (res);
}
