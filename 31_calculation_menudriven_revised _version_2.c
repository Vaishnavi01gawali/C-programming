#include<stdio.h>

//function declaraction

int Addition(int,int);
int Subtraction(int,int);
int Multiplication(int,int);
int Division(int,int);
int Modulus(int,int);

int main(void)
{
	int iNo1;
	int iNo2;
	int iAns;
	int iChoice;
	
	while(1)
	{
		printf("\n1.Addition\n 2.Subtraction\n 3.Multiplication\n 4. Division\n 5.Modulus\n");
	  /*
	    1.Addition
        2.Subtraction
        3.Multiplication
        4. Division
        5.Modulus	
      
        1.Addition
        2.Subtraction
        3.Multiplication
        4. Division
        5.Modulus
	 */
	  
	    printf("\nEnter your choice :-");   //Enter your choice :-3
	    scanf("%d",&iChoice);               //Enter your choice :-6
	    
	    if(iChoice>=1&&iChoice<=5)
    	{
	      printf("\nEnter two number:-"); //Enter two number:-5 3
		  scanf("%d %d",&iNo1,&iNo2);
	    }
	    
	    switch(iChoice)
        {
		  case 1:
			iAns=Addition(iNo1,iNo2);
			break;
		  case 2:
		    iAns=Subtraction(iNo1,iNo2);
			break; 
		  case 3:
		    iAns=Multiplication(iNo1,iNo2);
			break; 
		  case 4:
		    iAns=Division(iNo1,iNo2);
			break; 
		  case 5:
		    iAns=Modulus(iNo1,iNo2);
			break; 
		  case 6:
		    return 0;  
		  default :
		    printf("Invalid choice\n");
			continue; 			
		     				
	   }
	     printf("Answer is %d\n",iAns);          //Answer is 15  	
	} 
}

// function defination

int Addition(int iNo1,int iNo2)
{
	return iNo1+iNo2;
}

int Subtraction(int iNo1,int iNo2)
{
	return iNo1-iNo2;
}

int Multiplication(int iNo1,int iNo2)
{
	return iNo1*iNo2;
}

int Division(int iNo1,int iNo2)
{
	return iNo1/iNo2;
}

int Modulus(int iNo1,int iNo2)
{
	return iNo1%iNo2;
}
