#include<stdio.h>

int main(void)
{
	int iNo=10;
	char chChar='A';
	
	void *pPtr=&iNo;
	
	printf("%d\n",&pPtr);          //6487568
	printf("%d\n",pPtr);           //6487580
//	printf("%d\n",*pPtr); illegal indirection
	printf("%d\n",*(int*)pPtr);    //10
	
	pPtr=&chChar;
	printf("%d\n",&pPtr);         //6487568
	printf("%d\n",pPtr);          //6487579
//	printf("%d\n",*pPtr); illegal indirection
	printf("%c\n",*(char*)pPtr);   //A
	
	return 0;
	
}
