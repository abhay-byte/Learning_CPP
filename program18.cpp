#include <iostream>
using namespace std;
class student{
protected:
    int nostds;
    public:
    student(int t) : nostds(t) {}
};
class exam{
protected:
    int noexams;
public:
    exam(int exams) : noexams(exams) {}
};
class result: public student, public exam{
public:
    result(int ts, int ne) : student(ts), exam(ne) {}
    void dispRes() {
        cout << "\nTotal Students: " << nostds
        << "\nNo. of Exams: " << noex ;
    }
};
int main(){
    int s,e;
    cout<<"Enter no of students and exams:\n";
    cin>>s>>e;
    result r(s,e); r.dispResult();
	cout<<"\nAbhay Raj, 00976803122";
}
