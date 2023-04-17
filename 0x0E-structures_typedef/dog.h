#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct representing a dog
 *
 * @name: the name of the dog (string)
 * @age: the age of the dog (float)
 * @owner: the name of the dog's owner (string)
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif /* DOG_H */
