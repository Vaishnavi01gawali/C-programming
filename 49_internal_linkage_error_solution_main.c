#include<stdio.h>

void Fun(void); 

static int g_iNo=20;

int main(void)
{
	printf("In main,%d\n",g_iNo); // In main,20
	
	Fun();
	
	return 0;
}

