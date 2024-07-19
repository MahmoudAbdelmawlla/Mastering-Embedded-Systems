/*
 ============================================================================
 Name        : EX4.c
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
	float num1,num2,product=0;
		printf(" Enter two numbers :  \n");
		fflush(stdout);
		scanf( "%f%f" ,&num1,&num2);/*storing the numbers entered by the user*/
		product = num1*num2; /*performing the multiplying process*/
		printf("Sum = %f" ,product);/* displays the result*/
	return EXIT_SUCCESS;
}
