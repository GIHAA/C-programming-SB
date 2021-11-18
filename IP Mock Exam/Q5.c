#include <stdio.h>

float calcBonus(int noHours);
int main (void)
{
	int noHours = 100;
	printf("%f",calcBonus(noHours));
}

float calcBonus(int noHours)
{
	float bonus = 0.0;
	bonus = noHours * ( 5.0 / 100.0);
	return bonus;
}
