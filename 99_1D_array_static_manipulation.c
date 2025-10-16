#include<stdio.h>

int main(void)
{
	int arr[]={10,20,30,40,50};
	
	printf("%d\n",&arr);        //6487552
	printf("%d\n",arr);         //6487552
	printf("%d\n",*arr);        //10
	printf("%d\n",*arr+1);      //11
	printf("%d\n",arr+1);       //6487556
	printf("%d\n",&arr+1);      //6487572
	printf("%d\n",arr[2]);      //30
	printf("%d\n",arr[2]+1);    //31
	
	printf("%d\n",*arr+2);      //12
	printf("%d\n",*(arr+2));    //30
	printf("%d\n",*arr+2+1);    //13
	printf("%d\n",*(arr+2)+1);  //31
	printf("%d\n",&arr[2]);     //6487560
	printf("%d\n",&arr[2]+1);   //6487564
	
	return  0;
	
}
