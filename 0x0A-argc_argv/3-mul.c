#include"main.h"
/**
 *main-entry point
 *description:the main function just to print the file name
 *@argc:the count of params passed to main during execution
 *@argv:the parameters
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int i, j, mul;
(void)i;
(void)j;
(void)mul;
if (argc <= 1)
{
printf("Error\n");
return (1);
}
i = atoi(argv[1]);
j = atoi(argv[2]);
mul = i * j;
printf("%d\n", mul);
return (0);
}
