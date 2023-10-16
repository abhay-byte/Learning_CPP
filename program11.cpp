#include <iostream>
using namespace std;
class Date{
private:
    int d,m,y;
public:
    void init(){
        cout<<"Enter Date, Month, year:\n";
        cin>>d>>m>>y;
    }
    void display(){
        cout << d << "/" << m << "/" << y << endl;
    }
};
class Patients{
private:
    string name; Date doa;
    string disease; Date dod;
public:
    void init(){
        cout<<"Enter Patient Name:\n";cin >> name;
        cout<<"Enter Date of admission:\n"; doa.init();
        cout<<"Enter disease:\n";cin >> disease;
        cout<<"Enter Date of discharge:\n"; dod.init();
    }
    void display(){
        cout<<"Patient Name: "<<name
        <<"\nDate of admission: "; doa.display();
        cout<<"disease: "<<disease
        <<"\nDate of discharge: "; dod.display();
    }
};
int main(){
    Patients p; p.init();
    p.display();
}