#include<stdio.h>
extern int no;

int main(void)
{
	extern int no;
	
	printf("%d",no);  //10
	
	return 0;	
}
int no=10;
