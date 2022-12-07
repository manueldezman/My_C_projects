#include <stdio.h>

/* a C program that calculates the price of goods bought(total price = actual price + tax) */

float add_with_tax(float val);
float total = 0.0;
short counter;
short tax_percentage = 6;
short i;
float actual_price;
float item_price;

int main(void)
{

	printf("How many items are you buying?\n");
	scanf("%hi", &counter);
	for (i = 1; i <= counter; i++)
	{
		printf("Enter price of item %hi: ", i);
		scanf("%f", &item_price);
		add_with_tax(item_price);
		total = total + actual_price;
	}
	printf("total items number: %hi\n", counter);
	printf("Total items price: %.2f\n", total);
	return(0);
}

float add_with_tax(float val)
{
	float tax_rate = 1 + (tax_percentage/100.0);
	actual_price  = item_price * tax_rate;
	return actual_price;
}

