/*
    FinalExam.cpp
    27/05/2024
*/

#pragma region init
#include <iostream>
#include <stdio.h>
#include <assert.h>

using namespace std;
#pragma endregion init

#pragma region func

/**
 *
 * Get the input from the user terminal and store it in the matrix
 */
void inputMatrix(double matrix[4][3])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter the data in matrix[" << i << "][" << j << "]: ";
            do
            {
                cin >> matrix[i][j];
                if (matrix[i][j] <= 0)
                {
                    cout << "Please enter a positive number" << endl;
                }
            } while (matrix[i][j] <= 0);
        }
    }
}

    /**
     *
     * Sum all the numbers in the matrix and return the result
     */
    double SumMatrix(double matrix[4][3])
    {
        double sum = 0;
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                sum += matrix[i][j];
            }
        }
        return sum;
    }

    /**
     *
     * Print the matrix in the terminal
     */
    void PrintMatrix(double matrix[4][3])
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    /**
     *
     * Count the number of elements in the matrix that are equal to 1.0
     */
    int CountMatrix(double matrix[4][3])
    {
        int count = 0;
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (matrix[i][j] = 1.0)
                {
                    count++;
                }
            }
        }
        return count;
    }

#pragma endregion func

#pragma region main

    /**
     *
     * Main function, initialize the matrix and provide the user with options
     */
    int main()
    {
        // Create a matrix of doubles (4x3) and init
        double matrix[4][3];
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                matrix[i][j] = 0;
            }
        };

        int choice;

        do
        {
            cout << "1. Enter data matrix" << endl;
            cout << "2. Sum of all numbers" << endl;
            cout << "3. Show data in matrix" << endl;
            cout << "4. Count elements with value > \"1\"" << endl;
            cout << "5. Exit" << endl;
            cout << "Please enter choice: ";
            cin >> choice;
            switch (choice)
            {
            case 1:
                inputMatrix(matrix);
                break;
            case 2:
                cout << "Sum of matrix: " << SumMatrix(matrix) << endl;
                break;
            case 3:
                PrintMatrix(matrix);
                break;
            case 4:
                cout << "Number of elements with value 1.0: " << CountMatrix(matrix) << endl;
                break;
            case 5:
                return 0;
            default:
                cout << "Invalid choice" << endl;
                break;
            }
        } while (choice != 5);
        return 0;
    }

#pragma endregion main