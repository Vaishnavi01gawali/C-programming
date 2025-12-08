#include<stdio.h>

int main(void)
{
	char *pszStr="Bye";
	
	printf("Size of string is :%d\n",sizeof(pszStr));    // Size of string is :8
	printf("Length of string is :%d\n",strlen(pszStr));  // Length of string is :3
	printf("%c\n",pszStr[2]='Z');                        //crash
	printf("New string is :%s\n",pszStr="Hello");        //New string is :Hello
    
    return 0;
}
