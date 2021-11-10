//gihaa 2021/11/10
//incomplete

#include <stdio.h>

int main ( void ){
	
	FILE *fptr;
	
	
	int i,num;
	char name [10];
	
	for( i = 0; i < 5; i++ ){
		
		fptr = fopen( "loyalty.dat","ab" );
		
		printf( "Enter number of %d - ",i+1 );
		scanf( "%d", num);
		
		printf( "Enter name of %s - ",i+1 );
		scanf( "%s", name);
		
		if( ){
			
			fptr = fopen( "loyalty.dat","ab" );
			fprintf ( fptr,"%d\t%s",num,name );
			
		}
		else
			continue;
		
		fclose( fptr );
		
	}

	

	
}
