#include<stdio.h>

int main(void)
{
	char chChar1='\'';
	char chChar2='"';
	char chChar3='\"';
	char chChar4='?';
	
	printf("chChar1=%c\n",chChar1);                                           // chChar1='
	printf("chChar2=%c\n",chChar2);                                           // chChar2="
	printf("chChar3=%c\n",chChar3);                                           // chChar3="
	printf("chChar4=%c\n",chChar4);                                           // chChar4=?
	
	printf("Hello\n");                                                        // Hello
	printf("Print Hello in double inverted commas =\"Hello\"\n");             // Print Hello in double inverted commas ="Hello"
	printf("Hello?\n");                                                       // Hello?
	printf("Hello\?\n");                                                      // Hello?
	printf("\temp\bin\new\n");                                                // emin
	                                                                          // ew
	
	printf("\n\\temp\\bin\\new\n");                                          // \temp\bin\new
	
	printf("\n Hello\a world\n");                                            // Hello world 
	printf("Hello\bworld\n");                                               // Hell world
	printf("Hello\rworld\n");                                               // world
	printf("Hello\tworld\n");                                               // Hello   world
	printf("Hello\vworld\n");                                              // Hello ? world
	printf("Hello\fworld\n");                                              // Hello ? world
	printf("Hello\0\n");                                                     // Hello
	return 0;
	
}
