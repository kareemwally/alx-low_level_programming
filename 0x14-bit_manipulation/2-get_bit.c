#include "main.h"
/**
 *get_bit-function
 *@n:the number we wanna check
 *@index:the bit to know its value
 *Return:(int)
 */
int get_bit(unsigned long int n, unsigned int index)
{
int i;
int size = sizeof(int) * 8;
int bit = 0;
for (i = size - 1; i >= 0; i--)
{
bit = (n >> i) & 1;
if (i == (int) index)
{
break;
}
}
return (bit);
}
