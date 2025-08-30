#include<stdio.h>

int main(void)
{
	int iNo=5;
	if(iNo<10)
	{
		printf("one\n");         //one 
	}
	else
		printf("two\n");
	   
	   
	iNo=15;
	if(iNo<10)
		printf("one\n");
	else
	  	printf("two\n");         //two
	
	 iNo=5;
	if(iNo<10)
	{
		printf("one\n");         //one
		printf("two\n");         //two  
	}
	else
	{
		printf("three\n");
	}
	  
	iNo=15;
	if(iNo<10)
	{ 
	  printf("one\n");
	} 
	else 
	{
		printf("two\n");        //two
	}
	
/*	
	iNo=15;
	if(iNo<10);
	{
		printf("one");
		printf("two");
	}
	else                         illegal else without matching if
	{
		printf("three");
	}
*/	
	
	
	return  0;
}
