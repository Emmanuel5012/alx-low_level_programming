#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 *dog - a new type of data representing a dog
 *@name: name of dog
 *@age: age of dog
 *@owner: owner's name
 */

struct dog
{
char *name;
float age;
char *owner;
};

/**
 * new type
 */
typedef struct dog dog_t;



/**
 *prototypes are below
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
