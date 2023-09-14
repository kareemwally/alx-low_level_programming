#include"main.h"
/**
 * _isdigit - Function
 * Description:'This program is to check only number characters'
 * @c:the char we wanna check
 * Return:int 1(digit char) 0 otherwise
 */
int _isdigit(int c)
{
if (c > 47 && c < 58)
return (1);
else
return (0);
}
