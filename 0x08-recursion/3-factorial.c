#include"main.h"
/**
 *factorial-Function
 *Description: returns the factorial of n
 *@n:the number we need to get its factorial
 *Return: int
 */
int factorial(int n)
{
if (n > 1)
return (n * factorial(n - 1));
else if (n < 0)
{
return (-1);
}
else
return (1);
}
