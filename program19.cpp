#include <iostream>
#include <cmath>
using namespace std;
class Coordinate {
protected:
    int x, y;
public:
    Coordinate(int x1, int y1) : x(x1), y(y1) {}
    void readVal(int c1, int c2) {
        x = c1; y = c2;
    }
};
class Distance : public Coordinate {
private:
    float dist;
public:
    Distance(int x1, int y1) : Coordinate(x1, y1) {}
    void calDist() {
        dist = sqrt(pow(x, 2) + pow(y, 2));
        dispVal();
    }
    void dispVal() {
        cout << "\nX coordinate: " << x
        << "\nY coordinate: " << y <<
        "\nDistance is: " << dist;
    }
};
int main() {
    int x1, y1;
    cout << "Enter x and y coordinates: ";
    cin >> x1 >> y1;
    Distance d(x1, y1);
    d.calDist();
    cout << "\nAbhay Raj, 00976803122";
}
