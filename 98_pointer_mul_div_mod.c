#include<stdio.h>

int main(void)
{
	int arr[5]={10,20,30,40,50};
	int *pPtr1=&arr[3];
	int *pPtr2=&arr[5];
	
//	printf("%d\n",pPtr1*3);     Error'*' : illegal, left operand has type 'int *'
//	printf("%d\n",pPtr1*pPtr2); Error'*' : illegal, left operand has type 'int *'
//	                            Error '*' : illegal, right operand has type 'int *'
	
//	printf("%d\n",pPtr1/3);    Error'/' : illegal, left operand has type 'int *'
//	printf("%d\n",pPtr1/pPtr2);Error'/' : illegal, left operand has type 'int *'
//	                           Error  '/' : illegal, right operand has type 'int *'
	
//	printf("%d\n",pPtr1%3);    Error'%' : illegal, left operand has type 'int *'
//	printf("%d\n",pPtr1%pPtr2);Error'%' : illegal, left operand has type 'int *'
//	                           Error '%' : illegal, right operand has type 'int *'
	
	return 0;
}
	

