/*
 ============================================================================
 Name        : FunctionWithOutargumentWithReturnValue.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sum();
int main(void) {
	int res;
	setbuf(stdout,NULL);
	res=sum();
	printf("Result = %d",res);
	return EXIT_SUCCESS;
}
int sum()
{
	int a,b,c;
	printf("Enter 2 Numbers\n");
	scanf("%d %d",&a,&b);
	c=a+b;
	return c;
}
