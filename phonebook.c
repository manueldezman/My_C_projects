#include <stdio.h>
#include <string.h>

/* a program that displays name and phone number of a person, when his name is searched for, and returns an error if the searched name is not in the phonebook */
int search_for(char name[]);
int num;
char searched_name[10];

typedef struct people
{
	char name[10];
	char number[14];
}
people;
people person[3];

int main()
{
	int i;
	printf("How many numbers will you like to save in this phonebook\n Enter number between 1 and 10:\n");
	scanf("%9d", &num);

	if( num > 10 || num < 1 )
	{
		fprintf( stderr, "Invalid Number!\n");
		return(1);
	}

	for ( i=0; i < num; i++)
	{
		int c;
		c = i + 1;
		printf("Enter name of person %d: \n ", c);
		scanf("%9s", person[i].name);
		printf("Enter person  %d phone number: \n", c);
		scanf("%13s", person[i].number);
	}

	printf("Enter the name of person to be searched: \n");
	scanf("%9s", searched_name);
	search_for(searched_name);
	return 0;
}
int search_for(char name[])
{	
	int i;
	for(i = 0; i < num; i++)
	{
		if(strcmp(person[i].name, searched_name) == 0)
		{
			printf("Found!\nname: %s\nnumber: %s\n", person[i].name, person[i].number);
			return 0;
		}

	}
	printf("Searched name doesn't exist in phonebook!\n");
	return 1;

}
