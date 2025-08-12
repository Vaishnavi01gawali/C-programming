#include<stdio.h>                                                         
#include"calculation.h"                                                             

int main(void)
{
	int ans;
	int no1;
	int no2;
	
	printf("Enter two numbers :-\t");
	scanf("%d%d",&no1,&no2);                                        //Enter two numbers :-    23 45
	
	printf("\n Numbers are %d and %d\n",no1,no2);                    //Number are 23 and 45
	printf("Address are %d and %d\n",&no1,&no2);                    //Address are 6487576 and 6487572
	
	ans=addition(no1,no2);                                       
	printf("\n Addition is %d\n",ans);                              //Addition is 68
	
	ans=subtraction();                                              //Enter two number :-    32 14
	printf("\n subtraction is %d\n",ans);                           //subtraction is 18
	
	multiplication(no1,no2);                                        //multiplication is 1035
	
	                                                                //Enter numerator:-      10
                                                                    //Enter denominator:-     4
	division();                                                     //quotient is 2
	
	printf("Enter numerator and denominator:- \t");
	scanf("%d %d",&no1,&no2);                                      //Enter numerator and denominator:-       7 14
	ans=moduls(no1,no2);
	printf("\nRemainder is %d\n",ans);                                //Remainder is 7  
	
	return 0;
	
}
int addition(int no1,int no2)
{
	int ans;
	ans=no1+no2;
	return ans;
}

int subtraction(void)
{
	int no1;
	int no2;
	printf("\n Enter two number :-\t");
	scanf("%d%d",&no1,&no2);
	return no1-no2;
}
void multiplication (int no1,int no2)
{
	int ans;
	ans=no1*no2;
	printf("\n multiplication is %d\n",ans);
}
void division(void)
{
	int numerator;
	int denominator;
	printf("\n Enter numerator:-\t");
	scanf("%d",&numerator);
	printf("enter denominator:-\t");
	scanf("%d",&denominator);
	printf("quotient is %d \n",numerator/denominator);
}
int moduls(int num,int den)
{
	return num%den;
}
