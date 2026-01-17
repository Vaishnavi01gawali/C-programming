#include<stdio.h>
#include<string.h>

int main(void)
{
   char chChar;
   char chStr[20];

   printf("Enter The String:\t");              //Enter The String:       gauri
   gets (chStr);

   printf("\nEnter The Character To Set:\t");  //Enter The Character To Set:     i
   scanf("%c", &chChar);

   strset (chStr,chChar);

   printf("\n\nNow String is:\t");             //Now String Is:  iiiii
   puts(chStr);

   return 0;

}
