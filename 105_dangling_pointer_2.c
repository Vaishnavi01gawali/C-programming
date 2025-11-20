#include<stdio.h>

void Fun(int **);

int main(void)
{
	int *pPtr=NULL;
	
	Fun(&pPtr);
	printf("%d 1",*pPtr);  // dangling pointer 10
	
	return 0;
}
void Fun(int **ppPtr)
{
	int iNo=10;
	*ppPtr=&iNo;
	
	printf("%d 2\n",ppPtr);  //6487576
	printf("%d 3\n",*ppPtr); //6487516
	printf("%d 4\n",**ppPtr); //10
	
}
