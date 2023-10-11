#include"dog.h"
#include<stddef.h>
/**
 *int_dog -Function
 *description:this function initialize a struct
 *@name:the dog's name
 *@age: the dog's age
 *@owner: the owner of dog
 *@d: a pointer of type dog struct
 *Return:(void)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
(*d).age = age;
(*d).name = name;
(*d).owner = owner;
}
}
