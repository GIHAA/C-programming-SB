#include <stdio.h>

int main (void)
{
	int i, j;
	int att[5][5] = {{1,0,1,1,1}, {1,1,1,1,1}, {1,1,0,1,1}, {1,1,1,1,1}, {1,1,1,1,0}};
	
	for ( i = 0; i <= 4; i++)
	{
	
		for ( j = 0; j <= 4; j++)
		{
			if( att[i][j] != 1)
				break;
			if( j == 4 )
				printf("Student %i has full attendence.\n",i+1);	
		}
	}
}
