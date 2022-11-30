#include <stdio.h>

/* a program that prints a right-aligned pyramid */

int main(void)
{
	int i,j,k,n;
	
	printf("Enter the height of the pyramid: \n");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = i; j < n; j++)
		{
			printf(" ");
		}
		for (k = 0; k < i; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return(0);
}
