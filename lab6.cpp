/*
Author: Kusuma Murthy
KUID: 3095756
Date Created: 10/20/2023
Lab: Lab 5, Program 1
Last modified: 10/22/2023
Purpose: To write a program that performs matrix operations
*/

//icluded libraries and functions
#include <iostream>
#include <fstream>

//initialization of functional prototypes
void read_and_create_matrix();
void print_matrix();
void matrix_sum();
void matrix_product();
void matrix_difference();

//main function which runs the program
int main(){
    std::cout << "Kusuma Murthy" << std::endl;
    std::cout << "Lab #6" << std::endl;
    std::cout << std::endl;

    //calling all of the functions coded below
    read_and_create_matrix();
    print_matrix();
    matrix_sum();
    matrix_product();
    matrix_difference();

    return 0;
}


static const int MAX_SIZE = 100; //static constant
//initialization of 2D arrays
int matrixA[MAX_SIZE][MAX_SIZE]; 
int matrixB[MAX_SIZE][MAX_SIZE];
int matrixC[MAX_SIZE][MAX_SIZE];
int matrix_size;

//reads and creats matrix A and matrix B
void read_and_create_matrix(){
    std::fstream matrix_input("matrix_input.txt"); //opens the file
    matrix_input >> matrix_size; //determined matrix size and dimentions

    //adds values to matrix A
    for (int i = 0; i < matrix_size; i++){
        for(int j = 0; j < matrix_size; j++){
            matrix_input >> matrixA[i][j];
        }
    }

    //adds values to matrix B
    for (int i = 0; i < matrix_size; i++){
        for(int j = 0; j < matrix_size; j++){
            matrix_input >> matrixB[i][j];
        }
    }
    //cloese the file
    matrix_input.close();
}

//prints the contents of matrix A and matrix B
void print_matrix(){
    std::cout << "Matrix A:" << std::endl;
    for (int i = 0; i < matrix_size; i++){
        for (int j = 0; j < matrix_size; j++){
            std::cout << matrixA[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;
    
    std::cout << "Matrix B:" << std::endl;
    for (int i = 0; i < matrix_size; i++){
        for (int j = 0; j < matrix_size; j++){
            std::cout << matrixB[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

//Prints the contents of matrix C which is the sum of matrix A and matrix B
void matrix_sum(){
    std::cout << std::endl;
    std::cout << "Matrix Sum (A+B):" << std::endl;
    for (int i = 0; i < matrix_size; i++){
        for(int j = 0; j < matrix_size; j++){
            matrixC[i][j] = matrixA[i][j] + matrixB[i][j];
            std::cout << matrixC[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

//Prints the contents of matrix C which is the product of matrix A and matrix B
void matrix_product(){
    std::cout << std::endl;
    std::cout << "Matrix Product (A*B):" << std::endl;
    for (int i = 0; i < matrix_size; i++){
        for(int j = 0; j < matrix_size; j++){
            int total = 0;
            for(int k = 0; k < matrix_size; k++){
                total += matrixA[i][k] * matrixB[k][j];
            }
        matrixC[i][j] = total;
        std::cout << matrixC[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

//Prints the contents of matrix C which is the difference of matrix A and matrix B
void matrix_difference(){
    std::cout << std::endl;
    std::cout << "Matrix Difference (A-B):" << std::endl;
    for (int i = 0; i < matrix_size; i++){
        for(int j = 0; j < matrix_size; j++){
            matrixC[i][j] = matrixA[i][j] - matrixB[i][j];
            std::cout << matrixC[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
}