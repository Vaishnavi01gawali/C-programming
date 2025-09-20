#include<stdio.h>

struct demo
{ 
  char chChar;
  double dNo;
  int iNo;
}obj1;

int main(void)
{
	printf("sizeof obj1 %d",sizeof(obj1));  //sizeof obj1 24
	
	return 0;
	
}
