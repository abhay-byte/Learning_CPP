#include <iostream>
using namespace std;
template <typename T>
class com {
private:
    T num1;T num2;
public:
    com(T a, T b) : num1(a), num2(b) {
        cout << "Object created with no.: " << num1 << "," << num2;
    }
    T find() {
        return (num1 > num2) ? num1 : num2;
    }
    ~com() {
        cout << "\nObject destroyed.";
    }
};
int main() {
    com<int> Comp(10, 20);
    cout << "\nGreater no.: " << Comp.find() << endl;
    cout << "\nAbhay Raj, 00976803122";
}
