#include<stdio.h>

void Fun(int);
int main(void)
{
	int iNo=10;
	printf("Before Calling,%d\n",iNo);  // Before Calling,10
	
	Fun(iNo);
	
	printf("After Calling,%d\n",iNo);  // After Calling,10
	
	return 0;
}

void Fun(int iNo)
{
	printf("In fun %d\n",iNo);          // In fun 10
	++iNo;
	printf("Leaving fun, %d\n",iNo);    // Leaving fun, 11
}
