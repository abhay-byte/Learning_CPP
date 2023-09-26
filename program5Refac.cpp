#include <iostream>
using namespace std;
int globalVar = 50;
class A {
private:
    int globalVar = 5;
public:
    void print() {
        cout << "Class variable (inside A): " << globalVar << endl;
        cout << "Global variable (global scope): " << ::globalVar << endl;
    }
};
int main() {
    int globalVar = 10;
    cout << "Local variable (inside main): " << globalVar << endl;
    A myObj; myObj.print();
    cout << "\nAbhay Raj, 00976803122";
}