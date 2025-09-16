#include<stdio.h>

union demo
{
	char chChar;
	int iNo;
	double dNo;
};
int main(void)
{
	union demo obj;
	printf("%c\t%d\t%lf\n",obj.chChar,obj.iNo,obj.dNo);  // @       5452608 5452608f
	
	obj.chChar='A';
	printf("%c\t%d\t%lf\n",obj.chChar,obj.iNo,obj.dNo);  // A       5452609 5452609f
	
	obj.iNo=10;
	printf("%c\t%d\t%lf\n",obj.chChar,obj.iNo,obj.dNo);  //         10      10f
	
	obj.dNo=99.99;
	printf("%c\t%d\t%lf\n",obj.chChar,obj.iNo,obj.dNo);  // Å       687194767       687194767f
	
	return 0;
}
