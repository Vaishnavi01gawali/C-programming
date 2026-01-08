#include<stdio.h>
#include<string.h>

int main(void)
{
   char *pPtr = "Hello";

   char chStr[]="Good";

   printf("The Length Of Hello is %d\n", strlen(pPtr));          //The Length Of Hello is 5

   printf("The Length of Good is %d\n", strlen(chStr));          //The Length of Good is 4

   printf("The Length of Morning is %d\n", strlen("Morning"));   //The Length of Morning is 7

   return 0;
   
}
