#include<stdio.h>

float calAdditionalCharges(int orderType, float subTotal);
float calTotalBill(float additional, float subTotal);

int main (void)
{
	int orderType;
	float subTotal, total;
	
	printf("Enter the order type       : ");
	scanf("%i",&orderType);
	printf("Enter subtotal of the order: ");
	scanf("%f",&subTotal);
	
	total = calTotalBill(calAdditionalCharges(orderType, subTotal), subTotal);
	printf("The Total bill             : %.2f", total);
}

float calAdditionalCharges(int orderType, float subTotal)
{
	switch (orderType)
	{
		case 1:
			return (subTotal * 0.12) + (subTotal * 0.1);
		case 2:
			return (subTotal * 0.12);
		case 3:
			return (subTotal * 0.12) + (subTotal * 0.05);
		default:
			printf("Invalid order type!\n");
	}
}

float calTotalBill(float additional, float subTotal)
{
	return additional + subTotal;
}
