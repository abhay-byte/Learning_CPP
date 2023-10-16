//To find larges of three numbers.
#include<iostream>
using namespace std;
#define G(A,B,C) (A>B && A>C)
#define S(A,B,C) (A==B || A==C)
inline int GreatestNumber(int n[3]){
    int a = n[0];int b = n[1]; int c = n[2];
    if G(a,b,c)
        return a;
    else if G(b,a,c)
        return b;
    else if G(c,a,b)
        return c;
    else if S(a,b,c)
        return n[0];
}
class ThreeNumbers{
private:
    int n[3];
public:
    void Initialise(){
           for(int i=0;i<3;i++){
               cout<<"Enter No. "<< i << ":\n";
               cin >> n[i];
           }
    }
    int FindGreatest(){
        return GreatestNumber(n);
    }
};
int main(){
    ThreeNumbers nos;
    nos.Initialise();
    int greatest = nos.FindGreatest();
    cout<<"Greatest Number is "<< greatest << endl;
    cout << "\nAbhay Raj, 00976803122";
}