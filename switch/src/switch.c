/*
 ============================================================================
 Name        : switch.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n=0;
	setbuf(stdout,NULL);
	printf("Enter The Number that you want to eat\n1.Biriyani\n2.friedrice\n3.manthi\n4.chicken");
	scanf("%d",&n);
	switch(n)
	{
	case 1:
		printf("you are selected Biriyani");
		break;
	case 2:
		printf("you are selected friedrice");
		break;
	case 3:
		printf("you are selected manthi");
		break;
	case 4:
		printf("you are selected chicken");
		break;
	default:
		printf("You are a fool !!!");
	}
	return EXIT_SUCCESS;
}
