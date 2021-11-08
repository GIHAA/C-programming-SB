#include <stdio.h> 
#include <math.h>
#include <assert.h>

float calcTotsalary( float salary, float increment );
float calculateincrement( int grade, float basicsalary );


int main (void) {
	
	float basicsalary;
	float increment;
	int grade;
	
	printf("\nEnter salary :");
	scanf("%f",&basicsalary);
	
	printf("\nEnter grade   :");
	scanf("%d",&grade);
	
	calculateincrement( grade, basicsalary);
	
	increment = calculateincrement( grade, basicsalary);
	printf("\nIncrement    : %.2f",increment);
	
	printf("\nTotal salary : %.2f",calcTotsalary( basicsalary, increment));
	
}

float calculateincrement( int grade, float basicsalary){
	
	switch (grade){
		
		case 1 :
			return basicsalary*0.1;
			break;
	
		case 2 :
			return basicsalary*1.5;
			break;
			
		case 3:
			return basicsalary*0.2;
			break;
			
		
	}
	
}


float calcTotsalary( float salary, float increment){
	
	
	return salary + increment;
	
}

