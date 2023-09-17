#include <iostream>
using namespace std;


class Matrices
{
public:

    void InsertMatrices(int matrix1[3][3], int matrix2[3][3])
    {
        Matrix1 = matrix1;
        matrix2 = matrix2;
    }

    void MultiplyMatrices()
    {

    }

private:

    int Matrix1[3][3];
    int Matrix2[3][3];

};

int main()
{
    return 0;
}


