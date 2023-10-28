#include "main.h"
/**
 *print_binary-function
 *description:that function prints the binary version of number
 *@n:the number to be converted
 *Return:(void)
 */
void print_binary(unsigned long int n)
{
int i;
int size = sizeof(int) * 8;
for (i = size - 1; i >= 0; i--)
{
int bit = (n >> i) & 1;
printf("%d",bit);
}
}
