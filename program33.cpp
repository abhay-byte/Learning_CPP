#include <iostream>
#include <fstream>
using namespace std;
class Stu {
private:
    string name;int age;char sex;
    double height;double weight;
public:
    void input() {
        cout << "Enter Name, Age, Sex(M/F), Height, Weight:\n";
        cin >> name >> age >> sex >> height >> weight;
    }
    void disp() {
        cout << "Name: " << name << "\nAge: " << age
        << "\nSex: " << sex << "\nHeight: " << height << " m"
        << "\nWeight: " << weight << " kg\n";
    }
};
int main() {
    ofstream outFile("sd.txt");
    Stu stu;stu.input();
    outFile.write((char*)&stu, sizeof(Stu));
    outFile.close();
    ifstream inFile("sd.txt");
    while (inFile.read((char*)(&stu), sizeof(Stu))) {
        stu.disp();
    }
    inFile.close();
    cout<<"\nAbhay Raj, 00976803122";
}
