/*
 ============================================================================
 Name        : PrimeOrNot.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i,flag=0;
	setbuf(stdout,NULL);
	printf("Enter A Number You Want To Check\n");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("Entered Number Is Not A Prime Number");
	}
	else
	{
		printf("Entered Number Is A Prime Number");
	}
	return EXIT_SUCCESS;
}
