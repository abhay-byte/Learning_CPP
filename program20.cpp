#include <iostream>
#include <string>
using namespace std;
class Publication {
protected:
    string title; float price;
public:
    void getData() {
        cout << "\nEnter title and price: ";
        cin >> title >> price;
    }
    void putData() {
        cout << "Title: " << title;
        cout << "\nPrice: " << price;
    }
};
class Book : public Publication {
private:
    int pageCount;
public:
    void getData() {
        Publication::getData();
        cout << "\nEnter page count: ";
        cin >> pageCount;
    }
    void putData() {
        Publication::putData();
        cout << "\nPage Count: " << pageCount;
    }
};
class Tape : public Publication {
private:
    float playingTime;
public:
    void getData() {
        Publication::getData();
        cout << "\nEnter playing time: ";
        cin >> playingTime;
    }
    void putData() {
        Publication::putData();
        cout << "\nPlaying Time: " << playingTime;
    }
};
int main() {
    Book book; Tape tape;
    cout << "Enter data for the book and tape:" << endl;
    book.getData();tape.getData();
    cout << "\nDisplaying data for the book and Tape:" << endl;
    book.putData();tape.putData();
    cout<<"\nAbhay Raj, 00976803122";
}
