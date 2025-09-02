#include<stdio.h>
int main(void)
{
	 int iCounter=0;
	 while(iCounter<3)
	 { 
	    printf("%d\t",iCounter);  //0       1       2
	    iCounter++;
	 }
	 
	 iCounter=3;
	 while(iCounter<3)
	 {
	    printf("%d",iCounter);
	    iCounter++;
	 }
	 return 0;
}
