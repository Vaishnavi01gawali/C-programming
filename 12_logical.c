#include<stdio.h>

int main(void)
{
	printf("1 logical AND 0 = %d\n",1&&0);          //1 logical AND 0 = 0
	printf("0 logical AND 1 = %d\n",0&&1);          //0 logical AND 1 = 0
	printf("1 logical AND 1 = %d\n",1&&1);          //1 logical AND 1 = 1
	printf("1 logical OR 1 = %d\n",1||1);           //1 logical OR 1 = 1
	printf("1 logical OR 0 = %d\n",1||0);           //1 logical OR 0 = 1
	printf("0 logical OR 0 = %d\n",0||0);           //0 logical OR 0 = 1
	printf(" logical NOT 1 = %d\n",!1);             //logical NOT 1 = 0
	
	printf("\n10 logical AND 20 = %d\n",10&&20);    //logical NOT 1 = 0
	printf("10 logical AND -20 = %d\n",10&&-20);    //10 logical AND -20 = 1
	printf("0 logical AND -20 = %d\n",0&&-20);      //0 logical AND -20 = 0
	printf("-10 logical OR -20 = %d\n",-10||-20);  //-10 logical OR -20 = 1
	printf("-10 logical OR 20 = %d\n",-10||20);    //-10 logical OR 20 = 1
	printf("-10 logical OR 0 = %d\n",-10||0);      //-10 logical OR 0 = 1
	printf(" logical NOT 10 = %d\n",!10);           //logical NOT 10 = 0
	printf(" logical NOT -10 = %d\n",!-10);         //logical NOT -10 = 0
	
	return 0;
}
