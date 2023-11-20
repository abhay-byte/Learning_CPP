#include <iostream>
using namespace std;
class com{
private:
    int r,i;
public:
    com(){cout<<"Enter r and i:\n";
        cin >> r >> i;}
    com operator+(com& n){
        r+= n.r; i+= n.i;
        return *this;}
    void disp(){
    if(this->i>0)cout<<r<<"+"<<i<<"i";
    else cout<<r<<i<<"i";}
};
int main(){
    com c1,c2; c1 = c1+c2; c1.disp();
	cout<<"\nAbhay Raj, 00976803122";
}
