#include<stdio.h>

int main(void)
{
	const int iNo=10;
	const int *pPtr=&iNo;
	printf("%d\n",iNo);        // 10
	printf("%d\n",*pPtr);      // 10
	
//	++iNo;                        l-value specifies const object
//	printf("%d\n",iNo);
	
//	++(*pPtr);                    l-value specifies const object
//	printf("%d\n",(*pPtr));
	
	pPtr++;
	printf("%d\n",pPtr++);    // 1964260
	
	return 0;
}
