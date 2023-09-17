#include <iostream>
using namespace std;

int globalVariable = 0;

class A
{
    static const int staticConstantVariable = 1;

public:

    A(A& classA)
    {
        cout << "Private Variable of classA through Friend Class:"
        <<classA.privateVariableA<<endl;
    }

    A(int a)
    {
        privateVariableA = a;
    }

    A() {}

    static const int staticConstantPublicVariable = 1;
    int publicVariableA = 3;

private:
    int privateVariableA = 2;

protected:
    int protectedVariableA = 5;

    class C
    {

    public:
        static const int publicVariableCInA = 10;

    };



};

class B: public A
{
public:
    int publicVariableB = A::publicVariableA;
    void PrintProtectedVariables()
    {
        cout << "Protected Variables of class A through B with inheritance: "<< A::protectedVariableA << endl;
        cout << "Public Variables of class A through B with inheritance: "<< A::publicVariableA << endl;
        cout << "Public Variables of class C in A through B with inheritance: "<< A::C::publicVariableCInA << endl;
    }

private:
    void HelloWorld();

protected:
    int protectedVariableB = A::protectedVariableA;
};

void B::HelloWorld()
{
    cout << "HelloWorld!!!" << endl;
}

void DisplayNameAndEnrollmentNumber()
{
    cout << "\nProgram Created By,"<< endl
         << "Name: Abhay Raj" << endl
         << "Enrollment Number: 00976803122" << endl;
}

int main()
{
    A classA1(10);

    B classB;

    cout << "Global Variable: "<< globalVariable << endl;
    cout << "Public Variable of class A accessing through object: "<< classA1.publicVariableA << endl;
    cout << "Public Variable of class B accessing through object: "<< classB.publicVariableB << endl;
    cout << "Static Variable of class A: "<< A::staticConstantPublicVariable << endl;
    classB.PrintProtectedVariables();

    A classA2(classA1);

    DisplayNameAndEnrollmentNumber();
    return 0;
}