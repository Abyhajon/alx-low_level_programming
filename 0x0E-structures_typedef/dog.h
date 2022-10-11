#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog attributes
 * @name: name of the dog
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Description: record of dog's attributes
 */
struct dog
{

	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);


#endif
