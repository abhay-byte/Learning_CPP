#include <iostream>
using namespace std;
class Date{
private:
    int d,m,y;
    int ConvertToDays(Date d){
        return d.d + d.m*30 + d.y *365;
    }
    int ConvertToDays(){
        return d + m*30 + y *365;
    }
public:
    Date(){
        cout<<"Enter Date, Month, year:\n";
        cin>>d>>m>>y;
    }
    void display(){
        cout << d << "/" << m << "/" << y << endl;
    }
    void subtract(int s){
        if (d>s) d-=s;
        else if (m*30 > s) {d -= s%30; m -= s/30;}
        else {d -= s%30; m -= (s%365)/30; y-= s/365;}
    }
    void  subtract(Date obj)
    {
        int curr = ConvertToDays() - ConvertToDays(obj);
        d = curr%30;m = (curr % 365)/30;y = curr/365;
    }
};
int main(){
    Date d0; Date d1; int s;
    cout << "Enter no to subtract:\n"; cin >> s;
    d0.subtract(s); d1.subtract(d0);
    d0.display(); d1.display();
}