#include <stdio.h>

int main (void)
{
	char item[100];
	char discript[100];
	char price[100];
	FILE *ptrfile = fopen("menu.dat","r");
	
	printf("Item Code\tDescription\tPrice\n");
	while (!feof(ptrfile))
	{
		fscanf(ptrfile,"%s",item);
		printf("%s\t\t",item);
		fscanf(ptrfile,"%s",discript);
		printf("%s\t\t",discript);
		fscanf(ptrfile,"%s",price);
		printf("%s\t",price);
		puts("");
	}
	
}
