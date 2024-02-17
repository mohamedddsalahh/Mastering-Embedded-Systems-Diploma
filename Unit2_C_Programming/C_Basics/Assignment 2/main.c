/*
 * main.c
 *
 *  Created on: Feb 16, 2024
 *      Author: USER
 */
#include "stdio.h"
#include "stdint.h"

void main(void){

		/*EX1*/
		int check_no;
		fflush(stdin);
		fflush(stdout);
		printf("Enter a number\n");
		fflush(stdin);
		fflush(stdout);
		scanf("%d", &check_no);
		if(check_no%2 == 0){
			printf("%d is even\n", check_no);
		}else{
			printf("%d is odd\n", check_no);
		}

			/*EX2*/
			char vowel;
			fflush(stdin);
			fflush(stdout);
			printf("Enter a character\n");
			fflush(stdin);
			fflush(stdout);
			scanf("%c", &vowel);
			switch(vowel){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				printf("%c is a vowel\n", vowel);
				break;
			default:
				printf("%c is a consonant\n", vowel);
			}

		/*EX3*/
		float num1, num2, num3;
		fflush(stdin);
		fflush(stdout);
		printf("Enter three numbers\n");
		fflush(stdin);
		fflush(stdout);
		scanf("%f %f %f", &num1, &num2, &num3);
		if(num1 > num2){
			if(num1 > num3){
				printf("%f is the largest number\n", num1);
			}else{
				printf("%f is the largest number\n", num3);
			}
		}else{
			if(num2 > num3){
				printf("%f is the largest number\n", num2);
			}else{
				printf("%f is the largest number\n", num3);
			}
		}

		/*EX4*/
		float ex4;
		fflush(stdin);
		fflush(stdout);
		printf("Enter a number\n");
		fflush(stdin);
		fflush(stdout);
		scanf("%f", &ex4);
		if(ex4 > 0){
			printf("%f is positive\n", ex4);
		}else if (ex4 < 0){
			printf("%f is negative\n", ex4);
		}else{
			printf("You entered zero\n");
		}

		/*EX5*/
		char alpha;
		fflush(stdin);
		fflush(stdout);
		printf("Enter a char\n");
		fflush(stdin);
		fflush(stdout);
		scanf("%c", &alpha);
		if((alpha >= 'a' && alpha <= 'z' ) || (alpha >= 'A' && alpha <= 'Z' )){
			printf("%c is Alphabet char\n", alpha);
		}else{
			printf("%c is not Alphabet char\n", alpha);
		}

		/*EX6*/
		int natNo, sum;
		fflush(stdin);
		fflush(stdout);
		printf("Enter a number\n");
		fflush(stdin);
		fflush(stdout);
		scanf("%d", &natNo);
		for(int i = 0; i <= natNo; i++){
			sum+= i;
		}
		fflush(stdin);
		fflush(stdout);
		printf("Sum = %d\n", sum);

		/*EX7*/
		int factNo, factorial = 1;
		fflush(stdin);
		fflush(stdout);
		printf("Enter a number\n");
		fflush(stdin);
		fflush(stdout);
		scanf("%d", &factNo);
		if(factNo > 0){
			for(int i = 1; i <= factNo; i++){
				factorial*= i;
			}
		}else if (factNo == 0){
			factorial = 0;
		}else{
			printf("Error Factorial of neg number doesn't exist\n");
		}
		printf("Factorial = %d\n", factorial);

	/*EX8*/
	char operation;
	float number1, number2;
	double  output;
	fflush(stdin);
	fflush(stdout);
	printf("Enter two numbers \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f", &number1, &number2);

	fflush(stdin);
	fflush(stdout);
	printf("Enter an operation \n"
			"a: +\n"
			"b: -\n"
			"c: *\n"
			"d: /\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%c", &operation);
	switch(operation){
	case 'a':
		output = number1+number2;
		break;
	case 'b':
		output = number1-number2;
		break;
	case 'c':
		output = number1*number2;
		break;
	case 'd':
		output = number1/number2;
		break;
	default:
		printf("%c is not valid", operation);
	}
	printf("Output = %f \n", output);
}

