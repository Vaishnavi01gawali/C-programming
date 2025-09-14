#include<stdio.h>

int g_iNo1;              
int g_iNo2=10;           
extern int g_iNo3;        
extern int g_iNo4 =20;   // Warning: 'g_iNo4' initialized and declared 'extern'

int main(void)
{	


	int iNo1;                
	int iNo2=30;             
	extern int iNo3;        
//	extern int iNo4=40;      Error: 'iNo4' : cannot initialize extern variables with block scope
	
	printf("%d\n",g_iNo1);  //0
	printf("%d\n",g_iNo2);  //10
//	printf("%d\n",g_iNo3);  //error: undefined reference to `g_iNo3'
	printf("%d\n",g_iNo4);  //20
	
	printf("\n%d\n",iNo1);  //1
	printf("%d\n",iNo2);    //30
//	printf("%d\n",iNo3);   error: undefined reference to `iNo3'
//	printf("%d\n",iNo4);   //Error'iNo4' undeclared (first use in this function)
	
	return 0;
	
}
