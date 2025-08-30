#include<stdio.h>

int main(void)
{
	int iNo=5;
	if(iNo<10)
	  printf("one\n");         //one
	  printf("two\n");         //two 
	  
	iNo=15;
	if(iNo<10)
	  printf("\n one\n");
	  printf("\ntwo\n");       //two
	  
	iNo=5;
	if(iNo<10)
	{ 
	  printf("\n one\n");      //one
	  printf("two\n");         //two
	}  
	
	iNo=15;
	if(iNo<10)
	{
		printf("\n one\n");    // no output  
		printf("two\n");
	}
	
	iNo=15;
	if(iNo<10);
	{
		printf(" one\n");     //one 
		printf("two");        //two
	}
	
	return  0;
}
