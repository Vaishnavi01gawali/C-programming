#include<stdio.h>

int main(void)
{
	int arr[5]={10,20,30,40,50};
	int *pPtr=&arr[0];
	
	printf("%d\n",&pPtr);       // 6487544
	printf("%d\n",pPtr);        // 6487552
	printf("%d\n",*pPtr);       // 10
	
	++pPtr;
	
	printf("%d\n",&pPtr);       // 6487544
	printf("%d\n",pPtr);        // 6487556
	printf("%d\n",*pPtr);       // 20
	
	return 0;
}
