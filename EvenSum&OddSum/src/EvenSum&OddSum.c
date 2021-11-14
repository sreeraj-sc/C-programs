/*
 ============================================================================
 Name        : EvenSum&OddSum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int evensum=0,oddsum=0,n,i;
	setbuf(stdout,NULL);
	printf("Enter The Limit : \n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if(i%2==0)
		{
			evensum=evensum+i;
			printf("Even Numbers Are : %d \t",i);
		}
		else
		{
			oddsum=oddsum+i;
			printf("Odd NUmbers Are : %d \t",i);
		}
	}
	printf("\nEvenSum = %d\nOddSum = %d",evensum,oddsum);
	return EXIT_SUCCESS;
}
