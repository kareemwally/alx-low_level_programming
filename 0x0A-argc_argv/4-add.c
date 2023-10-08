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
int i, sum = 0;
(void)i;
(void)sum;
for (i = 1; i < argc; i++)
{
if (puts(argv[i]) >= 48 && puts(argv[i]) < 58)
sum += atoi(argv[i]);
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
return (0);
}
