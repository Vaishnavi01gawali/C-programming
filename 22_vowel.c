#include<stdio.h>

int main(void)
{
	char chChar;
	printf("Enter Character :- ");               //Enter Character :- a
	scanf("%c",&chChar);
	
	switch(chChar)
	{
		case 'a':
	    case 'e':
		case 'i':
		case 'o':
		case 'u':
		  printf("It is small letter vowel\n"); //It is small letter vowel
		    break;
		   
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		  printf("It is capital letter vowel\n");
		  break;
		    
		default:
		   printf("It is not vowel\n");	
	}
	return 0;
}
