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
#include <string.h>

int main() {
	char s[100],temp;
	int i,j;
	printf("Enter a string :");
	fflush(stdin),fflush(stdout);
	gets(s);
	i=0;
	j=strlen(s) - 1;
	while(i<j){
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
		printf("\n Reverse of string :%s" ,s);
	return 0;
}
