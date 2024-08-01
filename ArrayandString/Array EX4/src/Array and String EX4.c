/*
 ============================================================================
 Name        : Array.c
 Author      : Mahmoud_Mohamed_Abdelmawlla
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int a[10], num,loca,i,j ;
	printf (" Enter Number Of Elements :");
	fflush(stdin),fflush(stdout);
	scanf("%d",&num);
	for (i=0;i<num;i++)
		scanf("%d",&a[i]);
	printf("Enter The Element To Be Inserted :");
	fflush(stdin),fflush(stdout);
	scanf("%d",&j);
	printf("Enter The Location :");
		fflush(stdin),fflush(stdout);
		scanf("%d",&loca);
		for (i=num;i>=loca;i--){
			a[i]=a[i-1];
		}
		num++;
		a[loca -1]=j;
		for(i=0;i<num;i++)
			printf(" %d",a[i]);
		return (0) ;
}
