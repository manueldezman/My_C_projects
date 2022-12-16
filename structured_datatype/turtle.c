#include <stdio.h>

/* a program that updates a struct variable */

typedef struct{
const char *name;
const char *specie;
int age;
}turtle;

void happy_birthday(turtle *t);

int main(void)
{
	turtle myrtle = {"Myrtle", "Leatherback sea turtle"};
	printf("Enter %s current age: \n", myrtle.name);
	scanf("%i", &myrtle.age);
	happy_birthday(&myrtle);
	return(0);
}
void happy_birthday(turtle *t)
{
	(*t).age = (*t).age + 1;
	printf("Happy birthday %s!\nYou are now %i years old.\n", (*t).name, (*t).age);
}
