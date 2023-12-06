#include <iostream>
#include <string>
using namespace std;
template <typename T>
class N {
public:
    T data;N* prev;N* next;
    N(T v) : data(v), prev(nullptr), next(nullptr) {}
};
template <typename T>
class DoublyLinkedList {
private:
    N<T>* h;N<T>* t;
public:
    DoublyLinkedList() : h(nullptr), t(nullptr) {}
    void insertEnd(T v) {
        N<T>* newN = new N<T>(v);
        if (h == nullptr) h = t = newN;
        else {
            newN->prev = t;
            t->next = newN;
            t = newN;
        }
    }
    void disp() {
        N<T>* c = h;
        while (c != nullptr) {
            cout << c->data << " <-> ";
            c = c->next;
        }cout << "null\n";
    }
};
int main() {
    DoublyLinkedList<int> l;
    l.insertEnd(1);l.insertEnd(2);
    l.insertEnd(3);
    cout << "Doubly Linked List of Int: ";
    l.disp();
    cout << "\nAbhay Raj, 00976803122";
}
