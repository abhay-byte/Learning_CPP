#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;
int main() {
    ifstream file("example.txt");
    int wc = 0;
    int sc = 0;
    char ch;
    while (file.get(ch)) {
        if (' '==(ch)) sc++;
        else {
            wc++;
            while (file.get(ch) && !isspace(ch)) {
            }
        }
    }
    file.close();
    cout << "Total words: " << wc << "\n";
    cout << "Total spaces: " << sc << "\n";
    cout<<"\nAbhay Raj, 00976803122";
}
