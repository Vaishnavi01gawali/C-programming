#include<stdio.h>

struct demo
{
	int iNo1;
	int iNo2;
	int iNo3;
};
int main(void)
{
	struct demo obj;
	printf("%d\t%d\t%d\n",obj.iNo1,obj.iNo2,obj.iNo3);    // 8598587 9960940 8595646
	
	obj.iNo1=10;
	printf("%d\t%d\t%d\n",obj.iNo1,obj.iNo2,obj.iNo3);    // 10      9960940 8595646
	
	obj.iNo2=20;
	printf("%d\t%d\t%d\n",obj.iNo1,obj.iNo2,obj.iNo3);   //  10      20      8595646
	
	obj.iNo3=30;
	printf("%d\t%d\t%d\n",obj.iNo1,obj.iNo2,obj.iNo3);    // 10      20      30
	
	return 0;
}
