#include<stdio.h>
 
void Fun(int *) ;
int main(void)
{
	int iNo=10;
	printf("Before calling %d\n",iNo); //Before calling 10
	Fun(&iNo);
	printf("After calling %d\n",iNo);  //After calling 11
	
	return 0;
}

void Fun(int *pPtr)
{
	printf("IN Fun ,%d\n",*pPtr);     //IN Fun ,10
	++*pPtr;
	printf("Leaving Fun,%d\n",*pPtr); //Leaving Fun,11
}
