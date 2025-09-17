#include<stdio.h>

struct outer1
{
	int iNo;
	float fNo;
	
	struct inner1
	{
		int iNo2;
		float fNo2;
	};
}oobj1;

struct outer2
{
	int iNo;
	float fNo;
	
	struct inner2
	{
		int iNo;
		float fNo;
	}iobj;
}oobj2;

struct outer3
{
	char chChar;
	int iNo;
	
	struct inner3
	{
		int iNo;
		float fNo;
	}iobj1,iobj2;
}oobj3;

struct outer4
{
	int iNo;
	double dNo;
	
	struct inner
	{
		int iNo;
		float fNo;
	}iobj[3];
}oobj4;

int main(void)
{
	printf("sizeof outer 1 %d\n",sizeof(oobj1));//sizeof outer 1 16
	printf("sizeof outer 2 %d\n",sizeof(oobj2));//sizeof outer 2 16
	printf("sizeof outer 3 %d\n",sizeof(oobj3));//sizeof outer 3 24
	printf("sizeof outer 4 %d\n",sizeof(oobj4));//sizeof outer 4 40
	
	return 0;
}
