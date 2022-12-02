#include <stdio.h>
#include <string.h>

/* a C program that prints a string backward(reverses it)*/

void print_reverse(char *s);



	char word[30];
        int i;


int main()
{

	printf("Enter the string to be printed backward:\n ");
	scanf("%29s", word);
	print_reverse(word);
	return(0);
}
 void print_reverse(char *s)
{
	size_t length = strlen(word);
	char *last = s  + length - 1;

        printf("The reversed word: \n");

	while( last >= s)
        {
                printf("%c", *last);
		last = last - 1;
        }
        printf("\n");
}


	
