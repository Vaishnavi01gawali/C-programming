#include<stdio.h>

int main(void)
{
	switch(2)
	{
		case 1:
			printf("One\n");
		
		case 2:
		    printf("Two\n");
		
		case 3:
		    printf("Three\n")	;	
	}
	
	/*
	     Two
         Three
    */    
	
	switch(3)
	{
		case 1:
			printf("One\n");
		
		case 2:
		    printf("Two\n");
		
		case 3:
		    printf("\nThree\n");	
	}
	
	/*
         Three
    */    
	
	switch(5)
	{
		case 1:
			printf("One\n");
			
		default :
		      printf("\ndefault\n");	
		
		case 2:
		    printf("Two\n");
		
		case 3:
		    printf("Three\n");	
	}
	
	/*
       default
       Two
       Three  
	*/
	    
	switch(5)
	{
		case 1:
			printf("One\n");	
		
		case 2:
		    printf("Two\n");
		
		case 3:
		    printf("Three\n");
		    
		 default :
		      printf("\ndefault\n");   
	}

	  // default
   
    
	switch(5)
	{
		case 1:
			printf("One\n");
		
		case 2:
		    printf("Two\n");
		
		case 3:
		    printf("Three\n")	;
	}
	  // NO output  
	  
	return 0;
}
