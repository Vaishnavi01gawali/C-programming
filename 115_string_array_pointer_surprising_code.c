#include<stdio.h>
void Fun1(char []);
void Fun2(char *);

int main(void)
{
	Fun1("Bye");
	Fun2("Bye");
	
    return 0;
}

void Fun1(char szStr[])
{
	szStr[2]='Z';
	szStr="Hello";
}

void Fun2(char *pszStr)
{
	pszStr[2];
	pszStr="Hello";
}
//crash
