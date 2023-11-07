#ifndef FILE_DOG
#define FILE_DOG

/**
 * struct dog - Shows the structure dog
 * @name: Is the pointer to char name's dog
 * @age: Is the atribute float age's dog
 * @owner: Is the pointer to char owner's dog
 */

struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);


#endif
