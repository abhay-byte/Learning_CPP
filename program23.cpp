#include <iostream>
using namespace std;
class List{
public:
    virtual void store(int v) = 0;
    virtual int retrieve() = 0;
};
class Stac: public List{
private:
    int val;
public:
    void store(int v) { val = v; }
    int retrieve() { return val; }};
class Que: public List{
private:
    int val;
public:
    void store(int v) { val = v; }
    int retrieve() { return val; }};
int main(){
    Stac s; Que q; List *l = &s;
    l->store(2); cout << "Value stored in List: " << 2;
    cout << "\nValue retrieved from List: " << l->retrieve();
    l = &q;
    l->store(3); cout << "\nValue stored in List: " << 3;
    cout << "\nValue retrieved from List: " << l->retrieve();
    printf("\nAbhay Raj, 00976803122");
}
