#include<stdio.h>

int main(void)
{
	int iNo1=10;

    printf("%d\n",iNo1);    //10
//	printf("%d\n",iNo2);     'iNo2' : undeclared identifier
	
	{
	  int iNo2=20;
	  printf("%d\n",iNo1);  //10
	  printf("%d\n",iNo2); 	//20
	} 
	printf("%d\n",iNo1);    //10
//	printf("%d\n",iNo2);    'iNo2' : undeclared identifier 
	
	return 0;
}
