#ifndef DOG_H
#define DOG_H

/**
 * struct dog - function that prints the dogs info
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: struct with dogs info
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
