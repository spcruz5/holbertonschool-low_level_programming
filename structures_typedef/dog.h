#ifndef DOG_H
#define DOG_H
/**
 * struct dog- data type struct
 * @name: ptr name
 * @age: age
 * @owner: ptr owner
 *
 * Description: Longer description
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

typedef dog dog_t;
dog_t *newBorn(char *name, int age, char *owner);

/* PROTOTYPES */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
