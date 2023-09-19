#include"main.h"
/**
 *print_array -Function
 *Description:this function is to print n numbers of array
 *@a:the int array
 *@n:the number of elements to print
 *Return:void
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i <= n - 1; i++)
{
if (i != n - 1)
printf("%d, ", a[i]);
else
printf("%d", a[i]);
}
printf("\n");
}
