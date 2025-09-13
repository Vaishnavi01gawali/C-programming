#include<stdio.h>

int main(void)
{
	int iNo1;        //Warning:uninitialized local variable 'iNo1' used
	auto int iNo2;  //Warning:uninitialized local variable 'iNo2' used
	
	printf("%d\t%d",iNo1,iNo2);  // 11609912        11612853
	
	return 0;
	
}
