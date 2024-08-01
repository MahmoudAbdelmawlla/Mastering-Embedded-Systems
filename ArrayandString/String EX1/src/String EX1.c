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
	char s[1000],ch;
	int i,count=0;
	printf("write a string :");
	fflush(stdin),fflush(stdout);
	gets(s);
	printf("Enter a character to find frequency : ");
	fflush(stdin),fflush(stdout);
	scanf("%c",&ch);
	for(i=0;s[i]!='\0';++i){
		if (ch==s[i])
		++count;
	}
	printf("Frequency of %c = %d",ch,count);
	return 0;
}
