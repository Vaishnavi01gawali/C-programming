#include<stdio.h>

int main(void)
{
	printf("\nSize Of Integer:-");
	printf("\n \t \t sizeof(int)= %d\n",sizeof(int));                         // sizeof(int)= 4
	printf("\t \t sizeof( short int)= %d\n",sizeof(short int));               // sizeof( short int)= 2
	printf("\t \t sizeof(long int)= %d\n",sizeof(long int));                  // sizeof(long int)= 4
	printf("\t \t sizeof(long long int)= %d\n",sizeof(long long int));        // sizeof(long long int)= 8
	
	printf("\nSize Of Character:-");
	printf("\n \t \t sizeof(char)= %d\n",sizeof(char));                       // sizeof(char)= 1
//	printf("sizeof(short char)= %d\n",sizeof(short char));   	              // Error: 'short' followed by 'char' is illegal
//	printf("sizeof(long char)= %d\n",sizeof(long char));             	      // Error: 'long' followed by 'char' is illegal
//	printf("sizeof(long long char)= %d\n",sizeof(long char));        	      // Error: 'long' followed by 'char' is illegal
	
	printf("\nSize Of Float:-");
	printf("\n \t \t sizeof(float)= %d\n",sizeof(float));                     // sizeof(float)= 4
//	printf("sizeof(short float)= %d\n",sizeof(short float));         	      // Error: 'short' followed by 'float' is illegal
//	printf("sizeof(long float)= %d\n",sizeof(long float));           	      // Error:  nonstandard extension used : long float
//	printf("sizeof(long long float)= %d\n",sizeof(long long float));	      // Error: _int64' followed by 'float' is illegal
	
	printf("\n Size of Double:-");
	printf("\n \t \t sizeof(double)= %d\n",sizeof(double));                   // sizeof(double)= 8
//	printf("sizeof(short double)= %d\n",sizeof(short double));      	      // Error: 'short' followed by 'double' is illegal
	printf("\t \t  sizeof(long double)= %d\n",sizeof(long double));           // sizeof(long double)= 8
//	printf("sizeof(long long double)= %d\n",sizeof(long long double));        // Error: '__int64' followed by 'double' is illegal
	
	return 0; 
}
