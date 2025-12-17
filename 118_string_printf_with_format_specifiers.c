#include<stdio.h>

int main(void)
{
	char szStr[]="Hello";
	char *pszStr="Good";
	
	printf("%s",szStr);
	printf("%s",pszStr);
	printf("%s\n","Afternoon");                    //HelloGoodAfternoon
	
	//OR
	printf("%s%s%s",szStr,pszStr,"Afternoon");    //HelloGoodAfternoon
	
	return 0;
}
