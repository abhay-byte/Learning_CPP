#include <iostream>
#include <stdexcept>
using namespace std;
int get(int arr[], int i) {
    if (i >= 5) {
        throw out_of_range("Index out of range");
    }return arr[i];
}
int main() {
    int arr[5] = {1,2,3,4,5};
    try {
        cout << "Element at index 0: " << get(arr, 0)
        << "\nAccess element at index 10...\n";get(arr, 10);
    } catch (out_of_range& e) {
        cerr << "\nException caught: " << e.what() << endl;
    }
    cout << "\nAbhay Raj, 00976803122";
}
