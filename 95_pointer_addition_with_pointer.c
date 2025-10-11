#include<stdio.h>

int main(void)
{
	int arr[5]={10,20,30,40,50};
	int *pPtr1=&arr[0];
	int *pPtr2=&arr[4];
	
	printf("%d\n",pPtr1);    //13629444
	printf("%d\n",pPtr2);    //13629460
	
//	printf("%d\n",pPtr1+pPtr2);   Error: '+' : cannot add two pointers
	
	return 0;
}
