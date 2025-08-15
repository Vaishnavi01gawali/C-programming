#include<stdio.h>

int main(void)
{
	char chChar1='A';
	char chChar[11]="Hello world";
	int iNo=10;
	
	printf("\nSigned integer 65 in decimal number=%d\n",65);                                 //Signed integer 65 in decimal number=65
	printf("Signed integer -65 in decimal number =%d\n",-65);                                //Signed integer -65 in decimal number =-65
	printf("Unsigned integer -65 in decimal number=%u\n",-65);                               //Unsigned integer -65 in decimal number=4294967231
	
	printf("\nUnsigned integer -65 in Octal number=%o\n",65);                                //Unsigned integer -65 in Octal number=101
	printf("Unsigned integer 65 in Hexadecimal number small letter = %x\n",65);              //Unsigned integer 65 in Hexadecimal number small letter = 41
	printf("Unsigned integer 65 in Hexadecimal number capital letter=%X\n",65);              //Unsigned integer 65 in Hexadecimal number capital letter=41
	
	printf("\nUnsigned integer 175 in Octal number=%o\n",175);                               //Unsigned integer 175 in Octal number=257
	printf("Unsigned integer 175 in Hexadecimal number small letter=%x\n",175);              //Unsigned integer 175 in Hexadecimal number small letter=af
	printf("Unsigned integer 175 in Hexadecimal number capital letter=%X\n",175);            //Unsigned integer 175 in Hexadecimal number capital letter=AF
	
	printf("\ncharacter %c\n",chChar1);                                                      //character A
	printf("signed integer %i\n",40);                                                        //signed integer 40
	
	printf("\nSigned integer 101 in decimal number=%d\n",101);                                //Signed integer 101 in decimal number=101
	printf("101 Octal to decimal number=%d\n",0101);                                          //101 Octal to decimal number=65
	printf("Signed integer 41 in decimal number=%d\n",41);                                    //Signed integer 41 in decimal number=41
	printf("41 Hexadecimal to decimal number=%d\n",0x41);                                     //41 Hexadecimal to decimal number=65
	
	printf("\n51 signed long =%ld\n",51);                                                     //51 signed long =51 
	printf("51 signed short=%hd\n",-51);                                                      //51 signed short=51
	
	printf("\n51 unsiged long=%lu\n",51);                                                     //51 unsiged long=51
	printf("51 unsigned short=%hu\n",51);                                                     //51 unsigned short=51
	
	printf("\n99.45signed single precision float = %f\n",99.45);                              //99.45signed single precision float = 99.450000
	
	printf("\nSigned single precision float 75.65 in exponent form small e= %e\n",75.65);     //Signed single precision float 75.65 in exponent form small e= 7.565000e+001
	printf("Signed single precision float 81.91 in exponent form capital E= %e\n",81.91);     //Signed single precision float 81.91 in exponent form capital E= 8.191000e+001
	
	printf("\n 87.99 signed value in either e or f form =%g\n",87.99);                        // 87.99 signed value in either e or f form =87.99
	printf("93.80 signed value in either E or f form =%g\n",93.80);                           //93.80 signed value in either E or f form =93.8
	
	printf("\n 78.45 signed double precision floating point=%if\n",78.45);                   //78.45 signed double precision floating point=-858993459f
	printf("%s\n",chChar);                                                                   //Hello world
	printf("Address of %d =%p\n",iNo,iNo);                                                   //Address of 10 =0000000A
	
}
