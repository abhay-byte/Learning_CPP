#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;


class Student
{
    vector<string> Streams =  {"COMPUTER SCIENCE", "ELECTRONICS",
                               "MECHANICAL", "ELECTRICAL", "CHEMICAL", "CIVIL", "NO STREAM"};
    public:
        Student(int rollNumber, int marks[5], char name[100])
        {
            this->rollNumber = rollNumber;
            copy(marks,marks+5,this->marks);
            strcpy(this->name,name);
        }

        void AssignStreamToStudent()
        {
            int totalPercentage = CalculateTotalPercentage();
            int index = (totalPercentage>96) ? 0 : (totalPercentage>91)? 1: (totalPercentage>86)? 2:
                    (totalPercentage>81)? 3: (totalPercentage>76)? 4: (totalPercentage> 71)? 5: 6;

            cout<< "You have been assigned with stream " << Streams[index] << "." << endl;
            cout<< "This Stream assignment is only based on you percentage,"
                   " if you want to choose the stream of your choice, you totally can. " << endl;

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
        int rollNumber;
        int marks[5];
        char name[100];

};


int main()
{
    Student student1 =  Student(1,new int[5] {72,78,95,94,94},"ABC");
    student1.AssignStreamToStudent();
    return 0;
}