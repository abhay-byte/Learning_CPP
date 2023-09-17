#include <iostream>
#include <cstring>

using namespace std;

class Employee
{
private:
    int empNo;
    int basic;
    int hra;
    int da;
    float netPay;
    string eName;

    void Calculate()
    {
        hra = (basic*10)/100;
        da = (basic*20)/100;
    }

public:

    void HaveData()
    {
        cout << "Enter Employee Name:" << endl;
        getline(cin,eName);

        cout << "Enter Employee Number:" << endl;
        cin >> empNo;

        cout << "Enter Employee Basic:" << endl;
        cin >> basic;

        cout << "Enter Employee Net Pay:" << endl;
        cin >> netPay;

        Calculate();
    }

    void DispData()
    {
        cout<< "\nEMPLOYEE DETAILS," <<endl;
        cout<<"Employee Number: "<< empNo <<endl;
        cout<<"Employee Name: "<< eName <<endl;
        cout<<"Employee Basic: "<< basic <<endl;
        cout<<"Employee HRA: "<< hra <<endl;
        cout<<"Employee DA: "<< da <<endl;
        cout<<"Employee NetPay: "<< netPay <<endl;
    }
};

void DisplayNameAndEnrollmentNumber()
{
    cout << "\nProgram Created By,"<< endl
         << "Name: Abhay Raj" << endl
         << "Enrollment Number: 00976803122" << endl;
}

int main()
{

    Employee employee;

    employee.HaveData();
    employee.DispData();

    DisplayNameAndEnrollmentNumber();

    return 0;

}