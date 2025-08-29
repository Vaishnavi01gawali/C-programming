#include<stdio.h>

int main(void)
{
	printf("28 bitwise AND 15 = %d\n",28&15);       // 28 bitwise AND 15 = 12
	printf("28 bitwise OR 15 = %d\n",28|15);        // 28 bitwise OR 15 = 31
	printf("28 bitwise XOR 15 = %d\n",28^15);       // 28 bitwise XOR 15 = 19
	printf(" bitwise NOT 28 = %d\n",~28);           // bitwise NOT 28 = -29
	
	printf("\n4 left shift 1 = %d\n",4<<1);         // 4 left shift 1 = 8
	printf("4 right shift 1 = %d\n",4>>1);          // 4 right shift 1 = 2
	 
	printf("\n20 left shift 2 = %d\n",20<<2);      // 20 left shift 2 = 80
	printf("20 right shift 2 = %d\n",20>>2);       // 20 right shift 2 = 5
	
	return 0;
}
