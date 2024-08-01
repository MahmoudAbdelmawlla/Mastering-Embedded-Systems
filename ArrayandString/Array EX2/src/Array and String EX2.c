/*
 ============================================================================
 Name        : Array.c
 Author      : Mahmoud_Mohamed_Abdelmawlla
 Version     :
 Copyright   : Your copyright notice
 Description : Array and String EX2
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	float a[100],sum=0.0 ,average;
	int n,i;
	printf("Enter The Number Of Data: " );
	fflush(stdin),fflush(stdout);
	scanf("%d",&n);

	while ( n>100 || n<=0 )
	{
		printf(" ERROR , The Number Should Be Between 1 to 100\n");
		printf("Enter The Number Again :");
		fflush(stdin),fflush(stdout);
		scanf(" %d",&n);
	}
	for(i=0 ; i<n; i++)
	{
		printf("%d. Enter Number: ",i+1);
		fflush(stdin),fflush(stdout);
		scanf("%f ", &a[i]);
		sum+=a[i];
	}
	average = sum/n;
	printf(" Average = %.2f",average);
	return 0;
}
