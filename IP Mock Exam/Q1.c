#include <stdio.h>

int main (void)
{
	int num[5] = {2,5,8,4,9};
	int reverse[5];
	int i;
	
	for ( i = 0; i <= 4; i++)
	{
		reverse[4 - i] = num [i];
	}
	
	for ( i = 0; i <= 4; i++)
		printf("%i ",reverse[i]);
}
