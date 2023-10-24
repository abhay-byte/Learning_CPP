#include <iostream>
using namespace std;
class Complex{
private:
    int img;int real;
public:
    Complex(){
        cout<<"Object Created...";
    }
    Complex(int val){
        real = img = val;
    }
    Complex(int r,int i){
        real = r; img = i;
    }
    void Add(Complex c){
        real += c.real;
        img += c.img;
    }
    void disp(){
        cout<<real<<" + "<<img<<"i\n";
    }
};
int main(){
    int r1,r2,i1,i2;
    cout << "Enter real and imaginary part for two numbers:\n";
    cout << "Enter Real parts:\n"; cin>>r1>>r2;
    cout << "Enter Imaginary parts:\n"; cin>>i1>>i2;
    Complex a(r1,i1); Complex b(i1,i2);
    cout << "Addition of these two is:\n";
    a.Add(b); a.disp();
	cout<<"\nAbhay Raj, 00976803122";
}
