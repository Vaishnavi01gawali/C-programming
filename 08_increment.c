#include<stdio.h>

int main(void)
{
	int iNo=10;
	int iAns1;
	int iAns2;
	
	printf("%d\n",iNo);               //10
	
	iAns1=++iNo;
	printf("\n%d\n",iNo);             //11
	printf("%d\n",iAns1);             //11
	
	iAns2=iNo++;
	printf("\n%d\n",iNo);             //12
	printf("%d\n",iAns2);             //11
	
	iNo++;
	printf("\n%d\n",iNo);             //13
	
	++iNo;
	printf("\n%d\n",iNo);             //14
	
	printf("\n%d\n",iNo++);           //14
	printf("%d\n",iNo);               //15
	
	printf("\n%d\n",++iNo);           //16
	printf("%d",iNo);                 //16
	
	printf("\n%d\n",+ +iNo);          //16
	printf("%d\n",iNo);               //16
	
//	printf("\n%d\n",++10);            //Error: '++' needs l-value
//	printf("%d\n",10++);              //Error: '++' needs l-value
	
	printf("\n%d\n",iNo+1);           //17
	printf("%d\n",iNo);               //16
	
	return 0;
		
}
