/*
 ============================================================================
 Name        : EX3.c
 Author      : Mahmoud_Mohamed_Abdelmawlla
 Version     :
 Copyright   : Your copyright notice
 Description : Assignment C_Basics
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1,num2,sum=0;
	printf(" Enter two integer \n");
	fflush(stdout);
	scanf( "%d%d" ,&num1,&num2);/*storing the numbers entered by the user*/
	sum = num1+num2; /*performing the summation process*/
	printf("Sum = %d" ,sum);/* displays the result*/
	return EXIT_SUCCESS;
}
