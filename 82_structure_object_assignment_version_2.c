#include<stdio.h>

struct demo
{
	int iNo;
	float fNo;
	
};
 void AssignObject(struct demo ,struct demo *,struct demo *);
int main(void)
{
	struct demo obj1;
	struct demo obj2;
	struct demo obj3;
	
	printf("Enter value of Obj1\n");    
	printf("Enter Integer :\t");        
	scanf("%d",&obj1.iNo);
	printf("Enter Float :\t");          
	scanf("%f",&obj1.fNo);
	
	AssignObject(obj1,&obj2,&obj3);
	
	printf("\nObject 1 value are\n");       
	printf("Integer is %d\n",obj1.iNo);     
	printf("float is %f\n",obj1.fNo);       
	
	printf("\nObject 2 value are\n");      
	printf("Integer is %d \n",obj2.iNo);   
	printf("float is %f \n",obj2.fNo);     
	
	printf("\nObject 3 value are\n");       
	printf("Integer is %d \n",obj3.iNo);    
	printf("float is %f \n",obj3.fNo);      
	
	return 0;
	
}
void AssignObject(struct demo obj1,struct demo *pobj2,struct demo *pobj3)
{
	*pobj2=obj1;
	pobj3->iNo=obj1.iNo;
	pobj3->fNo=obj1.fNo;
	
}

/*
Enter value of Obj1
Enter Integer : 10
Enter Float :   22.22

Object 1 value are
Integer is 10
float is 22.219999

Object 2 value are
Integer is 10
float is 22.219999

Object 3 value are
Integer is 10
float is 22.219999
*/
