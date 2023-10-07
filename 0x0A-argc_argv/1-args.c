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
(void)argv;
printf("%d\n", (argc - 1));
return (0);
}
