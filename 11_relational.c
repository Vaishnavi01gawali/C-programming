#include<stdio.h>

int main(void)
{
	printf("10 is less than 20 = %d\n",10<20);                                   // 10 is less than 20 = 1
	printf("20 is less than 10 =%d\n",20<10);                                    // 20 is less than 10 =0
	printf("20 less than or equal to 10 =%d\n",20<=10);                          // 20 less than or equal to 10 =0
	printf("10 is less than or equal to 10 =%d\n",10<=10);                       // 10 is less than or equal to 10 =1
	printf("20 is greater than 10 =%d\n",20>10);                                 // 20 is greater than 10 =1
	printf("10 is greater than or equal to =%d\n",10>=20);                       // 10 is greater than or equal to =0
	printf("10 is equal to 10 =%d\n",10==20);                                    // 10 is equal to 10 =0
	printf("10 is no equal to 10= %d\n",10!=10);                                 // 10 is no equal to 10= 0
	printf("10 is not equal to 20= %d\n",10!=20);                                // 10 is not equal to 20= 1
	
	printf("\n10 is less than 10 is not equal to 1= %d\n",10<=10!=1);            // 10 is less than 10 is not equal to 1= 0
	
	printf("\n20 is less than 10 is not equal to 0= %d\n",20<10!=0);             // 20 is less than 10 is not equal to 0= 0
	
	printf("\n20 is greater than 10 is not equal to 0= %d\n",20>10!=0);          // 20 is greater than 10 is not equal to 0= 1
	
	return 0;
}
