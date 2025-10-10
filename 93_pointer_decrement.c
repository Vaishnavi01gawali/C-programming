#include<stdio.h>

int main(void)
{
	double arr[5]={10.2,20.2,30.2,40.2,50.2};
	double *pPtr=&arr[4];
	
	printf("%d\n",pPtr);      // 16185320
	printf("%lf\n",*pPtr);    // 50.200000
	
	--pPtr;	
	
	printf("%d\n",pPtr);      // 16185312
	printf("%lf\n",*pPtr);    // 40.200000
	
	return 0;
}
