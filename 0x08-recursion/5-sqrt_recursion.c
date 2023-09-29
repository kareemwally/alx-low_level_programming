#include"main.h"
int _sqrt_recursion(int n)
{
float res = sqrt(n);
if (res == (int) res)
return ((int) res);
else
return (-1);
}
