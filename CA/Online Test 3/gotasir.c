#include <stdio.h>

float findIncreasePrecent(int category);
float findNewPrice(float precentage, float price);

int main (void)
{
	int pCategory;
	float price, newPrice;
	
	printf("Enter the product category   : ");
	scanf("%i",&pCategory);
	printf("Enter the product price (Old): ");
	scanf("%f",&price);
	
	newPrice = findNewPrice(findIncreasePrecent(pCategory), price);
	printf("The new price                : %.2f", newPrice);
}

float findIncreasePrecent(int category)
{
	switch (category)
	{
		case 1:
			return 10;
		case 2:
			return 15;
		case 3:
			return 20;
		default:
			printf("Invalid Product Category!\n");
	}
}

float findNewPrice(float precentage, float price)
{
	return (price + (price * precentage / 100.00));
}
