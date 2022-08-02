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

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
