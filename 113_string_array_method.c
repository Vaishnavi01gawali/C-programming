#include<stdio.h>

int main(void)
{
	char szStr[]="Bye";

	printf("size of string is :%d\n",sizeof(szStr));  // size of string is :4
	printf("Lenght of is : %d\n",strlen(szStr));      // Lenght of is : 3
	printf("%c\n",szStr[2]= 'z');     
//	printf("%s\n",szStr= "Hello");'=' : left operand must be l-value
	
	return 0;
}
