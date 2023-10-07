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
int i;
if (argc <= 1)
{
printf("Error\n");
return (1);
}
int mul = argv[1] * argv[2];
printf("%d\n", mul);
return (0);
}
