#include <iostream>
#define SUBJECTS 5

using namespace std;


class Student
{
    string Streams[7] =  {"COMPUTER SCIENCE", "ELECTRONICS",
                          "MECHANICAL", "ELECTRICAL", "CHEMICAL", "CIVIL", "NO STREAM"};
public:
    void Initialise()
    {
        cout << "Enter Your Name: " << endl;
        getline(cin,name);

        cout << "Enter Your Roll Number: " << endl;
        cin>>rollNumber;

        int i = 0;
        while(i < SUBJECTS)
        {
            cout << "Enter Marks of Subject Number " << i+1 << ":" << endl;
            cin >> marks[i];
            i++;
        }
    }

    void AssignStreamToStudent()
    {

        int totalPercentage = CalculateTotalPercentage();
        int index = (totalPercentage>96) ? 0 :
                (totalPercentage>91)? 1:
                (totalPercentage>86)? 2:
                (totalPercentage>81)? 3:
                (totalPercentage>76)? 4:
                (totalPercentage> 71)? 5: 6;

        cout<< "You have been assigned with stream " << Streams[index] << "." << endl;
        cout<< "\nThis Stream assignment is only based on you percentage,"
               "\nif you want to choose other stream of your choice, you totally can." << endl;

    }

    int CalculateTotalPercentage()
    {
        int i = 0,totalMarks = 0;

        while (i<5)
        {
            totalMarks += marks[i];
            i++;
        }
        int totalPercentage = totalMarks/5;
        return  totalPercentage;
    }

private:
    int rollNumber{};
    int marks[5]{};
    string name;

};

void DisplayNameAndEnrollmentNumber()
{
    cout << "\nProgram Created By,"<< endl
         << "Name: Abhay Raj" << endl
         << "Enrollment Number: 00976803122" << endl;
}

int main()
{
    Student student1;
    student1.Initialise();
    student1.AssignStreamToStudent();

    DisplayNameAndEnrollmentNumber();

    return 0;
}

