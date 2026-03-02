#include<stdio.h>

int main(int argc,char *argv[])
{
	int iAns;
	
	if(argc != 3) 
	{
		printf("Invalid Argument:$prog_name no1 no2 \n ");
		return -1;
	}
	
	iAns= atoi(argv[1])+ atoi(argv[2]); //143_cla_addition_two_integers.exe 10 20
	printf("Answer is %d",iAns);        //Answer is 30
	
	return 0;
}
