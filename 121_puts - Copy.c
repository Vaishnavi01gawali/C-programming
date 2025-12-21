#include<stdio.h>

int main(void)
{
	char szStr[]="Hello";
	char *pszStr="Good";
	
	puts(szStr);            // Hello
	puts(pszStr);           // Good
	puts("Afternoon");      // Afternoon
	
	return 0;
}
