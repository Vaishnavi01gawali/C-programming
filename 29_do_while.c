#include<stdio.h>

int main(void)
{
	int iCounter;
	
	iCounter=0;
	do
	{
		printf("%d",iCounter);      // 0       1       2       
		iCounter++;
	}while(iCounter<3);

	
	iCounter=3;
	do
	{
		printf("\n%d",iCounter);
		iCounter++;
	}while(iCounter<3);           // 3
	
	return 0;
}
