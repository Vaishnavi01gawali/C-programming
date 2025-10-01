#include<stdio.h>

struct demo
{
	int iNo;
	float fNo;
};

void Scan(struct demo *);
void Print(struct demo const *);

int main(void)
{
	struct demo Obj;
	
	Scan(&Obj);
	Print(&Obj);
	
	return 0;
}

void Scan(struct demo *pPtr)
{
	printf("Enter integer:");                 // Enter integer:10
	scanf("%d",&pPtr->iNo);
	printf("Enter float:");                   // Enter float:12.24
	scanf("%f",&(*pPtr).fNo);
}
void Print(struct demo const *pPtr)
{
	printf("Integer is %d\n",(*pPtr).iNo);    // Integer is 10
	printf("float is %f\n",pPtr->fNo);        // float is 12.240000
}
