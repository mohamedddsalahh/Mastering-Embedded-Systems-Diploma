/*
 * main.c
 *
 *  Created on: Feb 17, 2024
 *      Author: USER
 */


#include "stdio.h"
#include "string.h"



void main(void){

	/*Ex1*/
	char sentence[50], character;
	int  p=0, frequency = 0;
	printf("Enter a string:");
	fflush(stdin);
	fflush(stdout);
	gets(sentence);
	printf("Enter character to find freq:");
	fflush(stdin);
	fflush(stdout);
	scanf("%c", &character);
	while(sentence[p] != '\0'){
		if(sentence[p] == character){
			frequency++;
		}
		p++;
	}
	printf("Frequency of %c = %d\n", character, frequency);


	/*Ex2*/
	char str[50], length;
	int  k=0;
	printf("Enter a string:");
	fflush(stdin);
	fflush(stdout);
	gets(str);

	while(str[k] != '\0'){
		length++;
		k++;
	}
	printf("Length of string = %d\n", length);

	/*Ex3*/
	char string[50], len, temp;
	int  i=0;
	printf("Enter a string:");
	fflush(stdin);
	fflush(stdout);
	gets(string);

	while(string[i] != '\0'){
		len++;
		i++;
	}

	for(int i = 0, j = len-1; i < j; i++, j--){
		temp = string[i];
		string[i] = string[j];
		string[j] = temp;
	}
	printf("Reverse of string is:");
	i = 0;
	while(string[i] != '\0'){
		printf("%c", string[i]);
		i++;
	}
}
