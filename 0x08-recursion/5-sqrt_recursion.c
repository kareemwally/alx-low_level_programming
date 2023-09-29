#include"main.h"
#include<math.h>
int _sqrt_recursion(int n)
{
int res = sqrt(n);
if (res == (float) res)
return ((int) res);
else
return (-1);
}
