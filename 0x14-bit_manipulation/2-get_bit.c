#include "main.h"
/**
 *get_bit-function
 *@n:the number we wanna check
 *@index:the bit to know its value
 *Return:(int)
 */
int get_bit(unsigned long int n, unsigned int index)
{
int res;
if (n % (long int) pow(2, index) == 0)
{
res = 1;
}
else
{
res = 0;
}
return (res);
}
