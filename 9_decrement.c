#include<stdio.h>

int main(void)
{
	int iNo=10;
	int iAns1;
	int iAns2;
	
	printf("%d\n",iNo);               //10
	
	iAns1=iNo--;
	printf("\n%d\n",iNo);             //9
	printf("%d\n",iAns1);             //10
	
	iAns2=--iNo;
	printf("\n%d\n",iNo);             //8
	printf("%d\n",iAns2);             //8
	
	printf("\n%d\n",- -iNo);          //8
	printf("%d\n",iNo);               //8
	            
	iNo--;
	printf("\n%d\n",iNo);             //7
	
	--iNo;
	printf("\n%d\n",iNo);             //6
	  
	printf("\n%d\n",--iNo);           //5
	printf("%d",iNo);                 //5
	
	printf("\n%d\n",iNo--);           //5
	printf("%d\n",iNo);               //4
	
//	printf("\n%d\n",--10);           // Error: '--' needs l-value    
//	printf("\n%d\n",10--);           // Error: '--' needs l-value 
	
	printf("\n%d\n",iNo-1);           //3
	printf("%d\n",iNo);               //4
	
	return 0;
	
	
	
	
	
	
}
