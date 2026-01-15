#include<stdio.h>
#include<string.h>

int main(void)
{
	int iNo;
    int iAns;
    char chStr1 [20];
	char chStr2 [20]; 

    printf("Enter String1:\t");                        // Enter String1:  vaishnavi
    gets (chStr1);

    printf("\nEnter String2:\t");                      //Enter String2:  gauri
    gets (chStr2);

    printf("\n\nEnter iNo:\t");                         // Enter n:        4
    scanf("%d",&iNo);

    iAns=strncmp(chStr1,chStr2,iNo);

    if (iAns==0)
       printf("\nBoth Strings Are Same\n");
    else
       printf("\nBoth Strings Are Diffrent\n");      // Both Strings Are Diffrent

    return 0;

}

