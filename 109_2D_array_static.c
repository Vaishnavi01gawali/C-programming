#include<stdio.h>
#define MAX 50


int main(void)
{
	int arr[MAX][MAX];
	int iColumns;
	int iRows;
	int iCounter1;
	int iCounter2;
	
    printf("How many Rows you want to enter(< %d)",MAX);
	scanf("%d",&iRows);
	
	printf("How many Columns you want to enter(< %d)",MAX);
	scanf("%d",&iColumns);
	
	for(iCounter1=0;iCounter1<iRows ;iCounter1++)
	{
		for(iCounter2=0;iCounter2 <iColumns;iCounter2++)
		{
			printf("Enter value of arr[%d][%d]",iCounter1,iCounter2);
			scanf("%d",&arr[iCounter1][iCounter2]);
		}
	}
	printf("Array values are :\n");
	for(iCounter1=0;iCounter1 <iRows;iCounter1++)
	{
		for(iCounter2=0;iCounter2 <iColumns;iCounter2++)
		{
			printf(" value of arr %d\n",arr[iCounter1][iCounter2]);
		}
	}
	
	return 0;
}
/*
How many Rows you want to enter(< 50) 5
How many Columns you want to enter(< 50) 3

Enter value of arr[0][0]56
Enter value of arr[0][1]78
Enter value of arr[0][2]89
Enter value of arr[1][0]89
Enter value of arr[1][1]87
Enter value of arr[1][2]79
Enter value of arr[2][0]09
Enter value of arr[2][1]98
Enter value of arr[2][2]68
Enter value of arr[3][0]67
Enter value of arr[3][1]76
Enter value of arr[3][2]57
Enter value of arr[4][0]56
Enter value of arr[4][1]67
Enter value of arr[4][2]76

Array values are :
 value of arr 56
 value of arr 78
 value of arr 89
 value of arr 89
 value of arr 87
 value of arr 79
 value of arr 9
 value of arr 98
 value of arr 68
 value of arr 67
 value of arr 76
 value of arr 57
 value of arr 56
 value of arr 67
 value of arr 76
/*
