#include<stdio.h>

struct demo
{ 
  char chChar; 
  int iNo; 
  double dNo;

}obj1;

int main(void)
{
	printf("sizeof obj1 %d",sizeof(obj1)); //sizeof obj1 16
	
	return 0;
	
}
