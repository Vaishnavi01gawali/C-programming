#include<stdio.h>

int main(void)
{
	int arr[3][2][4]={10,20,30,40,50,60,70,80,90};
	
	printf("%d\n",arr[0]);        //6487472 
	//3D->0th 2D naw (1D addr)
	
	printf("%d\n",arr[0][0]);     //6487472
	//3D->0th 2D->0th 1D naw(ele addr)
	
	printf("%d\n",arr[0][0][0]);  //10
	//3D->0th 2D->oth 1D->oth ele naw(value)
	
	printf("%d\n",arr[1]);         //6487504
	//3D->1st 2D naw(1D addr)
	
	printf("%d\n",arr[1][0]);      //6487504
	//3D->1st 2D->0th 1D naw (ele addr)
	
	printf("%d\n",arr[1][0][0]);   //90
	//3D->1st 2D->0th 1D->0th ele naw(value)
	
	
	printf("%d\n",arr[2]);       //6487536
	//3D->2nd 2D naw(1D addr)
	
	printf("%d\n",arr[2][0]);    //6487536
	//3D-> 2D->0th 1D naw (ele addr)
	
	printf("%d\n",arr[2][0][0]); //0
	//3D->2nd 2D->0th 1D->0th ele naw(value)
	
	printf("%d\n",arr[0]+1);    //6487488
	//1D size ne pudhe
	
	printf("%d\n",arr[0][0]+1); //6487476
	//ele size ne pudhe
	
	printf("%d\n",arr[0][0][0]+1);//11
	//value+1
	
	printf("%d\n",arr[1]+1);     //6487520
	//1D size ne pudhe
	
	printf("%d\n",arr[1][0]+1);  //6487508
	//ele size ne pudhe
	
	printf("%d\n",arr[1][0][0]+1);//91
    //value+1
	
	printf("%d\n",arr[2]+1);    //6487552
	//1D size ne pudhe
	
	printf("%d\n",arr[2][0]+1); //6487540
	//ele size ne pudhe
	
	printf("%d\n",arr[2][0][0]+1);//1
	//value+1
	
	printf("%d\n",&arr);         //6487472
	//&(3D naw)=>3D addr
	
	printf("%d\n",arr);          //6487472
	//3D naw(2D addr)
	
	printf("%d\n",*arr);         //6487472
	//3D-> 2D naw(1D addr)
	
	printf("%d\n",**arr);        //6487472
	//3D->2D->1D naw(ele addr)
	
	printf("%d\n",***arr);       //10
    //3D->2D->1D ele-> naw(value)
	 
	printf("%d\n",&arr+1);      //6487472
	//3D size ne pudhe
	
	printf("%d\n",arr+1);       //6487504
	//2D size ne pudhe
	
	printf("%d\n",*arr+1);      //6487488
	//1D size ne pudhe
	
	printf("%d\n",**arr+1);     //6487476
	//ele size ne pudhe
	
	printf("%d\n",***arr+1);    //11
	//value+1
	
	printf("%d\n",&arr[2][0]);   //6487536
	//&(3D->2nd 2D->oth 1D naw)=> 1D addr
	
	printf("%d\n",&arr[2][0]+1); //6487552
	//1D size ne pudhe
	
	printf("%d\n",&(*arr));     //6487472
	//&(3D->2D naw)=>2D addr
	
	printf("%d\n",&(*arr)+1);   //6487504
	//2D size ne pudhe
	
	printf("%d\n",arr+2);      //6487536
	//2D size ne pudhe
	
	printf("%d\n",*(arr+2));    //6487536
    //address of 2D 
    
	printf("%d\n",*(arr+2+1));  //6487568
    //address of 2D + ele size
	
	printf("%d\n",*(*(arr+2)+1)); //6487552
	// Address of 2nd row in block 2
	
	printf("%d\n",*(*(arr+2+1)+3));  //6487616
	//address of arr[2][1][3]
	
	printf("%d\n",*(*(*(arr+2)+1)+3));//0
	//Value at arr[2][1][3]
	
	return 0;
	
}
