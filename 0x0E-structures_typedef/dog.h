#ifndef Dog_H
#define Dog_H

/**
 * struct dog - a dog struct
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Description: a struct for dogs charactristic 
 */
struct dog
{
	char* name;
	float age;
	char* owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
struct dog dog_t;


#endif
