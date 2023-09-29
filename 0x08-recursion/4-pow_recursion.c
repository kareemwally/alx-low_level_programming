#include"main.h"
/**
 *_pow_recursion-Function
 *Description: returns x^y
 *@x:base number
 *@y:power or exponent
 *Return : (int)
 */
int _pow_recursion(int x, int y)
{
int res;
if (y > 0)
{
res = x * _pow_recursion(x, --y);
}
else if (y < 0)
{
res = -1;
}
else
{res = 1;}
return (res);
}
