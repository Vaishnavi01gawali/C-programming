#include<stdio.h>

int main(void)
{
   char chStr[20];

   printf("Enter The String:\t"); gets (chStr);     //Enter The String:       gauri

   strrev (chStr);

   printf("\nReverse String is:\t"); puts (chStr);  //Reverse String Is:      iruag

   return 0;

}
