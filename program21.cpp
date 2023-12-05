#include <iostream>
using namespace std;
class Patient {
protected:
    string name;int age;
public:
    Patient(string n, int a) : name(n), age(a) {}
    void dispinfo()  {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << " years" << endl;
    }
};
class Age : public Patient {
public:
    Age(string n, int a) : Patient(n, a) {}
    void disp(Age patient) {
        if (patient.age < 12) patient.dispinfo();
    }
};
int main() {
    Age p1("abc", 8);Age p2("efg", 14);
    Age p3("hik", 5);Age p4("", 0);
    cout << "Patients, age less than 12 years:" << endl;
    p4.disp(p1);p4.disp(p2);
    p4.disp(p3);
    cout<<"\nAbhay Raj, 00976803122";
}
