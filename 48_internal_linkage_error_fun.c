#include<stdio.h>
// static int g_iNo=10;    //unresolved external symbol g_iNo referenced in function main

void Fun(void)
{
	printf("In Fun,%d",g_iNo); 
}

//without static int g_iNo program is run and output is 
//In main,10
//In Fun,10



