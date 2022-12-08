#include <stdio.h>
#include "encrypt.h"

/* a c program that encrypts any message the user types in using XOR encryption */

int main(void)
{
	char message[80];

	printf("What message will you like to encrypt?\nInput it below: \n");
	scanf("%79[^\n]", message);
	encrypt(message);
	printf("The encrypted message is:\n %s\n", message);
	return(0);

}
