/*
 ============================================================================
 Name        : SelectionSorting.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,n,temp,a[10];
	setbuf(stdout,NULL);
	printf("Enter The Size Of Array\n");
	scanf("%d",&n);
	printf("Enter The Values\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	printf("Arranged Values Are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return EXIT_SUCCESS;
}
