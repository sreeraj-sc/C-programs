/*
 ============================================================================
 Name        : FunctionWithOutArgumentWithOUtReturnValue.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void sum();
int main(void) {
	setbuf(stdout,NULL);
	sum();
	return EXIT_SUCCESS;
}
void sum()
{
	int a,b,c;
	printf("Enter 2 Numbers:\n");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("Result = %d",c);
}
