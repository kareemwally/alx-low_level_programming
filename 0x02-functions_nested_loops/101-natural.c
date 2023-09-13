#include<stdio.h>
#include<stdlib.h>
#include"main.h"
/**
 * main - Entry point
 * Description:'This program is to sum the 3 or 5-factored numbers'
 * Return:int always 0 (success)
 */
int main(void)
{
comp_add();
return (0);
}
/**
 * comp_add - function
 * Description:3,5 factored numbers 0:1024 summation
 * Returns:void
 */
void comp_add(void)
{
int result = 0, i;
for (i = 0; i < 1024; i++)
{
if (i % 3 == 0 || (i % 5 == 0))
result += i;
}
printf("%d\n", result);
}
