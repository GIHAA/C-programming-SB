//GIHAA

#include <stdio.h>

int main (void)
{
	char check = 'Y';
	int count = 0;
	int i,total = 0,score;
	
	while( check != 'n' && check != 'N' ){
		
		  count++;
		  
		  printf( "\nEnter marks of student num %d\n", count);		
		  for( i=0; i < 4; i++){
			
			printf( "mark %d -", i+1 );
			scanf( "%d", &score );
			total += score ;
			
		}
		
		printf( "\nTotal marks - %d", total );
		printf( "\nDo you want enter mark of another student (y/n) :");
		scanf( " %c", &check );
	}
}
