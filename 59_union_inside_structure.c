#include<stdio.h>

struct outer1
{
	int iNo;
	float fNo;
	
	union inner1
	{
		int iNo;
		float fNo;
	}iobj1,iobj2,iobj3;
}oobj1;

struct outer2
{
	int iNo;
	float fNo;
	
	union inner2
	{
		int iNo;
		float fNo;
	}iobj[3];
	double dNo;
}oobj2;

int main(void)
{
	printf("sizeof outer 1 %d\n",sizeof(oobj1));//sizeof outer 1 20
	printf("sizeof outer 2 %d\n",sizeof(oobj2));//sizeof outer 2 32
	
	return 0;
	
}
