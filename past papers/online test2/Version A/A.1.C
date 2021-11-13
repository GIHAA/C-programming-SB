
#include <stdio.h>

int main( void ){

   	int a = 97;
	int i,j;
	
    for( i = 0; i < 5; i++ ){
        
        for( j=0 ; j < i+1; j++){

            printf( "%c", a+i);
        }
        printf("\n");
    }


}

