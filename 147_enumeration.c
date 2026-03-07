#include<stdio.h>

enum COMBINATION{series = 1, parallel = 2};
enum SWITCH{off, on};

int main(void)
{
	enum COMBINATION ckt;
	enum SWITCH s1, s2;

	printf("Which circuit you want? (series = 1, parallel =2 )"); 
	scanf("%d", &ckt);

	printf("Enter two switches (off = 0, on = 1): ");        
	scanf("%d%d", &s1, &s2);

	if(ckt == series)
	{
		if(s1 == on && s2 == on)
			printf("Bulb will glow");             
		else
			printf("Bulb will not glow");
	}
	else 
	{
		if(s1 == on || s2 == on)
			printf("Bulb will glow");
		else
			printf("Bulb will not glow");
	}

	return 0;
}
/*
Which circuit you want? (series = 1, parallel =2 ) 2
Enter two switches (off = 0, on = 1): 1 0
Bulb will glow
*/
