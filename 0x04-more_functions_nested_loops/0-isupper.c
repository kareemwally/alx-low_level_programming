#include"main.h"
/**
 * _isupper - Function
 * Description:'This program is to check only uppercase letters'
 * @c: the char we wanna check
 * Return:int 1(uppercase) 0 otherwise
 */
int _isupper(int c)
{
if (c > 64 && c < 91)
return (1);
else
return (0);
}
