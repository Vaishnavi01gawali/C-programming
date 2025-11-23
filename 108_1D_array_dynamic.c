#include<stdio.h>
#include<malloc.h>

int main(void)
{
	int *pPtr=NULL;
	int iCounter;
	int iNoOfElements;
	
	printf("How many elements you want to enter :-");
	scanf("%d",&iNoOfElements);
	
	pPtr=(int*)malloc(iNoOfElements*sizeof(int));
	if(NULL==pPtr)
	{
		printf("Memory allocation failed");
		return -1;
	}
	for(iCounter=0;iCounter<iNoOfElements;iCounter++)
	{
		printf("Enter pPtr[%d]",iCounter);
		scanf("%d",&pPtr[iCounter]);
	}
	
	printf("\narray value are:\n");
	for(iCounter=0;iCounter<iNoOfElements;iCounter++)
	{
		printf("pPtr[%d]=%d\n",iCounter,pPtr[iCounter]);
	
	}
	
	if(pPtr!=NULL)
	{
		free(pPtr);
		pPtr=NULL;
	}
	
	return 0;
	
}

/*
How many elements you want to enter :-2
Enter pPtr[0]56
Enter pPtr[1]67

array value are:
pPtr[0]=56
pPtr[1]=67
*/
