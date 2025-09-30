#include<stdio.h>

void AddSub(int *, int *);

int main(void)
{
	int iNo1;
	int iNo2;
	
	printf("Enter two number:\t");      // Enter two number:       150 30      
	scanf("%d %d",&iNo1,&iNo2);
	
	AddSub(&iNo1,&iNo2);
	printf("Addition is %d\n",iNo1);    // Addition is 180
	printf("Subtraction is %d\n",iNo2); // Subtraction is 120
	
	return 0;
}

void AddSub(int *piNo1, int *piNo2)
{
	int iTemp=*piNo1;
	
	*piNo1= *piNo1+*piNo2;
	*piNo2= iTemp-*piNo2;
}
