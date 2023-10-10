#include <iostream>
using namespace std;
class Matrix{
public:
    void Initialise(){
        cout << "Enter rows and columns:\n";
        cin >> rows; cin >> cols;
        cout<<"Enter Values:\n";
        for(int i = 0;i<rows;i++)
            for(int j = 0;j<cols;j++)
                cin>>matrix[i][j];
    }
    void MatMult(Matrix& m1, Matrix& m2, Matrix& r){
        for (int i = 0; i < m1.rows; ++i)
            for (int j = 0; j < m2.cols; ++j)
                for (int k = 0; k < m1.cols; ++k)
                    r.matrix[i][j] += m1.matrix[i][k] * m2.matrix[k][j];
        r.rows =m1.rows; r.cols =m2.rows;
    }
    void DispMat(){
        cout<<"Matrix,\n";
        for(int i = 0;i<rows;i++) {
            for (int j = 0; j < cols; j++)
                cout << matrix[i][j] << ",";
            cout<<"\n";
        }
    }
private:
    int rows = 3; int cols= 3;
    int matrix[10][10];
};
int main(){
    Matrix mat1,mat2,mat3;
    mat1.Initialise();
    mat1.DispMat();mat2.Initialise();
    mat1.MatMult(mat1, mat2,mat3);
    mat3.DispMat();
    cout << "\nAbhay Raj, 00976803122";
}