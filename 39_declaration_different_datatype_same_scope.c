#include<stdio.h>

int main(void)
{
	extern int no;
	extern float no;       //warning:benign redefinition of type
	
	printf("%d",no);      //10
	
	return 0;	
}
int no=10;
