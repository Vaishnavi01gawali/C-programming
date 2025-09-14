#include<stdio.h>

void PrintNumberFrom1toN(int);
void PrintNumberFromNto1(int);

int main(void)
{
	int iNo;
	
	printf("Enter a number");
	scanf("%d",&iNo);
	
	PrintNumberFrom1toN(iNo);
	PrintNumberFromNto1(iNo);
	
	return 0;	
}

void PrintNumberFrom1toN(int iNo)
{ 
	if(iNo>0)
	{ 
		printf("%d\n",iNo);
		PrintNumberFrom1toN(iNo-1);
	}
}
/*
   5
   4
   3
   2
   1
*/

void PrintNumberFromNto1(int iNo)
{ 
	if(iNo>0)
	{ 
	    PrintNumberFromNto1(iNo-1);
		printf("%d\n",iNo);	
	}
}
/*
   1
   2
   3
   4
   5 
*/  
 
