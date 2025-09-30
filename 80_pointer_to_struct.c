#include<stdio.h>

struct demo
{
	int iNo;
	float fNo;
};

void Scan(struct demo *pPtr);
void Print(struct demo Obj);

int main(void)
{
	struct demo Obj;
	
	Scan(&Obj);
	Print(Obj);
	
	return 0;
}

void Scan(struct demo *pPtr)
{
	printf("Enter integer:");           // Enter integer:10
	scanf("%d",&pPtr->iNo);
	printf("Enter float:");             // Enter float:13.68
	scanf("%f",&(*pPtr).fNo);
}
void Print(struct demo Obj)
{
	printf("Integer is %d\n",Obj.iNo);  // Integer is 10
	printf("float is %f\n",Obj.fNo);    // float is 13.680000
}
