#include"main.h"
/**
 * more_numbers - Function
 * Description:'This program is to print numbers 0:14'
 * Return:void (prints digits)
 */
void more_numbers(void)
{
int i, j = 10;
while (j > 0)
{
for (i = 0; i < 15; i++)
{
printf("%d", i);
}
printf("\n");
j--;
}
}
