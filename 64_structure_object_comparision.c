#include<stdio.h>

#define  EQUAL 1
#define  NOT_EQUAL 0

struct demo
{
	int iNo;
	float fNo;
	
};
 
 int CompareObject(struct demo obj1,struct demo obj2);

int main(void)
{  
    int iRet;
	struct demo obj1;
	struct demo obj2;
	
	
	printf("Enter value of Obj1\n");
	printf("Enter Integer :\t");
	scanf("%d",&obj1.iNo);
	printf("Enter Float :\t");
	scanf("%f",&obj1.fNo);
	
	printf("\nEnter value of Obj2\n");
	printf("Enter Integer :\t");
	scanf("%d",&obj2.iNo);
	printf("Enter Float :\t");
	scanf("%f",&obj2.fNo);
	
	printf("\nObject 1 value are\n");
	printf("Integer is %d \n",obj1.iNo);
	printf("float is %f \n",obj1.fNo);
	
	printf("\nObject 2 value are\n");
	printf("Integer is %d \n",obj2.iNo);
	printf("float is %f \n",obj2.fNo);
	
	iRet=CompareObject(obj1, obj2); 
	if(iRet==EQUAL)
	  printf("Object are equal");
	else
	  printf("Object are not equal");
	
	return 0;
	
}
int CompareObject(struct demo obj1,struct demo obj2)
{
	if(obj1.iNo== obj2.iNo && obj1.fNo== obj2.fNo)
	  return EQUAL;
	
	return NOT_EQUAL;
}

/*
Enter value of Obj1
Enter Integer : 12
Enter Float :   23.43

Enter value of Obj2
Enter Integer : 23
Enter Float :   45.44

Object 1 value are
Integer is 12
float is 23.430000

Object 2 value are
Integer is 23
float is 45.439999
Object are not equal
*/
