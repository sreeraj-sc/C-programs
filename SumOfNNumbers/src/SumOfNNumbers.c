/*
 ============================================================================
 Name        : SumOfNNumbers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,n=0,sum=0;
	setbuf(stdout,NULL);
	printf("Enter The Limit\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("Sum on N Numbers : %d",sum);
	return EXIT_SUCCESS;
}
