#include<stdio.h>

void AddSub(int ,int ,int *,int *);
int main(void)
{
	int iNo1;
	int iNo2;
	int iSum;
	int iDiff;
	
	printf("Enter two number:\t");         // Enter two number:       30 50
	scanf("%d %d",&iNo1,&iNo2);
	
	AddSub(iNo1,iNo2,&iSum,&iDiff);
	
	printf("Addition is %d\n",iSum);       // Addition is 80
	printf("Subtraction is %d\n",iDiff);   // Subtraction is -20
	
	return 0;
}

void AddSub(int iNo1,int iNo2,int *piSum,int *piDiff)
{
	*piSum = iNo1+iNo2;
	*piDiff = iNo1-iNo2;
}

