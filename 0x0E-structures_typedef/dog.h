#ifndef DOG_H
#define DOG_H
/**
 * struct dog - this are the dogs details
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: various details of a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
