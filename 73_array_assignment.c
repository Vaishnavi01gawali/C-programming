#include<stdio.h>
#define MAX 50

void ArrayAssign(int[],int[] ,int);

int main(void)
{
	int iCounter;
	int iNoOfElements;
	
	int arr1[MAX];
	int arr2[MAX];
	
	printf("How many values you want to enter? (< %d)",MAX);
	scanf("%d",&iNoOfElements);
	
	for(iCounter=0;iCounter<iNoOfElements;iCounter++)
	{
		printf("Enter arr[%d]",iCounter);
		scanf("%d",&arr1[iCounter]);
	}
	ArrayAssign(arr1,arr2,iNoOfElements);
	
	printf("\nArray 1 value are:\n");
	for(iCounter=0;iCounter<iNoOfElements;iCounter++)
	printf("arr1[%d]=%d\n",iCounter,arr1[iCounter]);
	
	printf("\nArray 2 value are:\n");
	for(iCounter=0;iCounter<iNoOfElements;iCounter++)
	printf("arr1[%d]=%d\n",iCounter,arr1[iCounter]);
	
	return 0;
	
}

void ArrayAssign(int arr1[],int arr2[],int iNoOfElements)
{
	int iCounter;
	for(iCounter=0;iCounter<iNoOfElements;iCounter++)
	arr2[iCounter]=arr1[iCounter];
}

/* 
How many values you want to enter? (< 50) 4
Enter arr[0] 40
Enter arr[1]20
Enter arr[2]30
Enter arr[3]45

Array 1 value are:
arr1[0]=40
arr1[1]=20
arr1[2]=30
arr1[3]=45

Array 2 value are:
arr1[0]=40
arr1[1]=20
arr1[2]=30
arr1[3]=45
*/

