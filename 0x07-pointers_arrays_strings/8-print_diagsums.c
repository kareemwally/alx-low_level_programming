#include"main.h"
/**
 *print_diagrams -Function
 *Description:prints the sum of diagonal
 *@a:the 2-d array
 *@size:the square matrix size
 *return:(void)
 */
void print_diagsums(int *a, int size)
{
int i, j , res = 0;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (i == j)
res += *(a + i) + j;
}
}
printf("%d", res);
}
