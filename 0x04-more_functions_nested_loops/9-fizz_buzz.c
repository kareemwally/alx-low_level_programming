#include"main.h"
/**
 * main - Entry point
 * Description:'This program is to check %3 and %5'
 * Return:void (prints digits)
 */
int main(void)
{
int i;
for (i = 1; i <= 100;  i++)
{
if (i != 100)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
}
else if (i % 5 == 0)
printf("Buzz ");
else if (i % 3 == 0)
printf("Fizz ");
else
printf("%d ", i);
}
else
printf("Buzz\n");
}
return (0);
}
