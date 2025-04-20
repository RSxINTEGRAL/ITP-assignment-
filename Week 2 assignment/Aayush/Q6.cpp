#include <iostream>
using namespace std;

int main() {
     int SIZE = 3;
    int matrix1[SIZE][SIZE], matrix2[SIZE][SIZE];
        
    cout << "Enter elements of first matrix :" << endl;
    for (int i = 0; i < SIZE; i++)
     {
        for (int j = 0; j < SIZE; j++)
     {
            cin >> matrix1[i][j];
        }
    }
    
    cout << "Enter elements of second matrix :" << endl;
    for (int i = 0; i < SIZE; i++)
     {
        for (int j = 0; j < SIZE; j++)
         {
            cin >> matrix2[i][j];
        }
    }
    
   int sumMatrix[SIZE][SIZE];
    for (int i = 0; i < SIZE; i++) 
    {
        for (int j = 0; j < SIZE; j++)
         {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

   
    cout << "Sum of original matrices:" << endl;
    for (int i = 0; i < SIZE; i++) 
    {
        for (int j = 0; j < SIZE; j++)
         {
            cout << sumMatrix[i][j] << " ";
        }
        cout << endl;
    }

    int transpose1[SIZE][SIZE];    
    for (int i = 0; i < SIZE; i++)
     {
        for (int j = 0; j < SIZE; j++) 
        {
            transpose1[j][i] = matrix1[i][j];
        }
    }

    int transpose2[SIZE][SIZE];    
    for (int i = 0; i < SIZE; i++)
     {
        for (int j = 0; j < SIZE; j++)
         {
            transpose2[j][i] = matrix2[i][j];
        }
    }

    
    cout << "Transpose of second matrix:" << endl;
    for (int i = 0; i < SIZE; i++) 
    {
        for (int j = 0; j < SIZE; j++) 
        {
            cout << transpose1[i][j] << " ";
        }
        cout << endl;
    }

   
    cout << "Transpose of second matrix:" << endl;
    for (int i = 0; i < SIZE; i++) 
    {
        for (int j = 0; j < SIZE; j++)
         {
            cout << transpose2[i][j] << " ";
        }
        cout << endl;
    }
    int sumTranspose[SIZE][SIZE];
    for (int i = 0; i < SIZE; i++)
     {
        for (int j = 0; j < SIZE; j++)
         {
            sumTranspose[i][j] = transpose1[i][j] + transpose2[i][j];
        }
    }

    
    cout << "Sum of transposed matrices:" << endl;
    for (int i = 0; i < SIZE; i++)
     {
        for (int j = 0; j < SIZE; j++)
         {
            cout << sumTranspose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}