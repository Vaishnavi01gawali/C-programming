#include<stdio.h>

int AddSub(int ,int ,int *);
int main(void)
{
	int iNo1;
	int iNo2;
	int iSum;
	int iDiff;
	
	printf("Enter two number:\t");        // Enter two number:       20 10 
	scanf("%d %d",&iNo1,&iNo2);
	
	iSum=AddSub(iNo1,iNo2,&iDiff);
	
	printf("Addition is %d\n",iSum);     //  Addition is 30
	printf("Subtraction is %d\n",iDiff); //  Subtraction is 10
	
	return 0;
}

int AddSub(int iNo1,int iNo2,int *piDiff)
{
	*piDiff = iNo1-iNo2;
	return iNo1 + iNo2;
}

