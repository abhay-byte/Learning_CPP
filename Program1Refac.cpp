#include <iostream>
using namespace std;
class Student{
string str[7] =  {"computer science", "electronics",
                          "mechanical", "electrical",
                          "chemical", "civil", "no"};
public:
    void GetData(){
        cout << "Enter Name:"; cin>>name;
        cout << "Enter Roll No.:"; cin>>rollNo;
        int i = 0; while(i < 5){
            cout << "Marks of Subject " << i+1 << ":";
            cin >> marks[i]; i++;}
    }void AssignStream(){
        int i = 0 ,tm = 0; while (i<5){
            tm += marks[i]; i++;}
        int tp = tm/5;
        int j = (tp>96) ? 0 :(tp>91)?1:(tp>86)?
                2:(tp>81)?3:(tp>76)? 4:(tp> 71)? 5: 6;
        cout<< str[j] << " stream has been given.";}
private:
    int rollNo; int marks[5];
    string name;};
int main(){
    Student student1; student1.GetData();
    student1.AssignStream();
    cout << "\nAbhay Raj, 00976803122";}