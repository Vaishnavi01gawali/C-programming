#include<stdio.h>
#include<malloc.h>

int main(void)
{
	int iCounter1;
	int iCounter2;
	int iCounter3;
	int iPlanes;
	int iRows;
	int iColumns;
	int ***pppPtr=NULL;
	
	printf("How many Planes you want to enter:-\t");
	scanf("%d",&iPlanes);
	
	printf("How many Rows you want to enter:-\t");
	scanf("%d",&iRows);
	
	printf("How many Columns you want to enter:-\t");
	scanf("%d",&iColumns);
	
	pppPtr=(int***)malloc(iPlanes*sizeof(int**));
	if(NULL==pppPtr)
	{
		printf("Memory allocation FAILED");
		return -1;
	}
	
	for(iCounter1=0;iCounter1<iPlanes;iCounter1++)
	{
	     pppPtr[iCounter1]=(int**)malloc(iRows*sizeof(int*));
		 if(NULL==pppPtr[iCounter1])
    	  {
		    printf("Memory allocation FAILED");
		    return -1;
	      }
	     
		for(iCounter2=0;iCounter2<iRows;iCounter2++)
		{
		   
		   pppPtr[iCounter1][iCounter2]=(int*)malloc(iColumns*sizeof(int));
		      if(NULL==pppPtr[iCounter1][iCounter2])
    	   {
		        printf("Memory allocation FAILED");
		        return -1;
	       }
	      for(iCounter3=0;iCounter3 <iColumns;iCounter3++)
		 {
			printf("Enter value of pppPtr[%d][%d][%d]\t",iCounter1,iCounter2,iCounter3);
			scanf("%d",&pppPtr[iCounter1][iCounter2][iCounter3]);
	   	 }
		}
		
	}
	
	printf("\nArray values are :\n");
	for(iCounter1=0;iCounter1 <iPlanes;iCounter1++)
	{
		 for(iCounter2=0;iCounter2 <iRows;iCounter2++)
	   {
		    for(iCounter3=0;iCounter3 <iColumns;iCounter3++)
		 {
			printf("pppPtr[%d][%d][%d]= %d\n",iCounter1,iCounter2,iCounter3,pppPtr[iCounter1][iCounter2][iCounter3]);
		 }
	   }
	}
	
	if(pppPtr!=NULL)
	{
		
		for(iCounter1=0;iCounter1<iPlanes;iCounter1++)
		{ 
		  	if (pppPtr[iCounter1] != NULL)
           {
             for (iCounter2 = 0; iCounter2 < iRows; iCounter2++)
             {
                if (pppPtr[iCounter1][iCounter2] != NULL)
                {
                    free(pppPtr[iCounter1][iCounter2]);
                    pppPtr[iCounter1][iCounter2] = NULL;
                }
             }
             free(pppPtr[iCounter1]);
             pppPtr[iCounter1] = NULL;
            }
        } 		
		free(pppPtr);
		pppPtr=NULL;
	}
	
	return 0;
	
}
/*
How many Planes you want to enter:-     3
How many Rows you want to enter:-       2
How many Columns you want to enter:-    3
Enter value of pppPtr[0][0][0]  42
Enter value of pppPtr[0][0][1]  65
Enter value of pppPtr[0][0][2]  76
Enter value of pppPtr[0][1][0]  34
Enter value of pppPtr[0][1][1]  10
Enter value of pppPtr[0][1][2]  67
Enter value of pppPtr[1][0][0]  87
Enter value of pppPtr[1][0][1]  89
Enter value of pppPtr[1][0][2]  87
Enter value of pppPtr[1][1][0]  76
Enter value of pppPtr[1][1][1]  87
Enter value of pppPtr[1][1][2]  76
Enter value of pppPtr[2][0][0]  76
Enter value of pppPtr[2][0][1]  45
Enter value of pppPtr[2][0][2]  78
Enter value of pppPtr[2][1][0]  87
Enter value of pppPtr[2][1][1]  78
Enter value of pppPtr[2][1][2]  98

Array values are :
 pppPtr[0][0][0]= 42
 pppPtr[0][0][1]= 65
 pppPtr[0][0][2]= 76
 pppPtr[0][1][0]= 34
 pppPtr[0][1][1]= 10
 pppPtr[0][1][2]= 67
 pppPtr[1][0][0]= 87
 pppPtr[1][0][1]= 89
 pppPtr[1][0][2]= 87
 pppPtr[1][1][0]= 76
 pppPtr[1][1][1]= 87
 pppPtr[1][1][2]= 76
 pppPtr[2][0][0]= 76
 pppPtr[2][0][1]= 45
 pppPtr[2][0][2]= 78
 pppPtr[2][1][0]= 87
 pppPtr[2][1][1]= 78
 pppPtr[2][1][2]= 98
/*
