/*
 ============================================================================
 Name        : FunctionWithArgumentWithOutReturnValue.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void sum(int,int);
int main(void) {
	int a,b;
	setbuf(stdout,NULL);
	printf("Enter 2 Numbers: \n");
	scanf("%d %d",&a,&b);
	sum(a,b);
	return EXIT_SUCCESS;
}
void sum(int b,int c)
{
	int sum;
	sum=b+c;
	printf("Result = %d",sum);
}
