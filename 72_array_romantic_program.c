#include<stdio.h>

int main(void)
{
	int arr[]={10,20,30,40,50};
	
	printf("%d\n",&arr);        // 6487552
	
	printf("%d\n",arr);         // 6487552
	
	printf("%d\n",&arr+1);      // 6487572
	
	printf("%d\n",arr+1);       // 6487556
	
	printf("%d\n",arr[2]);      // 30
	
	printf("%d\n" ,&arr[2]);    // 6487560
	
	printf("%d\n",&arr[2]+1);   // 6487564
	
	printf("%d\n",arr[2]+1);    // 31
	
	printf("%d\n",&arr[1]);     // 6487556
	
	printf("%d\n",&arr[1]+2);   // 6487564
	
//printf("%d",++ arr);
	  
//printf("%d",arr ++);
	
	return 0;
}
