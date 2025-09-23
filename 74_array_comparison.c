#include<stdio.h>
#define MAX 50

int ArrayCompare(int arr1[],int arr2[] ,int  );

int main(void)
{
	int iCounter;
	int iNoOfElements1;
	int iNoOfElements2;
	
	int arr1[MAX];
	int arr2[MAX];
	
	printf("How many values you want to enter for Array 1? (< %d)",MAX);
	scanf("%d",&iNoOfElements1);
	
	printf("How many values you want to enter for Array 2? (< %d)",MAX);
	scanf("%d",&iNoOfElements2);
	
	if(iNoOfElements1!=iNoOfElements2)
	{
		printf("Array will not be equal\n");
		return 0;
	}
	
	
	printf("\n Enter Array 1 value are:\n");
	for(iCounter=0;iCounter<iNoOfElements1;iCounter++)
	{
		printf("Enter arr[%d] :-",iCounter);
		scanf("%d",&arr1[iCounter]);
	}
	
	printf("\n Enter Array 2 value are:\n");
	for(iCounter=0;iCounter<iNoOfElements2;iCounter++)
	{
		printf("Enter arr[%d]:-",iCounter);
		scanf("%d",&arr2[iCounter]);
	}
	
	if(ArrayCompare(arr1,arr2,iNoOfElements1))
	  printf("Array are equal \n");
	else
	  printf("Array are not equal \n");
	return 0;
	
}

int ArrayCompare(int arr1[],int arr2[],int iNoOfElements)
{
	int iCounter;
	for(iCounter=0;iCounter<iNoOfElements;iCounter++)
	{
		if(arr1[iCounter]!= arr2[iCounter])
		return 0;
	}
	return 1;
}
/*
How many values you want to enter for Array 1? (< 50) 3
How many values you want to enter for Array 2? (< 50) 3

 Enter Array 1 value are:
Enter arr[0] :-10
Enter arr[1] :-20
Enter arr[2] :-30

 Enter Array 2 value are:
Enter arr[0]:-10
Enter arr[1]:-20
Enter arr[2]:-30
Array are equal
*/
