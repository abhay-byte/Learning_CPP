#include <iostream>
using namespace std;
class shape{
public:
virtual void area () = 0;
};
class triangle: public shape{
private:
    int l,b,a;
public:
    triangle() {l=10;b=20;}
    void area () {a = 0.5*l*b;
    cout<< "Area of triangle:\n"<< a;}};
class rectangle: public shape{
private:
    int l,b,a;
public:
    rectangle() {l=10;b=20;}
    void area(){a = l*b;
    cout<< "\nArea of rectangle:\n"<< a;}};
class circle: public shape{
private:
    int r,a;
public:
    circle(){r = 25;}
    void area(){a = 3.14*r*r;
    cout<< "\nArea of circle:\n"<< a;}};
int main(){
    triangle t; rectangle r; circle c;
    shape* s = &t; s->area(); s = &r;
    s->area(); s = &c; s->area();
    printf("\nAbhay Raj, 00976803122");
}
