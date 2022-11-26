#include <stdio.h>

/* a program that evaluates the inputed card,and either increase or decrese the count */

int main()
{
	char Card_name[3];
	int val;

	printf("Enter the Card_name: ");
	scanf("%2s", Card_name);

	switch(Card_name[0])
	{
	case 'A':
		val = 11;
		break;
	case 'J':
		val = 10;
		break;
	case 'K':
		val = 10;
		break;
	case 'Q':
		val = 10;
		break;
	default:
		val = atoi(Card_name);
	}

	if( val >= 3 && val <= 6)
		printf("Count has gone up!\n");
	else if( val == 10)
		printf("Count has gone down!\n");
	else if( val == 11)
		printf("Ace! \n");
	return 0;
}
