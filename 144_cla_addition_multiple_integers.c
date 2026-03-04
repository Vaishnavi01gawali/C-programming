#include<stdio.h>

int main(int argc,char *argv[])
{
	int iAns=0;
	int iCounter; 

	for(iCounter=1; iCounter < argc; iCounter++)
	{
		iAns = iAns + atoi(argv[iCounter]);       // 40 20 30 50
	}  
	 
	 printf("Answer is %d",iAns);                //Answer is 140
	 
	 return 0;
	
}
