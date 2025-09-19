#include<stdio.h>

struct demo
{
	int iNo;
	float fNo;
	
};
 
int main(void)
{
	struct demo obj1;
	struct demo obj2;
	struct demo obj3;
	
	printf("Enter value of Obj1\n");    // Enter value of Obj1
	printf("Enter Integer :\t");        // Enter Integer : 65
	scanf("%d",&obj1.iNo);
	printf("Enter Float :\t");          // Enter Float :   55.55
	scanf("%f",&obj1.fNo);
	
	obj2=obj1;
	
	obj3.iNo=obj1.iNo;
	obj3.fNo=obj1.fNo;
	
	printf("\nObject 1 value are\n");       // Object 1 value are
	printf("Integer is %d\n",obj1.iNo);     // Integer is 65
	printf("float is %f\n",obj1.fNo);       // float is 55.549999
	
	printf("\nObject 2 value are\n");      //  Object 2 value are
	printf("Integer is %d \n",obj2.iNo);   //  Integer is 65
	printf("float is %f \n",obj2.fNo);     //  float is 55.549999
	
	printf("\nObject 3 value are\n");       // Object 3 value are
	printf("Integer is %d \n",obj3.iNo);    // Integer is 65
	printf("float is %f \n",obj3.fNo);      // float is 55.549999

	
	return 0;
	
}
