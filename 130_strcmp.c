#include<stdio.h>
#include<string.h>

int main(void)
{
    int iAns;
    char chStr1[20];
	char chStr2[20];

    printf("Enter String1:\t");              //Enter String1:  gauri
    gets (chStr1);

    printf("Enter String2:\t");              //Enter String2:  gauri
    gets (chStr2);

    iAns=strcmp(chStr1, chStr2);

    if (iAns==0)
       printf("\nBoth Strings Are Same\n");   //Both Strings Are Same
    else
       printf("\nBoth Strings Are Diffrent\n");

    return 0;

}
