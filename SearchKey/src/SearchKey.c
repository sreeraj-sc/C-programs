/*
 ============================================================================
 Name        : SearchKey.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[10],i,n,searchkey;
	setbuf(stdout,NULL);
	printf("Enter The Size Of Array\n");
	scanf("%d",&n);
	printf("Enter the values\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter The Value That You Want to Search\n");
	scanf("%d",&searchkey);
	for(i=0;i<n;i++)
	{
		if(searchkey==a[i])
		{
			printf("Search found : Its on %d th Position",i+1);
			break;
		}
	}
	return EXIT_SUCCESS;
}
