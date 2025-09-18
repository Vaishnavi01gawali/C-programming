#include<stdio.h>

struct inner
{
	int iNo;
	float fNo;
};

struct outer
{
	int iNo;
	float fNo;
	struct inner iobj;
}oobj;

int main(void)
{
	printf("sizeof outer %d\n",sizeof(oobj)); //sizeof outer 16
	
	return 0;
	
}
