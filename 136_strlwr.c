#include<stdio.h>
#include<string.h>

int main(void)
{
   char chStr[20];

   printf("Enter The String:\t");       //Enter The String:       GAURI
   gets (chStr);

   strlwr(chStr);

   printf("\nString In Lower Case is:\t");  //String In Lower Case Is:        gauri
   puts(chStr);

   return 0;

}
