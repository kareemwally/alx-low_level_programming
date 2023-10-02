#include "main.h"
/**
 *check-function
 *Description:checks if n less or equal 1
 *@n:the number we wanna check
 *return : (int) 1- zero
 */
int check(int n)
{
if (n <= 1)
{
i = 0;
}
else
i = 1;
return (i);
}
/**
 *is_prime_number-function
 *description:checks if n is prime or not
 *@n:the number we wanna check
 *return : (int) 1-0
 */
int is_prime_number(int n)
{
int res = 0;
if (check(n))
{
if (n % j != 0)
{
res = 1;
j++;
is_prime_number(n);
}
else
{
return (0);
}
}
return (res);
}
