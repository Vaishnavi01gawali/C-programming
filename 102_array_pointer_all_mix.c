#include<stdio.h>

int main(void)
{
	int arr[5]={10,20,30,40,50};
	int *pPtr[5]={arr,arr+1,arr+2,arr+3,arr+4};
	int **ppPtr=pPtr;
	
	printf("%d %d %d",arr,*arr,&arr);                       //6487552  10  6487552
	printf("\n");
	
	printf("%d %d %d\t",pPtr,*pPtr,**pPtr);                 //6487504  6487552  10
	printf("\n");
	
	printf("%d %d %d\t",ppPtr,*ppPtr,**ppPtr);              //6487504  6487552  10
	printf("\n");
	
	*++ppPtr;
	printf("%d %d %d\t",ppPtr-pPtr,*ppPtr-arr,**ppPtr);      //1   1  20
	printf("\n");
	
	*ppPtr++;
	printf("%d %d %d\t",ppPtr-pPtr,*ppPtr-arr,**ppPtr);	     //2  2  30
	printf("\n");
	
	++*ppPtr;
	printf("%d %d %d\t",ppPtr-pPtr,*ppPtr-arr,**ppPtr);      //2  3  40
	
	return 0;
	
}
