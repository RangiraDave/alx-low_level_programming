#include"dog.h"
/**
 * init_dog - Function to initialize dog
 * @d: Pointer to dog structiure
 * @name: pointer to dog name
 * @age: dog age
 * @owner: Pointer to Dog owner
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d -> name = name;
		d -> age = age;
		d -> owner = owner;
	}
}
