#include<stdio.h>
#include<string.h>

int main(void)
{
   char chSrc[20];
   char chDist[20];
   
   printf("Enter Source String:\t");
   gets (chSrc);
   
   printf("\nSource String is:\t");
   puts (chSrc);
   
   strcpy (chDist, chSrc);
   
   printf("\nDestination String is:\t");
   puts (chDist);

   return 0;

}
/*
Enter Source String:    This is string

Source String is:       This is string

Destination String is:  This is string
*/
