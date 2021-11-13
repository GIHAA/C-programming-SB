#include <stdio.h>

float calcincrement ( float salary, int noofyearsworked );
float calctotsalary( float salary, float increment);

int main( void ){
	
	float salary,increment;
	int ages;
	
	printf( "Enter salary :" );
	scanf( "%f", &salary);
	
	printf( "Enter years  :" );
	scanf( "%d", &ages);

	increment = calcincrement( salary,ages );
	printf( "Increment    : %f\n", increment );
	
	printf( "Total salary : %f",calctotsalary( salary, increment));
}

float calcincrement ( float salary, int noofyearsworked ){
	
	if( noofyearsworked > 2)
			return salary*0.1;
	
	else
			return 0;
}

float calctotsalary( float salary, float increment){
	
	return salary + increment;
	
}
