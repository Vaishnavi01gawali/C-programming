#include<stdio.h>

int main(void)
{
	float arr[5]={10.11f,20.11f,30.11f,40.11f,50.11f};
	float *pPtr=&arr[0];
	
	printf("%d\n",pPtr);       // 6487552
	printf("%f\n",*pPtr);      // 10.110000
	printf("%d\n",3+pPtr);     // 6487564
	printf("%d\n",pPtr+3);     // 6487564
	printf("%d\n",*(pPtr+3)); // -2147483648
	printf("%d\n",*(3+pPtr)); // -2147483648
	printf("%d\n",pPtr);       // 6487552
	printf("%f\n",*pPtr);      // 10.110000
	
	return 0;
} 

