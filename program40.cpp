#include <iostream>
#include <stdexcept>
using namespace std;
class MyError : public runtime_error {
public:
    MyError(string message) : runtime_error(message) {}
};
int main() {
    try {
        throw MyError("This is a user-defined error!");
    } catch (MyError& e) {
        cerr << "Error: " << e.what() << endl;
    }
    cout << "\nAbhay Raj, 00976803122";
}
