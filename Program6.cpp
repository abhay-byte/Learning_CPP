#include <iostream>
using namespace std;


class Matrix
{
public:

    void InitialiseMatrix()
    {
        cout << "Enter Number of rows of matrix:" << endl;
        cin >> rows;

        cout<< "Enter Number of columns of matrix:" << endl;
        cin >> columns;

        FillMatrix();
    }

    void MatrixMultiplication(Matrix& matrix1, Matrix& matrix2, Matrix& result)
    {
        if(matrix1.columns == matrix2.rows){
            for (int i = 0; i < matrix1.rows; ++i) {
                for (int j = 0; j < matrix2.columns; ++j) {
                    for (int k = 0; k < matrix1.columns; ++k) {
                        result.matrix[i][j] += matrix1.matrix[i][k] * matrix2.matrix[k][j];

                    }
                }
            }
            result.rows =matrix1.rows; result.columns =matrix2.rows;
        }
        else{
            cout<<"Matrix Multiplication Not Possible";
        }

    }

    void DisplayMatrix(Matrix Matrix)
    {
        int row = 0; int column = 0;

        while(row<Matrix.rows)
        {
            cout << "\n[";
            while (column<Matrix.columns) {
                cout<<Matrix.matrix[row][column]<<",";
                column++;
            }
            column = 0;
            row++;
            cout << "]" << endl;
        }
    }

private:
    int rows = 3;
    int columns = 3;
    int matrix[100][100];

    void FillMatrix()
    {
        int row = 0; int column = 0;

        while(row<rows)
        {
            while (column<columns) {
                cout<<"Enter the "<< row<< ","<<column<< " element of the matrix:"<<endl;
                cin>>matrix[row][column];
                column++;
            }
            column = 0;
            row++;
        }

    }
};

void DisplayNameAndEnrollmentNumber()
{
    cout << "\nProgram Created By,"<< endl
         << "Name: Abhay Raj" << endl
         << "Enrollment Number: 00976803122" << endl;
}

int main()
{
    Matrix matrix1;
    Matrix matrix2;
    Matrix matrix3;

    matrix1.InitialiseMatrix();
    matrix1.DisplayMatrix(matrix1);

    matrix2.InitialiseMatrix();
    matrix2.DisplayMatrix(matrix2);

    matrix1.MatrixMultiplication(matrix1, matrix2,matrix3);

    matrix3.DisplayMatrix(matrix3);

    DisplayNameAndEnrollmentNumber();
    return 0;
}