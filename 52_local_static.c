#include<stdio.h>
void Fun1(void);
void Fun2(void);

int main(void)
{
	int iCounter;
	
	for(iCounter=0;iCounter<3;iCounter++)
	Fun1();
	
	for(iCounter=0;iCounter<3;iCounter++)
	Fun2();
	
	return 0;	
}

void Fun1(void)
{
	int iNo=10;                           // In fun1,11
	++iNo;                                // In fun1,11
	printf("In fun1,%d\n",iNo);           // In fun1,11
}
void Fun2(void)
{
	static int iNo=10;                   // In fun2,11
	++iNo;                               // In fun2,12
	printf("In fun2,%d\n",iNo);          // In fun2,13
}
