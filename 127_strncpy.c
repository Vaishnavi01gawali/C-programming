#include<stdio.h>
#include<string.h>

int main(void)
{
    int iNo;
    char chSrc[20];
    char chDest[20];

    printf("Enter Source String:\t");
    gets (chSrc);

    printf("Enter Value of iNo:\t");
    scanf("%d",&iNo);

    printf("\nSource String is:\t");
    puts (chSrc);

    strncpy(chDest, chSrc,iNo);

    printf("\nDestination String is:\t");
    puts (chDest);

    return 0;

}
/*
Enter Source String:    this is string
Enter Value of iNo:     6

Source String is:       this is string

Destination String is:  this i-
*/
