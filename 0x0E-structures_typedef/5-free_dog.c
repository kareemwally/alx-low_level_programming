#include<stdlib.h>
#include"dog.h"
#include<stddef.h>
/**
 *free_dog-function
 *description:that function frees the memory allocated for d
 *@d:the struct we wanna free now
 *Return:(void)
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
if (d->name != NULL)
free(d->name);
if (d->owner != NULL)
free(d->owner);

free(d);
}
}
