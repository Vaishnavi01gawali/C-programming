#include<stdio.h>
int Fact_version1(int);
int Fact_version2(int);

int main(void)
{
	int iNo;
	int iAns;
	
	printf("Enter number:\t");            // Enter number:   4
	scanf("%d",&iNo);
	
	iAns=Fact_version1(iNo);
	printf("1 Factorial is %d\n",iAns);  //1 Factorial is 24
	
	iAns=Fact_version2(iNo);
	printf("2 Factorial is %d\n",iAns);  //2 Factorial is 24
	
	return 0;
}

int Fact_version1(int iNo)
{
    int iAns;
    int iCounter;
    
    iAns=iNo;
    for(iCounter=iNo-1;iCounter>1;iCounter--)
    iAns=iAns*iCounter;
    
    return iAns;
}

int Fact_version2(int iNo)
{
    int iAns;
    int iCounter;
    
    iAns=1;
    for(iCounter=2;iCounter<=iNo;iCounter++)
    iAns=iAns*iCounter;
    
    return iAns;
}
