#include<stdio.h>

int main(void)
{
	char szStr[]="Hello";
	char *pszStr="Good";
	char szTemp[50];
	 
	sprintf(szTemp,"%s%s%s",szStr,pszStr,"Afternoon");   //HelloGoodAfternoon
	
	printf(szTemp);
	
	return 0;
}
