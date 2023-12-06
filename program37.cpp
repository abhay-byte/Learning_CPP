#include <iostream>
using namespace std;
template <typename T>
T square(T n) {
    return n * n;
}
int main() {
    int intV = 5;
    cout << "Square of " << intV << " is: " << square(intV);
    float floatV = 3.5;
    cout << "\nSquare of " << floatV << " is: " << square(floatV);
    cout << "\nAbhay Raj, 00976803122";
}
