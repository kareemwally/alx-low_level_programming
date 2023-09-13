#include"main.h"
/**
 * comp_add - function
 * Description:'This program is to sum the 3 or 5-factored numbers'
 * Return:void
 */
void comp_add(void)
{
int result = 0, i;
for (i = 0; i < 1024; i++)
{
if (i % 3 == 0 || (i % 5 == 0))
result += i;
}
printf("%d", result);
}
