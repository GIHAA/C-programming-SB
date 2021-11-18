#include <stdio.h>
#define SIZE 10

void getVaccinationDetails( int studentList[]);

int main (void)
{
	int i;
	int studentCount[SIZE];
	getVaccinationDetails( studentCount);
	return 0;
}

void getVaccinationDetails( int studentList[])
{
	int i;
	for ( i = 0; i < SIZE; i++)
	{
		int dosage;
		puts("Enter Dosage: ");
		scanf("%i",&dosage);
		studentList[i] = dosage;
	}
}
