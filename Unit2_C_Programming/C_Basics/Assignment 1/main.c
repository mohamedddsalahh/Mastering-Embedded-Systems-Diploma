/*
 * main.c
 *
 *  Created on: Feb 16, 2024
 *      Author: USER
 */
#include "stdio.h"
#include "stdint.h"

void main(void){

	fflush(stdin);
	fflush(stdout);
	/*EX1*/
	printf("C Programming\n");

	/*EX2*/
	int integer;
	fflush(stdin);
	fflush(stdout);
	printf("Enter an integer: \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &integer);
	fflush(stdin);
	fflush(stdout);
	printf("You entered %d\n", integer);

	/*EX3*/
	int num1, num2;
	fflush(stdin);
	fflush(stdout);
	printf("Enter two integers: \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d", &num1, &num2);
	uint16_t sum = num1 + num2;
	fflush(stdin);
	fflush(stdout);
	printf("Sum = %d \n", sum);

	/*EX4*/
	float f1, f2;
	fflush(stdin);
	fflush(stdout);
	printf("Enter two float numbers: \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f", &f1, &f2);
	double product = f1*f2;
	fflush(stdin);
	fflush(stdout);
	printf("Product = %f \n", product);

	/*EX5*/
	char ch;
	fflush(stdin);
	fflush(stdout);
	printf("Enter an character: \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%c:", &ch);
	fflush(stdin);
	fflush(stdout);
	printf("ASCII Value of %c = %d \n", ch, ch);


	/*EX6*/
	int a, b, temp;
	fflush(stdin);
	fflush(stdout);
	printf("Enter value of a: \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&a);
	fflush(stdin);
	fflush(stdout);
	printf("Enter value of b: \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&b);
	temp = a;
	a = b;
	b = temp;
	printf("a = %d, b = %d \n", a, b);

	/*EX7*/
	int c,d;
	fflush(stdin);
	fflush(stdout);
	printf("Enter value of c: \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&c);
	fflush(stdin);
	fflush(stdout);
	printf("Enter value of d: \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&d);
	c = c^d;
	d = d^c;
	c = c^d;
	printf("c = %d, d = %d \n", c, d);
}

