#include<stdio.h>
#define MAX 50

int main(void)
{
	int arr[MAX][MAX][MAX];
	int iPlanes;
	int iColumns;
	int iRows;
	int iCounter1;
	int iCounter2;
	int iCounter3;
	
	printf("How many Planes you want to enter(< %d)",MAX);
	scanf("%d",&iPlanes);
	
	printf("How many Planes you want to enter(< %d)",MAX);
	scanf("%d",&iRows);
	
	printf("How many Planes you want to enter(< %d)",MAX);
	scanf("%d",&iColumns);
	
	for(iCounter1=0;iCounter1<iPlanes ;iCounter1++)
	{ 
	   for(iCounter2=0;iCounter2<iRows ;iCounter2++)
	  {
		for(iCounter3=0;iCounter3 <iColumns;iCounter3++)
		{
			printf("Enter value of arr[%d][%d][%d]",iCounter1,iCounter2,iCounter3);
			scanf("%d",&arr[iCounter1][iCounter2][iCounter3]);
		}
      }
	}
	printf("Array values are :\n");
	for(iCounter1=0;iCounter1<iPlanes ;iCounter1++)
	{ 
	   for(iCounter2=0;iCounter2<iRows ;iCounter2++)
	  {
		for(iCounter3=0;iCounter3 <iColumns;iCounter3++)
		{
		   printf(" value of arr %d\n",arr[iCounter1][iCounter2][iCounter3]);
		}
      }
	}	
	return 0;
}

/*
How many Planes you want to enter(< 50) 3
How many Planes you want to enter(< 50) 2
How many Planes you want to enter(< 50) 1

Enter value of arr[0][0][0]45
Enter value of arr[0][1][0]67
Enter value of arr[1][0][0]54
Enter value of arr[1][1][0]67
Enter value of arr[2][0][0]98
Enter value of arr[2][1][0]90

Array values are :
 value of arr 45
 value of arr 67
 value of arr 54
 value of arr 67
 value of arr 98
 value of arr 90
 */
 
