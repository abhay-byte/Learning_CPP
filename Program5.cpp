#include <iostream>
using namespace std;

int globalVariable = 0;

class A
{
    static const int staticConstantVariable = 1;
    int localVariable = 2;

public:
    static const int staticConstantPublicVariable = 1;
    int publicVariableA = 3;

    class C
    {

    public:
        static const int publicVariableCInA = 10;

    private:
        int privateVariableCInA;

    protected:
        int protectedVariableCInA;

    };

private:
    int privateVariable = 4;

protected:
    int protectedVariableA = 5;

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

int main()
{
    A classA;
    B classB;



    cout << "Global Variable: "<< globalVariable << endl;
    cout << "Public Variable of class A accessing through object: "<< classA.publicVariableA << endl;
    cout << "Public Variable of class B accessing through object: "<< classB.publicVariableB << endl;
    cout << "Static Constant Public Variable of class A: "<< A::staticConstantPublicVariable << endl;
    classB.PrintProtectedVariables();
    return 0;
}