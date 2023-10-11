#include"dog.h"
/**
 *int_dog-Function
 *@name:the dog's name
 *@age: the dog's age
 *@owner: the owner of dog
 *@d: a pointer of type dog struct
 *
 *Description : this function initialize a struct
 *Return: (void)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->age = age;
d->name = name;
d->owner = owner;
}
}
