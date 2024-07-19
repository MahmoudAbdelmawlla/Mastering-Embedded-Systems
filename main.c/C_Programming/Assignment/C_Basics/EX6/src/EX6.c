/*
 ============================================================================
 Name        : EX6.c
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
	float a,b,temp;
	printf(" Enter value of a :\n");
	fflush(stdout);
	scanf("%f" ,&a);
	printf(" Enter value of b :\n");
	fflush(stdout);
	scanf("%f" ,&b);
	temp =a ;/*storing value of a in variable temp*/
	a=b;/*storing value of b in variable a*/
	b=temp;/*storing value of temp(which contains the initial value of a) in variable b*/
	printf(" After swapping, value of a = %.2f \n" ,a);
	printf(" After swapping, value of b = %.2f" ,b);
	return EXIT_SUCCESS;
}
