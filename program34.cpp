#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class hotel {
private:
    string name;
    int rno;
public:
    hotel() {
        cout << "\nEnter name, room no.: ";
        cin >> name >> rno;
    }
    void display() {
        cout << "\nName: " << name <<
         "\nRoom Number:" << rno;
    }
    void write(ofstream &file) {
        file << name << "," << rno << "\n";
    }
};
int main() {
    int no;
    cout << "Enter the no. of customers:\n";
    cin >> no;
    ofstream writeh("hotel.txt");
    for (int i = 0; i < no; ++i) {
        hotel cust;cust.write(writeh);
    }writeh.close();
    ifstream readh("hotel.txt");
    int tcus = 0;string line;
    while (getline(readh, line)) tcus++;
    readh.close();
    cout << "Total no. of customers: " << tcus;
    cout << "\nAbhay Raj, 00976803122";
}
