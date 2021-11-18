#include<stdio.h>
#include<string.h>
#define SIZE 100

int main (void)
{
	int i, upper =  0, lower = 0, numeric = 0, symbol = 0;
	char password[SIZE];
	printf("Enter the password: ");
	scanf("%s",password);
	
	for ( i = 0; i < strlen(password); i++)
	{
		switch(password[i])
		{
			case 65 ... 90:
							upper = 1;
							break;
			case 97 ... 122:
							lower = 1;
							break;
			case 48 ... 57:
							numeric = 1;
							break;
		}
		
		if ( password[i] == '@' || password[i] == '$' || password[i] == '&')
			symbol = 1;
	}
	
	if ( upper == 1 && lower == 1 && numeric == 1 && symbol == 1)
		printf("\nThe password is valid.");
	else
		printf("\nThis password is invalid.");
}
