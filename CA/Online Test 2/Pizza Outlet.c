#include <stdio.h>

int main (void)
{
	int p_type, quantity;
	
	do 
	{
		printf("\nEnter Pizza Type \t: ");
		scanf("%i",&p_type);
		if(p_type == -1)
			break;
		printf("Enter Quantity \t\t: ");
		scanf("%i",&quantity);
		printf("Total Price \t\t: ");
		 switch(p_type){
		 	case 1:	
		 			if (quantity > 3)
		 				printf("Rs.%.2f \n",(quantity*1000.0)*(1 - 0.1));
		 			else
		 				printf("RS.%.2f \n",(quantity*1000.0));
		 			break;
		 
		 	case 2:	
		 			if (quantity > 3)
		 				printf("Rs.%.2f \n",(quantity*1600.0)*(1 - 0.12));
		 			else
		 				printf("RS.%.2f \n",(quantity*1600.0));
		 			break;
		 	
		 	case 3:	
		 			if (quantity > 3)
		 				printf("Rs.%.2f \n",(quantity*1400.0)*(1 - 0.15));
		 			else
		 				printf("RS.%.2f \n",(quantity*1400.0));
		 			break;
		 }
	} while(1);
}
