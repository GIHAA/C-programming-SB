#include <stdio.h>

int main (void)
{
	int item,num;
	float total = 0;
	
	printf( "Enter item number :" );
	scanf( "%d", &item );
	
	
	while( item != -99) 
	{	
		
		printf( "Enter quantity    :" );
		scanf( "%d", &num );
		
		switch( item ){
			
			case 1 :
				total += 30.00 * num;	 
				break;
				
			case 2 :
				total += 45.00 * num;
				break;
				
			case 3 :
				total += 55.00 * num;
				break;
			
			default :
				printf( "Invalid item number " );
			
		}
		
		printf( "\n\nEnter item number :" );
		scanf( "%d", &item );
		
		
	}

	printf( "Total price is : %.2f", total);


}
