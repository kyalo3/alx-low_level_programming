#include "dog.h"

/**
 * init_dog - contains ...
 * @d - pointer
 * @name: name of dog
 * @age: age of dog
 * @owner: owner name
 * Description: dog variables
 */

void init_dog(struct dog *d, char *name, float age, char *owner);

void init_dog(struct dog *d, char *name, float age, char *owner)
{
        if (d){
                d->name = name;
                d->age = age;
                d->owner = owner;
        }
}
