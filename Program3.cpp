#include <iostream>
#include <cstring>

using namespace std;

class EmployeeData
{
public:
    int empNo;
    int basic;
    float netPay;
    char eName[100];
};


class Employee
{
private:
    int empNo;
    int basic;
    int hra;
    int da;
    float netPay;
    char eName[100];

    void Calculate()
    {
        hra = (basic*10)/100;
        da = (basic*20)/100;
    }

public:

    void HaveData(EmployeeData data)
    {
        this->empNo = data.empNo;
        this->basic = data.basic;
        strcpy(this->eName, data.eName);
        this->netPay = data.netPay;

        Calculate();
    }

    void DispData()
    {
        cout<<"Employee Number: "<< empNo <<endl;
        cout<<"Employee Name: "<< eName <<endl;
        cout<<"Employee Basic: "<< basic <<endl;
        cout<<"Employee HRA: "<< hra <<endl;
        cout<<"Employee DA: "<< da <<endl;
        cout<<"Employee NetPay: "<< netPay <<endl;
    }
};

int main()
{
    EmployeeData employeeData1 = {123,10000,20000,"ABCD"};
    Employee employee1;

    employee1.HaveData(employeeData1);
    employee1.DispData();

    return 0;

}