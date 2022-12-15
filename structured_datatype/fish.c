#include <stdio.h>

/* a c program that prints uses structured data types to store and display informations about a fish */

	typedef struct{
	const char *ingredient;
	float weight;
	}meal;

        typedef struct{
	const char *description;
	float duration;
	}exercise;

	typedef struct{
	meal food;
	exercise exercise;
	}preference;

	typedef struct{
	const char *name;
	const char *specie;
	int age;
	int teeth;
	preference care;
	}fish;

void label(fish a);

int main(void)
{

	fish snoopy = {"Snoopy", "Piranha", 4, 65, {{"meat", 4.3}, {"swim in jacuzzi", 3.0}}};

	label(snoopy);
	return 0;

}
void label(fish a)
{
	printf("Name: %s\nSpecies: %s\n %i years  old \n %i teeth\n", a.name, a.specie, a.age, a.teeth);
	printf("Feed with %.2f lbs of %s and allow to %s for %.2f hours\n", a.care.food.weight, a.care.food.ingredient, a.care.exercise.description, a.care.exercise.duration);
}
