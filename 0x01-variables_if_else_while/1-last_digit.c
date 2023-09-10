#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: 'This program to get the last digit using % operator'
 *
 * Return: Always 0 (Success)int main(void)
 */
int main(void)
{
	int n, Ld;

srand(time(0));
n = rand() - RAND_MAX / 2;
Ld = n % 10;
printf("Last digit of %d is %d and", n, Ld);
if (Ld > 5)
printf(" is greater than 5\n");
else if (Ld < 6 && Ld != 0)
printf(" is less than 6 and not 0\n");
else
printf(" is 0\n");
	return (0);
}

