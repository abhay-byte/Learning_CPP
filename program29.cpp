#include <iostream>
#include <fstream>
using namespace std;
int main() {
    fstream file("example.txt");
    cout << "Existing contents:\n";
    string line;
    while (getline(file, line)) cout << line << '\n';
    cout << "\nEnter text:\n";
    string userInput;
    getline(cin, userInput);
    file << userInput << '\n';file.close();
    cout << "Data appended...\n";
    cout<<"\nAbhay Raj, 00976803122";
}
