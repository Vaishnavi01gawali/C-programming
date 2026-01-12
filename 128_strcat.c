#include<stdio.h>
#include<string.h>

int main(void)
{
   char chStr1[20];
   char chStr2[40];

   printf("Enter Destination String:\t");   // Enter Destination String:       Gauri
   gets (chStr1);
   
   printf("Enter Source String:\t");       // Enter Source String:    Gawali
   gets (chStr2);

   strcat (chStr1, chStr2);

   printf("\nConcatenated String Is:\t");  //Concatenated String Is: GauriGawali
   puts (chStr1);

  return 0;
}
