#include<stdio.h>

void Fun(void);
int no=10;

int main(void)
{
	int no=20;
	
	printf("%d\n",no);     //20
	{
		char no=65;
		printf("%d\n",no); //65
	}
	printf("%d\n",no);     //20
	
	Fun();                
	
	return 0;
}
void Fun(void)
{
	printf("%d\n",no);    //10
}
