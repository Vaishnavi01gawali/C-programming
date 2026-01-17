#include<stdio.h>
#include<string.h>

int main(void)
{
   char chChar;
   char chStr[20];
   int iNo;

    printf("Enter The String:\t");             //Enter The String:       gauri
    gets (chStr);

    printf("\nEnter The Character To Set:\t");//Enter The Character To Set:     a
    scanf("%c", &chChar);

    printf("\nEnter The Value of iNo:\t");       //Enter The Value of n:   1
    scanf("%d",&iNo);

    strnset (chStr,chChar,iNo);

    printf("\nNow String is:\t");            //Now String Is:  aauri
    puts (chStr);

    return 0;

}
