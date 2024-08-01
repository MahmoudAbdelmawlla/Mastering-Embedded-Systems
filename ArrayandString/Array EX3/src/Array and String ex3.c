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

	int r,c,i,j,a[10][10],t[10][10];
	printf(" Enter Rows and Columns Of Matrix :");
	fflush(stdin),fflush(stdout);
	scanf("%d %d", &r,&c);
	printf("\n Enter Elements Of Matrix :\n");
	for (i=0;i<r;++i)
	for (j=0;j<c;++j){
			printf(" \n Enter Elements a%d%d :",i+1,j+1);
			fflush(stdin),fflush(stdout);
			scanf("%d" , &a[i][j]);
		}
	printf("\n Entered Matrix :\n");
	for (i=0;i<r;++i)
	for (j=0;j<c;++j){
			printf(" %d " ,a[i][j]);
			if(j==c-1)
				printf("\r\n");
		}
	for (i=0;i<r;++i)
	for (j=0;j<c;++j){
			t[j][i]=a[i][j];
		}
	printf("  \n Matrix After Transpose :\n");
	for (i=0;i<c;++i)
	for (j=0;j<r;++j){
			printf("%d",t[i][j]);
			if(j==r-1)
			printf("\r\n");
		}
	return 0;
}
