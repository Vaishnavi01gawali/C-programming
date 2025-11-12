#include<stdio.h>

int main(void)
{
	int arr[3][4]={10,20,30,40,50};
	
	printf("%d\n",&arr);            //6487520
	//&(2D naw)=2D address
	
	printf("%d\n",arr);             //6487520
	//2D naw (1D address)
	
	printf("%d\n",arr[0]);         //6487520
	//2D->0th 1D naw(ele addr)
	
	printf("%d\n",arr[1]);         //6487536
	//2D->1th 1D naw(ele addr)
	
	printf("%d\n",arr[2]);         //6487552
	//2D->2nd 1D naw(ele addr)
	
	printf("%d\n",arr[0][0]);      //10
	//2D->oth 1D->oth ele naw(value)
	
	printf("%d\n",arr[1][0]);      //50
	//2D->1th 1D->oth ele naw(value)
	
	printf("%d\n",arr[2][0]);      //0
	//2D->2nd 1D->oth ele naw(value)
	
	printf("%d\n",&arr[0]);       //6487520
	//&(2D->oth 1D naw)=> 1D addr
	
	printf("%d\n",&arr[1]);       //6487536
	//&(2D->1th 1D naw)=> 1D addr
	
	printf("%d\n",&arr[2]);       //6487552
	//&(2D->2nd 1D naw)=> 1D addr
	
	printf("%d\n",&arr[0][0]);    //6487520
	//&(2D->0th 1D->0th ele naw)->ele addr
	
	printf("%d\n",&arr[1][0]);    //6487536
	//&(2D->1th 1D->0th ele naw)->ele addr
	
	printf("%d\n",&arr[2][0]);    //6487552
	//&(2D->2nd 1D->0th ele naw)->ele addr
	
	printf("%d\n",&arr+1);         //6487568
	//2D size ne pudhe
	
	printf("%d\n",arr+1);          //6487536
	//1D size ne pudhe
	
	printf("%d\n",arr[0]+1);       //6487524
	//ele size ne pudhe
	
	printf("%d\n",arr[1]+1);       //6487540
	//ele size ne pudhe
	
	printf("%d\n",arr[2]+1);       //6487556
	//ele size ne pudhe
	
	printf("%d\n",arr[0][0]+1);    //11
	//value+1
	
	printf("%d\n",arr[1][0]+1);    //51
	//value+1
	
	printf("%d\n",arr[2][0]+1);    //1
	//value+1
	
	
	printf("%d\n",&arr[0]+1);      //6487536
	//1D size ne pudhe
	
	printf("%d\n",&arr[1]+1);      //6487552
	//1D size ne pudhe
	
	printf("%d\n",&arr[2]+1);      //6487568
	//1D size ne pudhe
	
	printf("%d\n",&arr[0][0]+1);   //6487524
	//ele size ne pudhe
	
	printf("%d\n",&arr[1][0]+1);   //6487540
	//ele size ne pudhe
	printf("%d\n",&arr[2][0]+1);   //6487556
	//ele size ne pudhe
	
	printf("%d\n",*arr);           //6487520
	//2D->1D naw(ele addr)
	
	printf("%d\n",*arr+1);         //6487524
	//ele size ne pudhe
	
	printf("%d\n",**arr);          //10
	//2D->1D->ele naw(value)
	
	printf("%d\n",**arr+1);        //11
	//value+1
	
	printf("%d\n",arr+2);          //6487552
	//1D size ne pudhe
	
	printf("%d\n",*(arr+2));       //6487552
   //address of ele arr2
   
	printf("%d\n",*(arr+2)+3);     //6487564
	//ele size ne 3da pudhe
	
	printf("%d\n",*(*(arr+2)+3));  //0
	// Value at arr[2][3]
	
	return 0;	
}
