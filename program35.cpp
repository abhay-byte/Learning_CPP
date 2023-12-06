#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void mergeFiles(const string& f1n, const string& f2n, const string& mn) {
    ifstream f1(f1n);ifstream f2(f2n);
    ofstream m(mn);string l;
    while (getline(f1, l)) m << l << endl;
    while (getline(f2, l)) m << l << endl;
    cout << "Records mergeded!";
    f1.close();f2.close();m.close();
}
int main() {
    mergeFiles("file1.txt", "file2.txt", "file3.txt");
    cout << "\nAbhay Raj, 00976803122";
}
