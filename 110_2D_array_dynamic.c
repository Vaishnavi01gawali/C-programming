#include<stdio.h>
#include<malloc.h>

int main (void)
{
	int iCounter1;
	int iCounter2;
	int iRows;
	int iColumns;
	int **ppPtr=NULL;
	
	printf("How many Rows you want to enter:-\t");
	scanf("%d",&iRows);
	
	printf("How many Columns you want to enter:-\t");
	scanf("%d",&iColumns);
	
	ppPtr=(int**)malloc(iRows*sizeof(int*));
	if(NULL==ppPtr)
	{
		printf("Memory allocation FAILED");
		return -1;
	}
	
	for(iCounter1=0;iCounter1<iRows;iCounter1++)
	{
		ppPtr[iCounter1]=(int*)malloc(iColumns*sizeof(int));
		if(NULL==ppPtr [iCounter1])
    	{
		   printf("Memory allocation FAILED");
		   return -1;
	    }

	    for(iCounter2=0;iCounter2 <iColumns;iCounter2++)
		{
			printf("Enter value of ppPtr[%d][%d]\t",iCounter1,iCounter2);
			scanf("%d",&ppPtr[iCounter1][iCounter2]);
		}
	}
	
	printf("\nArray values are :\n");
	for(iCounter1=0;iCounter1 <iRows;iCounter1++)
	{
		for(iCounter2=0;iCounter2 <iColumns;iCounter2++)
		{
			printf(" ppPtr[%d][%d]= %d\n",iCounter1,iCounter2,ppPtr[iCounter1][iCounter2]);
		}
	}
	if(ppPtr!=NULL)
	{
		for(iCounter1=0;iCounter1<iRows;iCounter1++)
		{ 
		    if (ppPtr[iCounter1] != NULL)  
		    {
		    	free(ppPtr[iCounter1]);
			    ppPtr[iCounter1]=NULL;
			}	
		}
		free(ppPtr);
		ppPtr=NULL;
	}
	
	return 0;
	
}

/*
How many Rows you want to enter:-       3
How many Columns you want to enter:-    2
Enter value of ppPtr[0][0]      34
Enter value of ppPtr[0][1]      32
Enter value of ppPtr[1][0]      12
Enter value of ppPtr[1][1]      34
Enter value of ppPtr[2][0]      13
Enter value of ppPtr[2][1]      13

Array values are :
 ppPtr[0][0]= 34
 ppPtr[0][1]= 32
 ppPtr[1][0]= 12
 ppPtr[1][1]= 34
 ppPtr[2][0]= 13
 ppPtr[2][1]= 13
/*

