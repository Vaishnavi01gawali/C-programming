#include<stdio.h>

union outer1
{
	int iNo;
	double dNo;
	
	union inner1
	{
		char chChar;
		float  fNo;
	}iobj1,iobj2;
}oobj1;

union outer2
{
	char chChar;
	int iNo;
	
	union inner2
	{
		char chChar1;
		char chChar2;
	 } iobj[3];
}oobj2;

int main(void)
{
	printf("sizeof outer 1 %d\n",sizeof(oobj1));//sizeof outer 1 8
	printf("sizeof outer 2 %d\n",sizeof(oobj2));//sizeof outer 2 4
	
	return 0;
	
}
