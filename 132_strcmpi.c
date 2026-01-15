#include<stdio.h>
#include<string.h>

int main(void)
{
    char chStr1 [20];
	char chStr2 [20]; 
	int iAns;

    printf("Enter String1:\t");              //Enter String1:  vaishnavi

    gets (chStr1);
    printf("\nEnter String2:\t");            //Enter String2:  vaishnavi

	gets (chStr2);

   iAns = strcmpi (chStr1, chStr2); 

    if (iAns==0)
      printf("\nBoth Strings Are Same\n");   // Both Strings Are Same
    else
      printf("\nBoth Strings Are Diffrent\n");

    return 0;
}


