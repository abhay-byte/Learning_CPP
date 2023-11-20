#include <iostream>
#include <string>
using namespace std;
class Str {
private:
    string str;int len;
public:
    Str() {cout << "Enter String:\n";cin >> str;
        len = str.length();}
    Str(const string& s) : str(s) {
        len = str.length();}
    Str operator+(const Str& s)  {
        Str result(str + s.str);
        return result;}
    Str& operator=(const Str& s) {
        str = s.str;len = s.len;
        return *this;}
    bool operator<=(const Str& s)  {
        return (len <= s.len);}
    void dispLen() const {
        cout << "length = " << len << endl;}
    void toLower() {
        for (int i = 0; i < len; i++) {
            int t = str[i];
            if (t >= 'A' && t <= 'Z') {
                t += 32;str[i] = (char)t;}}}
    void toUpper() {
        for (int i = 0; i < len; i++) {
            int t = str[i];
            if (t >= 'a' && t <= 'z') {
                t -= 32;str[i] = (char)t;}}}
    void disp()  {
        for (int i = 0; i < len; i++)cout << str[i];
        cout << endl;}
};
int main() {
    Str a, b;a = a + b;
    cout << "Concatenation: ";a.disp();
    a.toLower();cout << "To Lowercase: ";
    a.disp();if (a <= b) cout <<"First is greater\n";
    else cout <<"Second is greater\n";
    a = b; cout << "Assignment: ";a.disp();
    cout << "\nAbhay Raj, 00976803122";
}
