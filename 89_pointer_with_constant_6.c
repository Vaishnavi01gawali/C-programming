#include<stdio.h>

int main(void)
{
	const int iNo=10;
    int const *const pPtr=&iNo;
	
//	++iNo;               l-value specifies const object
//	++(*pPtr);           l-value specifies const object
//	pPtr++;             l-value specifies const object

	return 0;
}
	
