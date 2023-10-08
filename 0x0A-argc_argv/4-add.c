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
int i, sum = 0, o;
(void)i;
(void)sum;
(void)o;
for (i = 1; i < argc; i++)
{
o = atoi(argv[i]);
if (o == 0)
{
printf("Error\n");
return (1);
}
else
{
sum += atoi(argv[i]);
}
}
printf("%d\n", sum);
return (0);
}
