#include<stdio.h>

int main(void)
{
	int iNo=10;
	int *p=&iNo;
	int **q=&p;
	int ***r=&q;
	int ****s=&r;
	int *****x=&s;
	int ******y=&x;
	int *******z=&y;
	
	printf("%d\n",&iNo);       //6487580
	printf("%d\n",&p);         //6487568
	printf("%d\n",&q);         //6487568
	printf("%d\n",&r);         //6487552
	printf("%d\n",&s);         //6487544
	printf("%d\n",&x);         //6487536
	printf("%d\n",&y);         //6487528
	printf("%d\n",&z);         //6487520
	
	printf("%d\n",*p);         //10
	printf("%d\n",*q);         //6487580
	printf("%d\n",**q);        //10
	printf("%d\n",***z);       //6487552
	printf("%d\n",****s);      //10
//	printf("%d\n",******x); Error: illegal indirection
	printf("%d\n",******z);    //6487580
	
	printf("%d\n",&(***s));    //6487568
	printf("%d\n",&(****z));   //6487552
	printf("%d\n",&(**q));     //6487580
	printf("%d\n",*(&(**q)));  //10
	
	printf("%d\n",&(*p));      //6487580
	printf("%d\n",*(&(*p)));   //10
	printf("%d\n",&iNo);       //6487580
	printf("%d\n",*(&iNo));    //10
	
	return 0;
}
