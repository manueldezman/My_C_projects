#include <stdio.h>
#include <unistd.h>

/* a c program that uses command line arguments */

int main(int argc, char *argv[])
{
	char *delivery = "";
	int option;
	int count;
	int thick = 0;

	while ((option = getopt(argc, argv, "d:t")) != EOF)
	{
		switch(option)
		{
			case 'd':
				delivery = optarg;
				break;
			case 't':
				thick = 1;
				break;
			default:
				printf("unknown option!\n");
			return(0);
		}
	}
	argc -= optind;
	argv += optind;

	if (thick)
		printf("Thick crust\n");
	if (delivery[0])
		printf("To be delivered %s\n", delivery);
	printf("Ingredients: \n");
	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);
	return(0);
}
