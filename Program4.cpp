#include <iostream>
using namespace std;

class TravelData {

public:
    string startingPoint;
    string destination;
    int numberOfBusesRequired;
};

class Travel
{

public:

    void Initialise()
    {
        EnterStartPoint();

        EnterDestination();

        CalculateBusesRequired();
    }

    void EnterStartPoint()
    {
        cout << "Enter starting point of your travel:";
        getline (cin, startingPoint);
    }

    void EnterDestination()
    {
        cout << "Enter destination of your travel:";
        getline (cin, destination);
    }


    void CalculateBusesRequired()
    {
        for (TravelData& data : travelData)
        {
            TravelData currentData = data;

            bool condition = currentData.startingPoint == startingPoint
                    && currentData.destination == destination;

            if (condition)
            {
                numberOfBusesRequired = currentData.numberOfBusesRequired;
                break;
            }
        }

        ShowNumberOfBusesRequired();
    }

    void ShowNumberOfBusesRequired()
    {
        if(numberOfBusesRequired != 0)
        {
            cout << "You are required to take " << numberOfBusesRequired <<
            " buses to reach your destination." << endl;
        }
        else
        {
            cout << "No route found!!!" << endl;
        }
    }

private:
    string startingPoint;
    string destination;
    int numberOfBusesRequired = 0;

    TravelData travelData[7] {
            TravelData{"City X", "City Y", 5},
            TravelData{"City A", "City B", 4},
            TravelData{"City X", "City B", 3},
            TravelData{"City Y", "City A", 8},
            TravelData{"City C", "City D", 6},
            TravelData{"City A", "City D", 2},
            TravelData{"City B", "City C", 5},
    };
};

void DisplayNameAndEnrollmentNumber()
{
    cout << "\nProgram Created By,"<< endl
         << "Name: Abhay Raj" << endl
         << "Enrollment Number: 00976803122" << endl;
}

int main()
{
    Travel details;

    details.Initialise();

    DisplayNameAndEnrollmentNumber();

    return 0;
}