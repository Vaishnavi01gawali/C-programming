#include<stdio.h>

int main(void)
{
	int iNo=10;
	int *pPtr=&iNo;
	
	printf("%d\n",iNo);     // 10
	printf("%d\n",*pPtr);   // 10
	
	++iNo;
	printf("%d\n",iNo);    // 11
	
	++(*pPtr);
	printf("%d\n",*pPtr);  // 12
	
	pPtr++;
	printf("%d\n",pPtr);   // 6487576
	
	return 0;
}
