//gihaa 2021/11/10
//incomplete

#include <stdio.h>

int main ( void ){
	
	FILE *fptr;

	fptr = fopen( "loyalty.dat","wb" );
		
	fprintf( fptr,"7728369210 Dinesh\n7773457219 Subash" );
		
	fclose( fptr );
	
	
}
