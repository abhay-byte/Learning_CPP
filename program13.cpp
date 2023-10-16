#include <iostream>
using namespace std;
struct Name{
    char First[40];
    char Mid[40];
    char Last[60];
};
struct Phone{
    char Area[4];
    char Exch[4];
    char Numb[6];
};
class p_rec{
private:
    struct Name n;
    struct Phone ph;
public:
    p_rec(){
        cout<<"Enter First,Mid,Last name:\n";
        cin>>n.First>>n.Mid>>n.Last;
        cout<<"Enter Area, Exchange, Number:\n";
        cin>>ph.Area>>ph.Exch>>ph.Numb;
    }
    void disp(){
        cout<<"\nFull Name: "<<n.First<<" "<<n.Mid<<" "<<n.Last
        <<"\nArea: "<<ph.Area<<"\nExchange: "<<ph.Exch<<
        "\nNumber: "<<ph.Numb;
    }
};
int main(){
    p_rec p; p.disp();
    cout << "\nAbhay Raj, 00976803122";
}