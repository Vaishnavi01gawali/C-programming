#include<stdio.h>

int Addition(int,int);

int main(void)
{
	int iNo1;
	int iNo2;
	int iAns;
	
	printf("Enter two number:-");  // Enter two number:-56 40
	scanf("%d%d",&iNo1,&iNo2);
	
	iAns=Addition(iNo1,iNo2);
	printf("Addition is %d",iAns); // Addition is 96
	
	return 0;
}
int Addition(int iNo1,int iNo2)
{
	int iAns;
	iAns=iNo1+iNo2;
	
	return iAns;
}
