#include <iostream>
using namespace std;
class BankAccount {
public:
    void Initialise() {
        cout << "Enter,\nYour Name:"; cin >> accName;
        cout << "Acc. Type (S,C):"; cin >> accT;
        cout << "Money:"; cin >> avBal;
        cout << "Acc. No.:"; cin >> accNo;
    }
    void Deposite(float c) { avBal += c; }
    void Withdraw(float d) {
        if (avBal - d >= 10000)
            avBal -= d;
    }
    void ShowData() {
        cout << "\nACCOUNT DETAILS,\n"
             << "\nAcc No.: " << accName
             << "\nAcc Type: " << accT
             << "\nAvailable Balance: " << avBal
             << "\nAcc Name: " << accName+"\n";
    }
private:
    int accNo; string accT;
    float avBal; string accName;
};
int main(){
    BankAccount accounts[10];
    for(BankAccount& account : accounts){
        account.Initialise(); account.ShowData();
    }
    cout << "\nAbhay Raj, 00976803122";
}