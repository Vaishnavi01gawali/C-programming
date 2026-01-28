#include<stdio.h>
#include<string.h>

int main(void)
{
   char chStr[20];

   printf("Enter The String:\t");           //Enter The String:       gauri
   gets (chStr);

   strupr(chStr);
   
   printf("\nString In Upper Case is:\t");  //String In Upper Case Is:        GAURI
   puts (chStr);

   return 0;

}
