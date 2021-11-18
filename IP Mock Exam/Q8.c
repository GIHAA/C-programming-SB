#include <stdio.h>

float area (float ,float);
float add (float, float);
float sub (float, float);

float main (void)
{
	printf("The area is %f",area(15.0,9.0) - area(5.0, sub(9.0, 4.5)) - area(3.5, sub(9.0,4.5)));
}

float area (float width, float length)
{
	return width*length;	
}
float add (float num1, float num2)
{
	return num1 + num2;
}
float sub (float num1, float num2)
{
	return num1 - num2;
}
