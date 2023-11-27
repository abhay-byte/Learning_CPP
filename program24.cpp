#include <iostream>
#include <cmath>
using namespace std;
class Shape {
public:
    float area(float a, float b, float c) {
        float s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));}
    float area(float l, float w) {return l * w;}
    float area(float s) {return s * s;}
    float area(double radius) {return 3.14 * radius * radius;}
};
int main() {
    Shape shape;
    float triangleArea = shape.area(3.0, 4.0, 5.0);
    cout << "Area of triangle: " << triangleArea << endl;
    float rectangleArea = shape.area(6.0, 8.0);
    cout << "Area of rectangle: " << rectangleArea << endl;
    float squareArea = shape.area(4.0);
    cout << "Area of square: " << squareArea << endl;
    float circleArea = shape.area(2.5);
    cout << "Area of circle: " << circleArea << endl;
    cout<<("\nAbhay Raj, 00976803122");
}
