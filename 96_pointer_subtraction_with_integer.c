#include<stdio.h>

int main(void)
{
	char arr[5]={'A','B','C','D','E'};
    char *pPtr=&arr[4];
	
	printf("%d\n",pPtr);     //6158568
	printf("%c\n",*pPtr);    //E
//	printf("%d\n",3-pPtr);     Error:'-' : pointer can only be subtracted from another pointer
	printf("%d\n",pPtr-3);   //6158565
	printf("%d\n",*(pPtr-3)); //66
//	printf("%d\n",*(3-pPtr)); Error '-' : pointer can only be subtracted from another pointer
	printf("%d\n",pPtr);    //6158568
	printf("%c\n",*pPtr);   //E
	
	return 0;
} 


