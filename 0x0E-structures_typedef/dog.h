#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct dog for info
 * @name: - pointer to name
 * @age: - float
 * @owner: - string
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog doggy;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
