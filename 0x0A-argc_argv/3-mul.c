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
int i, j;
(void)i;
(void)j;
if (argc <= 1)
{
printf("Error\n");
return (1);
}
i = atoi(argv[1]);
j = atoi(argv[2]);
printf("%d\n", i * j);
return (0);
}
