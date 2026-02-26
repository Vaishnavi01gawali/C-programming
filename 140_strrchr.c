#include<stdio.h>
#include<string.h>

int main(void)
{
  char chChar;
  char chStr[20];
  char *pPtr;

  printf("Enter The String:\t");  // Enter The String:       gauri
  gets (chStr);

  printf("\nEnter Character To Be Found:\t"); // Enter Character To Be Found:    b
  scanf("%c", &chChar);

  pPtr=strrchr(chStr,chChar);

  if (pPtr==NULL)
     printf("Character Is Not Found\n");                            // Character Is Not Found
  else
     printf("\nCharacter Is Found At %d Location",(pPtr-chStr)+1);   

  return 0;

}
