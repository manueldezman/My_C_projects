#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* This is a C program that categorize all continents participating in the World cup according to their continents,reading input from an external file and sending output to 5 different external files */

int main(void)
{
	char countries[80];

	FILE *input = fopen("countries.csv", "r");
	FILE *output1 = fopen("Asia.csv", "w");
	FILE *output2 = fopen("Europe.csv", "w");
	FILE *output3 = fopen("Africa.csv", "w");
	FILE *output4 = fopen("North_america.csv", "w");
	FILE *output5 = fopen("South_america.csv", "w");

	while(fscanf(input, "%79[^\n]\n", countries) == 1)
	{
		if (strstr(countries, "Asia"))
			fprintf( output1, "%s\n", countries);
		else if (strstr(countries, "Europe"))
			fprintf( output2, "%s\n", countries);
		else if (strstr(countries, "Africa"))
			fprintf( output3, "%s\n", countries);
		else if (strstr(countries, "N.america"))
			fprintf( output4, "%s\n", countries);
		else
			fprintf( output5, "%s\n", countries);
	}
	fclose(output1);
	fclose(output2);
	fclose(output3);
	fclose(output4);
	fclose(output5);
	return(0);


}


