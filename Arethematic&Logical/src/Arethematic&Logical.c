/*
 ============================================================================
 Name        : Arethematic&Logical.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a,b,n,cal=0;
	setbuf(stdout,NULL);
	printf("Enter 2 Numbers:\n");
	scanf("%d%d",&a,&b);
	printf("Press 1 to addition\nPress 2 to subtract\nPress 3 to multiply\nPress 4 to division\nPress 5 to show reminder\n");
	scanf("%d",&n);
	if(n==1)
	{
		cal=a+b;
		printf("Sum = %d",cal);
	}
	else if(n==2)
	{
		cal=a-b;
		printf("Sub = %d",cal);
	}
	else if(n==3)
	{
		cal=a*b;
		printf("Mul = %d",cal);
	}
	else if(n==4)
	{
		cal=a/b;
		printf("Div = %d",cal);
	}
	else if(n==5)
	{
		cal=a%b;
		printf("Rem = %d",cal);
	}
	else
	{
		printf("You are a Fool !!!!....");
	}
	return EXIT_SUCCESS;
}
