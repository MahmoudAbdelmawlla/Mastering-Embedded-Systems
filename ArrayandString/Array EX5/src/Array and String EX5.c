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

int main(void) {
	int a[30] , ele , num , i ;
	printf("Enter no of elements :");
	fflush(stdout),fflush(stdin);
	scanf("%d", &num);
	for (i=0 ;i<num;i++)
		scanf("%d",&a[i]);
	printf(" Enter The Number To Be Searched :");
	fflush(stdout),fflush(stdin);
	scanf("%d", &ele);
	i=0;
     while(i<num && ele!=a[i]){
    	 i++;
     }
     if(i<num){
    	 printf("Number is At Location : %d" , i+1);
     }
     else{
    	 printf("Number Not Found");
     }
     return 0;
}
