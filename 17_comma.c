#include<stdio.h>

int Fun(void);

int main()
{
	int iAns1,iAns2, iAns3;
	
	iAns1=10,20,30;
	iAns2=(10,20,30);
	
	printf("iAns1 =%d ,iAns2= %d\n",iAns1,iAns2);       // iAns1 =10 ,iAns2= 30
	
	iAns3=Fun();
	printf("fun returned %d\n",iAns3);                  // fun returned 0
	
	return 0;
}

int Fun(void)
{
	return 1,-1,0;
}
