#include <stdio.h>

int main (void)
{
	char item[100];
	char discript[100];
	char price[100];
	char quantity[100];
	int i;
	
	FILE *ptrfile = fopen("item.dat","a+");
	
	if ( ptrfile == NULL)
	{
		printf("Error");
		return -1;
	}
	fprintf(ptrfile,"\n");
	printf("Item Code\tDescription\tPrice\n");
	for ( i = 0; i <= 4; i++)
	{
		printf("Enter the item code: ");
		scanf(" %s",&item);
		fprintf(ptrfile,"%s\t",item);
		printf("Enter the discription: ");
		scanf(" %s",&discript);
		fprintf(ptrfile,"%s\t",discript);
		printf("Enter the unit price: ");
		scanf(" %s",&price);
		fprintf(ptrfile,"%s\t",price);
		printf("Enter the Quantity: ");
		scanf(" %s",&quantity);
		fprintf(ptrfile,"%s\t\n",quantity);	
	}
	
}
