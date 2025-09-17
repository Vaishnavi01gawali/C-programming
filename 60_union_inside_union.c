#include<stdio.h>

union outer1
{
	int iNo;
	float fNo;
	
	union inner1
	{
		int iNo;
		float  fNo;
	}iobj1,iobj2;
}oobj1;

union outer2
{
	char chChar;
	double dNo;
	
	union inner2
	{
		int iNo;
		float fNo;
	 } iobj[3];
}oobj2;

int main(void)
{
	printf("sizeof outer 1 %d\n",sizeof(oobj1));//sizeof outer 1 4
	printf("sizeof outer 2 %d\n",sizeof(oobj2));//sizeof outer 2 16
	
	return 0;
	
}
