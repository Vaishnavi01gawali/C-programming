#include<stdio.h>

int main(void)
{
	int iNo=10;
	const int *pPtr=&iNo;
	printf("%d\n",iNo);     // 10
	printf("%d\n",*pPtr);   // 10
	
	++iNo;
	printf("%d\n",iNo); 11
	
//	++(*pPtr); l-value specifies const object
//	printf("%d\n",(*pPtr));

	pPtr++;
	printf("%d\n",pPtr);   // 12318868
	
	return 0;
}
