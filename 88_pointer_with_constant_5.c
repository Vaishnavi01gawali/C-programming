#include<stdio.h>

int main(void)
{
	const int iNo=10;
    int *pPtr=&iNo;
	
//	++iNo;           error, iNo is constant      increment of read-only variable'iNo'
	++(*pPtr);       //allowed,pointing to non_constant
	pPtr++;          //allowed , pPtr is non-constant        

	return 0;
}
	
