#include<stdio.h>

int main(void)
{
	char chChar1;
	char chChar2;
	
	printf("Enter Character 1:\t");    
	scanf("%c",&chChar1);
	printf("Enter Character 2:\t");
	scanf("%c",&chChar2);
	
	printf("\nCharacter 1 is %c\n",chChar1);
	printf("Character 2 is %c\n",chChar2);
	
	return 0;
}

/*
Enter Character 1:      A
Enter Character 2:
Character 1 is A
Character 2 is
*/
