#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;
int main() {
    ifstream input("example.txt");
    ofstream output("output.txt");
    char ch;
    while (input.get(ch)) {
        if (!isspace(ch)) output.put(ch);
    }
    input.close();
    output.close();
    cout << "All types space removed and saved to output.txt.\n";
    cout<<"\nAbhay Raj, 00976803122";
}
