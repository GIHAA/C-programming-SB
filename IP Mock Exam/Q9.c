#include <assert.h>
int calculatePoints(float purchaseAmount);

int main (void)
{
	assert(calculatePoints(5000) == 500);
	assert(calculatePoints(3000) == 200);
}

int calculatePoints(float purchaseAmount)
{
	if(purchaseAmount >= 5000)
		return 500;
	else if(purchaseAmount >= 3000)
		return 200;
	else if(purchaseAmount >= 1000)
		return 100;
	else
		return 25;	
}
