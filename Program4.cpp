#include <iostream>
#include <vector>
using namespace std;

class TravelDetails {

public:
    TravelDetails(string startingPoint, string destination, int numberOfBusesRequired)
    {
        this->startingPoint = startingPoint;
        this->destination = destination;
        this->numberOfBusesRequired = numberOfBusesRequired;
    }
    string startingPoint;
    string destination;
    int numberOfBusesRequired;
};

class TravelData
{

public:

    vector <TravelDetails> travelData {
        TravelDetails("City X", "City Y", 5),
        TravelDetails("City A", "City B", 4),
        TravelDetails("City X", "City B", 3),
        TravelDetails("City Y", "City A", 8),
        TravelDetails("City C", "City D", 6),
        TravelDetails("City A", "City D", 2),
        TravelDetails("City B", "City C", 5),
    };

    void EnterStartPoint()
    {
        cout << "Enter starting point of you travel:";
        getline (cin, startingPoint);
    }

    void EnterDestination()
    {
        cout << "Enter destination of you travel:";
        getline (cin, destination);
    }


    void CalculateBusesRequired()
    {
        int i = 0;
        while (i<travelData.size())
        {
            TravelDetails currentData = travelData[i];

            bool condition = currentData.startingPoint == startingPoint
                    && currentData.destination == destination;

            if (condition)
            {
                numberOfBusesRequired = currentData.numberOfBusesRequired;
                break;
            }

            i++;
        }

        ShowNumberOfBusesRequired();
    }

    void ShowNumberOfBusesRequired()
    {
        if(numberOfBusesRequired != 0)
        {
            cout << "You are required to take " << numberOfBusesRequired << " buses to reach your destination." << endl;
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
};


int main()
{
    TravelData details;

    details.EnterStartPoint();
    details.EnterDestination();
    details.CalculateBusesRequired();

    return 0;
}