
#include <stdio.h> 
#include <math.h>
#include <assert.h>

	
int main(void){
	
	while(1){
		
		
		float total = 0.0;
		int	numofroom,numofnights;
		char cash,type,ask;
		
		
		printf( "Enter room type      :" );
		scanf(" %c",&type);
		
		printf( "Enter num of rooms   :" );
		scanf("%d",&numofroom);
		
		printf( "Enter num of night   :" );
		scanf("%d",&numofnights);
		
		printf( "Enter pay method(M/C):" );
		scanf(" %c",&cash);
		
		if(type == 'D'){
		
			
			if(cash == 'M')
				
				total = 31000.00*numofnights*numofroom;
				
			else if(cash == 'C')
				
				total = (float)((31000.00*numofnights*numofroom) - (31000.00*numofnights*numofroom)*0.1);
		}
		else if(type == 'S'){
		
			
			if(cash == 'M')
			
				total = 35000.00*numofnights*numofroom;
			
			else if(cash == 'C')
			
				total = (float)((35000.00*numofnights*numofroom) - (35000.00*numofnights*numofroom)*0.1);
		}
		else if(type == 'C'){
		
		
			if(cash == 'M')
			
				total = 50000.00*numofnights*numofroom;
			
			else if(cash == 'C')
			
				total = (float)((50000.00*numofnights*numofroom) - (50000.00*numofnights*numofroom)*0.1);
		}
		else if(type == 'E'){
		
		
			if(cash == 'M')
			
				total = 75000.00*numofnights*numofroom;
			
			else if(cash == 'C')
				
				total = (float)((75000.00*numofnights*numofroom) - (75000.00*numofnights*numofroom)*0.1);
		}
		else if(type == 'P'){
	
			
			if(cash == 'M')
			
				total = 100000.00*numofnights*numofroom;
			
			else if(cash == 'C')
				
				total = (float)((100000.00*numofnights*numofroom) - (100000.00*numofnights*numofroom)*0.1);
    	}
		else{
		
			printf("Error invalid type");
			break;
	   }
		
		printf("Total is : %.2f\n\n",total);
		
		printf("Do you want to continue :");
		
		scanf(" %c",&ask);
		
		
		
		if(ask == 'Y'||ask == 'y')
			continue;
			
		else if(ask == 'N'||ask == 'n')
			break;
			
		else
			printf("Invalid input try agian :");
			break;
		
	}
	
}
