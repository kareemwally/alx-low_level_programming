#include"main.h"
/**
 * _abs - function
 *
 * Description:'This program is to return the mod of n'
 * @n:the number we want to check
 * Return:Modulus of n(always poitive) or 0
 */
int _abs(int n)
{
int i = n;
if (n < 0)
i = -1 * n;
return (i);
}
