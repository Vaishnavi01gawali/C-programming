#include<stdio.h>
#include<string.h>
//unresolved external symbol _strncmpi referenced in function _main 
// this string function not supported to my compiler
int main(void) 
{
    int iNo;
	int iAns;
    char chStr1 [20]; 
	char chStr2 [20];

    printf("Enter String1:\t");
    gets(chStr1);

    printf("\nEnter String2:\t");
    gets (chStr2);

    printf("\nEnter n:\t");
    scanf("%d",&iNo);

    iAns=strncmpi(chStr1,chStr2,iNo);

    if(iAns==0)
       printf("Both Strings Are Same\n");
    else 
	   printf("\n\nBoth Strings Are Diffrent\n");

    return 0;
 
}
