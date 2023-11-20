#include <iostream>
using namespace std;
class Mem {
public:
    void* operator new(size_t size) {
        cout << "Allocating " << size << " bytes\n";
        return ::operator new(size);}
    void operator delete(void* ptr) noexcept {
        cout << "Custom delete operator: Deallocating memory\n";
        ::operator delete(ptr);}
};
int main() {
    Mem* obj = new Mem();
    delete obj;
	cout<<"\nAbhay Raj, 00976803122";
}
