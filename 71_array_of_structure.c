#include<stdio.h>
#define MAX 3

struct demo
{
	int iNo;
	float fNo;
};

int main(void)
{   
    int iCounter;
	struct demo arr[MAX];
	
	
	for(iCounter=0;iCounter<MAX;iCounter++)
	{                                                             
		printf("Enter Number %d:\n",iCounter+1); 
		printf("Enter integer:\t");                 
		scanf("%d",&arr[iCounter].iNo);  
		printf("Enter float:\t");                 
		scanf("%f",&arr[iCounter].fNo);  
    }
	for(iCounter=0;iCounter<MAX;iCounter++)
	{                                         
	    printf("\nObj %d values are :\n",iCounter+1);                    
		printf("Integer is %d\n",arr[iCounter].iNo);
		printf("Float is %f\n",arr[iCounter].fNo);     
	}               
	
	return 0;                                              
}

/*
Enter Number 1:
Enter integer:  56
Enter float:    67.77
Enter Number 2:
Enter integer:  89
Enter float:    87.78
Enter Number 3:
Enter integer:  65
Enter float:    77.77

Obj 1 values are :
Integer is 56
Float is 67.769997

Obj 2 values are :
Integer is 89
Float is 87.779999

Obj 3 values are :
Integer is 65
Float is 77.769997
/*
