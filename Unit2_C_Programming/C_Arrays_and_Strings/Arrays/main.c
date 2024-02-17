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
	int mat1[2][2], mat2[2][2], sum[2][2];

	printf("Enter elements of First Matrix\n");
	for(int i=0; i<2; i++){
		for(int j = 0; j<2; j++){
			printf("Enter element [%d][%d]:", i, j);
			fflush(stdin);
			fflush(stdout);
			scanf("%d", &mat1[i][j]);
		}
	}

	printf("Enter elements of Second Matrix\n");
	for(int i=0; i<2; i++){
		for(int j = 0; j<2; j++){
			printf("Enter element [%d][%d]:", i, j);
			fflush(stdin);
			fflush(stdout);
			scanf("%d", &mat2[i][j]);
		}
	}

	for(int i=0; i<2; i++){
		for(int j = 0; j<2; j++){
			sum[i][j] = mat1[i][j] + mat2[i][j];
		}
	}
	printf("Sum Matrix:\n");
	for(int i=0; i<2; i++){
		for(int j = 0; j<2; j++){
			printf("%d  ", sum[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	/*Ex2*/
	float avg_array[20], n, summation = 0;
	printf("Enter number of data\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%f", &n);

	for(int i = 0; i<n; i++){
		printf("Enter number of %dth element:",i);
		fflush(stdin);
		fflush(stdout);
		scanf("%f", &avg_array[i]);
		summation += avg_array[i];
	}
	float average = summation/n;
	fflush(stdin);
	fflush(stdout);
	printf("Average = %f\n", average);

	printf("\n");
	/*Ex3*/
	int matrix[20][20], transpose[20][20], rows, cols;

	printf("Enter number of rows and cols\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d", &rows, &cols);

	printf("Enter elements of First Matrix\n");
	for(int i=0; i<rows; i++){
		for(int j = 0; j<cols; j++){
			printf("Enter element [%d][%d]:", i, j);
			fflush(stdin);
			fflush(stdout);
			scanf("%d", &matrix[i][j]);
		}
	}

	for(int i=0; i<rows; i++){
		for(int j = 0; j<cols; j++){
			printf("%d  ", matrix[i][j]);
		}
		printf("\n");
	}

	printf("Transpose Matrix\n");
	for(int i=0; i<rows; i++){
		for(int j = 0; j<cols; j++){
			transpose[j][i] = matrix[i][j];
		}
	}

	for(int i=0; i<cols; i++){
		for(int j = 0; j<rows; j++){
			printf("%d  ", transpose[i][j]);
		}
		printf("\n");
	}

	printf("\n");
	/*Ex4*/
	int array[20], index, elements, number;
	printf("Enter number of elements:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &elements);
	for(int i =0; i<elements; i++){
		scanf("%d", &array[i]);
	}
	printf("Enter number to be inserted:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &number);

	printf("Enter the location:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &index);

	for(int i = elements; i>=0; i--){
		array[i+1] = array[i];
		if(i == (index-1)){
			array[i] = number;
			break;
		}
	}
	for(int i =0; i<elements+1; i++){
		printf("%d", array[i]);
	}

	printf("\n");
	/*Ex5*/
	int arr[10], no, num;
	printf("Enter number of elements:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &no);
	for(int i =0; i<no; i++){
		scanf("%d", &arr[i]);
	}
	printf("Enter element to be searched:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &num);
	for(int i =0; i<no; i++){
		if(num == arr[i]){
			printf("Number found at location %d", i+1);
			break;
		}
	}

}
