#include<stdio.h>
#define MAX 50

int main(void)
{
	int arr[MAX];
	int iCounter;
	int iNoOfElements;
	
	printf("How many elements you want to enter :-");
	scanf("%d",&iNoOfElements);
	
	for(iCounter=0;iCounter<iNoOfElements;iCounter++)
	{
		printf("Enter arr[%d]",iCounter);
		scanf("%d",&arr[iCounter]);
	}
	
	printf("\narray value are:\n");
	for(iCounter=0;iCounter<iNoOfElements;iCounter++)
	{
		printf("arr[%d]=%d\n",iCounter,arr[iCounter]);
	
	}
	
	return 0;
	
}

/*
How many elements you want to enter :-3
Enter arr[0]23
Enter arr[1]34
Enter arr[2]45

array value are:
arr[0]=23
arr[1]=34
arr[2]=45
*/
