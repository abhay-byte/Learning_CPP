#include <iostream>
using namespace std;
class Date {
private:
    int d, m, y;
public:
    Date() {
        cout << "Enter dd, mm, yyyy: ";
        cin >> d >> m >> y;}
    Date operator++() {
        if (d < 31) d++;
        else if (m < 12) {d = 1;m++;}
        else { d = 1;m = 1;y++;}
        return *this;}
    void disp() {
        cout<<d<<"/"<<m<<"/"<<y<< endl;}
};
int main() {
    Date obj; obj++; obj.disp();
    cout << "\nAbhay Raj, 00976803122";
}
