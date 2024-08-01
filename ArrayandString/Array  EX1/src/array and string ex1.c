/*
 ============================================================================
 Name        : array.c
 Author      : Mahmoud_Mohamed_Abdelmawlla
 Version     :
 Copyright   : Your copyright notice
 Description : Array and String 1st EX
 ============================================================================
 */

#include <stdio.h>

int main()
{
	float a[2][2],b[2][2],c[2][2];
	int i,j;
	printf("Enter The Elements Of The 1st Matrix\n" );
	for(i=0;i<2;++i)
		for(j=0;j<2;++j){
			printf("Enter a%d%d :", i+1,j+1);
			fflush(stdin),fflush(stdout);
			scanf("%f",&a[i][j]);
		}
	printf("Enter The Elements Of The 2nd Matrix\n" );
	for(i=0;i<2;++i)
		for(j=0;j<2;++j){
			printf("Enter b%d%d :", i+1,j+1);
			fflush(stdin),fflush(stdout);
			scanf("%f",&b[i][j]);
		}
	for(i=0;i<2;++i)
		for(j=0;j<2;++j){
			c[i][j]=a[i][j]+b[i][j];
		}
	printf("\nSum Of Matrix :");
	for(i=0;i<2;++i)
		for(j=0;j<2;++j){
			printf("%.1f\t",c[i][j]);
			if(j==1)
				printf("\n");
		}
	return 0;
}
