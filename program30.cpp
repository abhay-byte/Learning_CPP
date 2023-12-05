#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
int main() {
    ifstream file("example.txt");
    string word;
    while (file >> word) cout << word << '\n';
    file.close();
    cout<<"\nAbhay Raj, 00976803122";
}
