#include"main.h"
/**
 *main-entry point
 *description:the main function just to print the file name
 *@argc:the count of params passed to main during execution
 *@argv:the parameters
 *Return :(int)
 */
int main(int argc, char const *argv[])
{
(void)argc;
printf("%s\n", argv[0]);
return (0);
}
