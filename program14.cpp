#include <iostream>
using namespace std;
class student{
private:
    int Roll_no; string Name;
    int Class_st; int marks[5];
    float percentage = 0;
    void Calculate(){
        for (int i = 0; i < 5; ++i) percentage+=marks[i];
        percentage/=5;
    }
public:
    student(){
        cout<<"Enter Name, Roll No., Class Std:\n";
        cin>>Name>>Roll_no>>Class_st;
    }
    void ReadMarks(){
        cout<<"Enter Marks of 5 subject:\n";
        for (int i = 0; i < 5; ++i) cin>>marks[i];
        Calculate();
    }
    void  Displaydata(){
        cout<<"\nName: "<<Name<<"\nRoll no: "
        <<Roll_no<<"\nClass Std: "<< Class_st;
        for (int i = 0; i < 5; ++i) {
            cout<<"\nMarks of sub"<<i<<": "<<
            marks[i];
        }cout<<"\nPercentage: "<<percentage;
    }
};
int main(){
    student s; s.ReadMarks();
    s.Displaydata();
    cout << "\nAbhay Raj, 00976803122";
}