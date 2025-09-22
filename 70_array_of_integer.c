#include<stdio.h>
#define MAX 3

int main(void)
{
	int arr[MAX];
	int iCounter;
	
	for(iCounter=0;iCounter<MAX;iCounter++)
	{                                                             // Enter Number 1: 45
		printf("Enter Number %d:\t",iCounter+1);                  // Enter Number 2: 56
		scanf("%d",&arr[iCounter]);                               // Enter Number 3: 67
	}
	for(iCounter=0;iCounter<MAX;iCounter++)
	{                                                              // Number 1 is 45
		printf("Number %d is %d\n",iCounter+1,arr[iCounter]);      // Number 2 is 56
	}                                                              // Number 3 is 67
	
	return 0;
}

