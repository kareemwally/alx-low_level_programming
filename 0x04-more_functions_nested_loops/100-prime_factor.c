#include"main.h"
/**
 * main - Entry point
 * Description:'This program is to print the biggest prime num'
 * Return:void (prints digits)
 */
int main(void)
{
int i, j, res = 2;
for (i = 2; i <= N; i++)
{
for (j = 2; j <= i; j++)
{
if (i % j == 0 && j != i)
{
break;
}
else if (i % j == 0 && j == i)
{
if (i > res)
res = i;
}
}
}
printf("%d\n", res);
return (0);
}
