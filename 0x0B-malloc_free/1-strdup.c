#include"main.h"
char *_strdup(char *str)
{
char *s =(char *) strdup((const char*)strlen(str));
if (s == NULL || str == NULL)
return (NULL);
else
return (s);
}
