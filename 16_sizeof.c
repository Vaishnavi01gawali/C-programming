#include<stdio.h>

int main(void)
{
	char chChar='A';
	int iNo=10;
	float fNo=57.33f;
	double dNo=69.33;
	
	printf("size of character = %d\n",sizeof(char));            //size of character = 1
	printf("size of integer = %d\n",sizeof(int));               //size of integer = 4
	printf("size of float = %d\n",sizeof(float));               //size of float = 4
	printf("size of double = %d\n",sizeof(double));             //size of double = 8
	
	printf("\nsize of veriable chChar = %d\n",sizeof(chChar));  //size of veriable chChar = 1
	printf("size of veriable iNo = %d\n",sizeof(iNo));          //size of veriable iNo = 4
	printf("size of veriable fNo = %d\n",sizeof(fNo));          //size of veriable iNo = 4
	printf("size of veriable dNo = %d\n",sizeof(dNo));          //size of veriable iNo = 8
	
	printf("\nsize of B = %d\n",sizeof('B'));                   //size of B = 4
	printf("size of 20 = %d\n",sizeof(20));                     //size of 20 = 4
	printf("size of 99.99f = %d\n",sizeof(99.99f));             //size of 99.99f = 4
	printf("size of 99.99 = %d\n",sizeof(99.99));               //size of 99.99 = 8
	
	printf("\nsize of 10 = %d\n",sizeof 10);                    //size of 10 = 4
	printf("size of iNo = %d\n",sizeof iNo);                    //size of iNo = 4
//	printf("size of int = %d\n",sizeof int);                      syntax error : 'type'
	
	printf("\n iNo = %d\n", iNo);                               //iNo = 10
	printf("size of ++iNo = %d\n",sizeof (++iNo));              //size of ++iNo = 4
	printf("size of iNo = %d\n",sizeof iNo);                    //size of iNo = 4
	
	printf("\nsize of void = %d\n",sizeof(void));               //size of void = 0
	
	return 0;
}
