#include"dog.h"
#include<stddef.h>
/**
 *init_dog -Function
 *Description:this function fils the fields of struct
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
