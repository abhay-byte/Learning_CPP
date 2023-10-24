#include <iostream>
using namespace std;
class student{
protected:
    int nostds;
public:
    student(int t) : nostds(t) {}
};
class exam: public student{
protected:
    int noex;
public:
    exam(int ts, int ne) : noex(ne),student(ts) {}
};
class result: public exam{
public:
    result(int ts, int ne) : exam(ts, ne) {}
    void dispRes() {
        cout << "\nTotal Students: " << nostds
        << "\nNo. of Exams: " << noex ;
    }
};
int main(){
    int s,e;
    cout<<"Enter No. of students and exams:\n";
    cin>>s>>e;
    result r(s,e); r.dispRes();
	cout<<"\nAbhay Raj, 00976803122";
}
