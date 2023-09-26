#include <iostream>
using namespace std;
class TData {
public:
    string spoint; string des;
    int reqBus;
};
class Travel{
public:
    void Initialise(){
        cout << "Enter start point && destination:";
        cin>>spoint; cin>>des; BusReq();
    }
    void BusReq(){
        for (TData& data : travel){
            TData curD = data;
            if (curD.spoint == spoint && curD.des == des){
                cout << "You are required to take " << curD.reqBus
                << " buses.";
                return;
            }
        }
        cout << "No route found";
    }
private:
    string spoint; string des;
    int reqBus = 0;
    TData travel[2] {
            TData{"CityX", "CityY", 5},
            TData{"CityA", "CityB", 4},
            };

};
int main(){
    Travel details;
    details.Initialise();
    cout << "\nAbhay Raj, 00976803122";
}