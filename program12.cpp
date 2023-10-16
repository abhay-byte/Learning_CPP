#include <iostream>
using namespace std;
class Serial{
private:
    int serialCode;
    char title[20];
    float duration;
    int noOfEpisodes;

public:
    Serial(){
        duration = 30; noOfEpisodes = 10;
    }
    void newSerial(){
        cout << "Enter Serial Code:\n"; cin>>serialCode;
        cout << "Enter Serial Title:\n"; cin>>title;
    }
    void otherEnteries(int no,float dur){
        duration = dur; serialCode = no;
    }
    void dispData(){
        cout << "\nSerial Code: " << serialCode
        << "\nTitle: " << title << "\nDuration: "
        << duration << "\nNo. of episodes: " << noOfEpisodes;
    }
};
int main(){
    Serial s; int no; float dur;
    s.newSerial(); cout << "Enter Duration and no of episodes:\n";
    cin >> dur >> no; s.otherEnteries(no,dur);
    s.dispData();
    cout << "\nAbhay Raj, 00976803122";
}