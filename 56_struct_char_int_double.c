#include<stdio.h>

struct demo
{
	char chChar;
	int iNo;
	double dNo;
};
int main(void)
{
	struct demo obj;
	printf("%c\t%d\t%if\n",obj.chChar,obj.iNo,obj.dNo);  // w       2386571 2375651f
	
	obj.chChar='A';
	printf("%c\t%d\t%if\n",obj.chChar,obj.iNo,obj.dNo);  // A       2386571 2375651f
	
	obj.iNo=10;
	printf("%c\t%d\t%if\n",obj.chChar,obj.iNo,obj.dNo);  // A       10      2375651f
	
	obj.dNo=99.99;
	printf("%c\t%d\t%if\n",obj.chChar,obj.iNo,obj.dNo);  // A       10      687194767f
	
	return 0;
}
