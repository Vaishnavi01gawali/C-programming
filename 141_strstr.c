#include<stdio.h>
#include<string.h>

int main(void)
{

   char chStr1 [20];
   char chStr2 [20];
   char  *pPtr;

   printf("Enter The String:\t");         //Enter The String:       gauri
   gets(chStr1);

   printf("Enter String To Be Found:\t");//Enter String To Be Found:       u
   gets (chStr2);

   pPtr=strstr(chStr1,chStr2);

   if (pPtr==NULL)
   {
   	  puts("\n\nString Not Found\n");
   }
   else
   {
   	  printf("\n\nString Is Found At %d Location\n", (pPtr-chStr1)+1);   //String Is Found At 3 Location
      printf("\n\nString Found In %s\n",pPtr);                           //String Found In uri
   }

   return 0;
   
}
