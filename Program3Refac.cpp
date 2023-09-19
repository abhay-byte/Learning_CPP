#include <iostream>
using namespace std;
class Employee{
private:
    int empNo; int basic; int hra;
    int da; float netPay; string eName;
    void Calculate(){
        hra = (basic*10)/100; da = (basic*20)/100;
    }
public:
    void HaveData(){
        cout << "Enter,\nEmp Name:"; cin>>eName;
        cout << "Emp No.:"; cin >> empNo;
        cout << "Emp Basic:"; cin >> basic;
        cout << "Emp Net Pay:"; cin >> netPay;
        Calculate();
    }
    void DispData(){
        cout<< "\nEMPLOYEE DETAILS,\n"
            <<"\nEmp No.: "<< empNo
            <<"\nEmp Name: "<< eName
            <<"\nEmp Basic: "<< basic
            <<"\nEmp HRA: "<< hra
            <<"\nEmp DA: "<< da
            <<"\nEmp NetPay: "<< netPay;
    }
};
int main(){
    Employee employee; employee.HaveData();
    employee.DispData();
    cout << "\nAbhay Raj, 00976803122";
}