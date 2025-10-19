#include<stdio.h>

int main(void)
{
	int arr[3][4]={10,20,30,40,50};
	
	printf("%d\n",&arr);            //6487520
	printf("%d\n",arr);             //6487520
	
	printf("%d\n",arr[0]);         //6487520
	printf("%d\n",arr[1]);         //6487536
	printf("%d\n",arr[2]);         //6487552
	
	printf("%d\n",arr[0][0]);      //10
	printf("%d\n",arr[1][0]);      //50
	printf("%d\n",arr[2][0]);      //0
	
	printf("%d\n",&arr[0]);       //6487520
	printf("%d\n",&arr[1]);       //6487536
	printf("%d\n",&arr[2]);       //6487552
	
	printf("%d\n",&arr[0][0]);    //6487520
	printf("%d\n",&arr[1][0]);    //6487536
	printf("%d\n",&arr[2][0]);    //6487552
	
	printf("%d\n",&arr+1);         //6487568
	printf("%d\n",arr+1);          //6487536
	
	printf("%d\n",arr[0]+1);       //6487524
	printf("%d\n",arr[1]+1);       //6487540
	printf("%d\n",arr[2]+1);       //6487556
	
	printf("%d\n",arr[0][0]+1);    //11
	printf("%d\n",arr[1][0]+1);    //51
	printf("%d\n",arr[2][0]+1);    //1
	
	
	printf("%d\n",&arr[0]+1);      //6487536
	printf("%d\n",&arr[1]+1);      //6487552
	printf("%d\n",&arr[2]+1);      //6487568
	
	printf("%d\n",&arr[0][0]+1);   //6487524
	printf("%d\n",&arr[1][0]+1);   //6487540
	printf("%d\n",&arr[2][0]+1);   //6487556
	
	printf("%d\n",*arr);           //6487520
	printf("%d\n",*arr+1);         //6487524
	printf("%d\n",**arr);          //10
	printf("%d\n",**arr+1);        //11
	printf("%d\n",arr+2);          //6487552
	printf("%d\n",*(arr+2));       //6487552
	printf("%d\n",*(arr+2)+3);     //6487564
	printf("%d\n",*(*(arr+2)+3));  //0
	
	return 0;	
}
