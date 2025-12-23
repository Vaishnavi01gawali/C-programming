#include<stdio.h>
int main(void)
{
	char chChar1;
	char chChar2;
	
	printf("Enter Character 1:\t");        //Enter Character 1:      a
	scanf("%c",&chChar1);
	
	printf("Enter Character 2:\t");        //Enter Character 2:      b
	fflush(stdin);
	scanf("%c",&chChar2);
	
	printf("Character 1 is %c\n",chChar1);  //Character 1 is a
	printf("Character 2 is %c\n",chChar2);  //Character 2 is b
	
	return 0;
}
