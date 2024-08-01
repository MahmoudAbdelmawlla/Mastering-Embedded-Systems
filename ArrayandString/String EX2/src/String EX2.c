/*
 ============================================================================
 Name        : String.c
 Author      : Mahmoud_Mohamed_Abdelmawlla
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	char ch[1000];
	int i;
	printf("Enter A String :");
	fflush(stdin),fflush(stdout);
	scanf("%s",&ch);
	for(i=0;ch[i]!='\0';++i);
		printf(" Length of string = %d",i);

	return 0;
}
