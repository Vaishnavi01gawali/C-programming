#include<stdio.h>
void Addition(void);
int main(void)
{
	Addition();
	
	return 0;
}
void Addition(void)
{
	int iNo1;
	int iNo2;
	int iAns;
	
	printf("Enter two numbers :-");   // Enter two numbers :-7 5
	scanf("%d%d",&iNo1,&iNo2);
	
	iAns=iNo1+iNo2;
	printf(" Addition is %d",iAns);   // Addition is 12
}
