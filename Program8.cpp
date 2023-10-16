#include <iostream>
using namespace std;
class Auditorium {
private:
    static int noOfPeople;
public:
    static void Initialise() {
        noOfPeople = 0;
    }
    static void Entry() {
        noOfPeople++;
    }
    static void Show() {
        cout << "Total people Entered the auditorium: " << noOfPeople;
    }
};
int Auditorium::noOfPeople = 0;
int main() {
    char ch;
    char y = 'Y'; char Y = 'y';
    Auditorium::Initialise();
    do {
        Auditorium::Entry();
        cout << "Did people enter in Auditorium? (Y/y to continue):";
        cin >> ch;
    } while (ch == y || ch == Y);
    Auditorium::Show();
}
