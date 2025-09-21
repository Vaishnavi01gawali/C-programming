#include<stdio.h>

struct demo
{
	char chChar;
	double dNo;
};

#pragma pack(1)
struct demo obj;

int main(void)
{
	printf("sizeof obj %d",sizeof(obj));  // sizeof obj 16
	
	return 0;
}
