#include<stdio.h>
#include<string.h>

int main(void)
{
	int iNo;
    char chStr1 [20]; 
	char chStr2[40];

    printf("Enter Destination String:\t");  //Enter Destination String:       gauri
    gets (chStr1);

    printf("\nEnter Source String:\t");    // Enter Source String:    gawali
    gets (chStr2);

    printf("\nEnter Value of n:\t");       // Enter Value of n:       1
    scanf("%d",&iNo);

    strncat (chStr1, chStr2,iNo);

    printf("\nConcatenated String Is:\t");  // Concatenated String Is: gaurig
    puts (chStr1);

   return 0;

}
