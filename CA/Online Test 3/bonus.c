#include <stdio.h>

int findBonusTimes(char empCategory);
float findBonus(float salary, int noOfTimes);

int main (void)
{
	float salary;
	char enumber;
	
	printf("Enter salary         : ");
	scanf("%f",&salary);
	printf("Enter Employee Number: ");
	scanf(" %c",&enumber);
	
	int noOfTimes = findBonusTimes(enumber);
	printf("Bonus                : %.2f",findBonus(salary,noOfTimes));
}

int findBonusTimes(char empCategory)
{
	switch(empCategory)
	{
		case 65:
			return 1;
		case 66:
			return 2;
		case 67 ... 69:
			return 3;
		default:
			printf("Invalid Employee Category!\n");
	}
}

float findBonus(float salary, int noOfTimes)
{
	return salary * noOfTimes;
}
