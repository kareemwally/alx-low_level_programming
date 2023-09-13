#include"main.h"
/**
 * _isalpha - function
 *
 * Description:'This program is to checks alphabet letters'
 * @c:the character we want to check
 *
 * Return:1 if alpha(Success) or 0 anything else
 */
int _isalpha(int c)
{
int i;
if ((c >= 97 && c < 123) || (c > 64 && c < 90))
i = 1;
else
i = 0;
return (i);
}
