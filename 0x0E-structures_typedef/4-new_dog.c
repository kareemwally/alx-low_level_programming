#include<stdli.h>
#include<stddef.h>
#include"dog.h"
/**
 *new_dog-Function
 *description:this function creates pointer of type dog_t
 *@name:the dog's name
 *@age:the dogs'age
 *@owner:the dog's owner
 *Return: it returns a pointer of type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *res;
if (res != NULL)
{
res->name = name;
res->age = age;
res->owner = owner;
}
else
res = NULL;
}
