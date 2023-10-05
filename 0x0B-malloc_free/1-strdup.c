#include"main.h"
char *_strdup(char *str)
{
char *s =(char *) strdup((long unsigned int)strlen(str));
if (s == NULL || str == NULL)
return (NULL);
else
return (s);
}
