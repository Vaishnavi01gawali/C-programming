#include<stdio.h>

int main(void)
{
	char chChar1='A';
	int iNo1=66;
	char chChar2=97;
	int iNo2= 'b';
	char chChar3=33;
	char chChar4='$';
	char chAns;
	
	printf("chChar1 in Character format = %c\n",chChar1);                                 //A
	printf("chChar1 in Interger format = %d\n",chChar1);                                 //65
	
	printf("\nchChar2 in Character format = %c\n",chChar2);                               //a 
	printf("chChar2 in Interger format = %d\n",chChar2);                                 //97
	
	printf("\niNo1 in Character format = %c\n",iNo1);                                     //B            
	printf("iNo1 in Interger format = %d\n",iNo1);                                       //66
	
	printf("\niNo2 in Character format = %c\n",iNo2);                                     //b
	printf("iNo2 in Interger format = %d\n",iNo2);                                       //98
	
	printf("\nchChar3 in Character format = %c\n",chChar3);                               //!
	printf("chChar3 in Interger format = %d\n",chChar3);                                 //33
	
	
	printf("\nchChar4 in Character format = %c\n",chChar4);                               //$
	printf("chChar4 in Interger format = %d\n",chChar4);                                 //36
	
	chAns= chChar3+chChar4;
	printf("\nAddition of %c and %c in Character format = %c\n",chChar3,chChar4,chAns);   //E
	printf("Addition of %d and %d in Integer format = %d\n",chChar3,chChar4,chAns);      //69
	
	return 0;
} 
