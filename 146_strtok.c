#include<stdio.h>

int main(void)
{
	char szStr[]="Hello,Good,Afternoon ; How ;are you ?";
	char *pszStr=NULL;
	
	pszStr=strtok(szStr,", ;");
	while(pszStr!= NULL)
	{
		puts(pszStr);
		pszStr=strtok(NULL,",;");
	}
	return 0;
}
/*
Hello
Good
Afternoon
 How
are you ?
*/
