#include"main.h"
/**
 *_strstr -Function
 *Description:matches 1st occurrence of needle in the haystack
 *@haystack:the string we wanna check
 *@needle:the substring we wanna find in haystack
 *return:(pointer)
 */
char *_strstr(char *haystack, char *needle)
{
char *res = strstr(haystack, needle);
return (res);
}
