/*
 * main.c
 *
 *  Created on: Feb 20, 2024
 *      Author: USER
 */

#include "stdio.h"
#include "string.h"

/**EX1**/
int get_primeNo(int x, int y, int arr[]){
	int j = 0;
	for(int i = x; i<=y; i++){
		if( i != 1 && i != 0){
			if(i % 2 != 0 && i % 3 != 0 && i % 5 != 0){
				arr[j] = i;
				j++;
			}
		}
	}
	return --j;
}

///**EX2**/
int get_fact( int x){

	if(x == 1 || x == 0){
		return 1;
	}else{
		return x * get_fact(x-1);
	}
}

///**EX3**/
int reverse_char(char arr[], int len){
	int i = 0, j =len-1;
	char temp;
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
	i++;
	j--;
	if(i>=j){
		return 0;
	}
	return (arr, len);
}

/**Ex4**/
int get_power(int num){
	static int i = 1;
	if(i>num){
		return 1;
	}else{
		i++;
		return num*get_power(num);
	}
}


void main(void){

	/**EX1**/
	int int1, int2, arr[50];
	printf("Enter two intervals: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d%d", &int1, &int2);

	int counter = get_primeNo(int1, int2, arr);
	printf("Prime numbers between %d and %d : ", int1, int2);
	for (int i =0; i<=counter; i++){
		if(arr[i] == 0){
			break;
		}
		printf("%d  ", arr[i]);
	}
	printf("\n");

	/**EX2**/
	int x;
	printf("Enter number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &x);

	int factorial = get_fact(x);
	printf("Factorial of %d = %d\n", x, factorial);
	printf("\n");

	//	/*EX3*/
	char sentence[20];
	printf("Enter sentence: ");
	fflush(stdin);
	fflush(stdout);
	gets(sentence);
	int length = strlen(sentence);
	reverse_char(sentence,length);
	for(int i = 0; i < length; i++){
		printf("%c",sentence[i]);
	}
	printf("\n");

	/*EX4*/
	int num;
	printf("Enter a number:\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &num);
	int power = get_power(num);
	printf("Result = %d", power);
}
