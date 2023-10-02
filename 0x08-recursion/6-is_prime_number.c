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
int is_prime_number(int n)
{
int res = 0;
if (check(n))
{
if (n % i != 0)
{
res = 1;
i++;
is_prime_number(n);
}
else
{
return (0);
}
}
return (res);
}
