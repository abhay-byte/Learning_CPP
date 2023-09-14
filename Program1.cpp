#include <iostream>
#include <cstring>
using namespace std;

class BankData {
public:
    enum AccountType { SAVINGS, CURRENT };

    int accountNumber;
    AccountType accountType;
    float bankBalance;
    char accountHolderName[100];
};

class BankDetails {
public:
    int accountLastFourDigit;
    const float minimumAccountBalance = 10000;

    void CreateBankAccount(const BankData& data) {

        accountNumber = data.accountNumber;
        accountType = data.accountType;
        availableBalance = data.bankBalance;
        strcpy(accountHolderName, data.accountHolderName);
        accountLastFourDigit = GetAccountLastFourDigit();

    }

    void CreditFunds(float credit) {
        availableBalance += credit;
        cout << "Your Account XX" << accountLastFourDigit << " has been credited with INR " << credit << "." << endl;
    }

    void DebitFunds(float debit) {
        if (availableBalance - debit >= minimumAccountBalance) {
            availableBalance -= debit;
            cout << "Your Account XX" << accountLastFourDigit << " has been debited with INR " << debit << "." << endl;
        }
        else {
            cout << "Your Account XX" << accountLastFourDigit << " doesn't have enough funds at the moment." << endl;
        }
    }

    void ShowAllAccountDetails() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Available Balance: " << availableBalance << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "\n";
    }

private:
    int accountNumber;
    BankData::AccountType accountType;
    float availableBalance;
    char accountHolderName[100];

    int GetAccountLastFourDigit() {
        int lastFourDigit = accountNumber % 10000;
        return lastFourDigit;
    }

};

int main()
{
    // Data for 10 bank accounts
    BankData account1 = { 123456, BankData::SAVINGS, 15000.0, "John Doe" };
    BankData account2 = { 789012, BankData::CURRENT, 25000.0, "Alice Smith" };
    BankData account3 = { 345678, BankData::SAVINGS, 12000.0, "Bob Johnson" };
    BankData account4 = { 901234, BankData::CURRENT, 5000.0, "Eve Brown" };
    BankData account5 = { 567890, BankData::SAVINGS, 30000.0, "David Lee" };
    BankData account6 = { 234567, BankData::SAVINGS, 8000.0, "Sarah Adams" };
    BankData account7 = { 678901, BankData::CURRENT, 7500.0, "Michael Clark" };
    BankData account8 = { 123789, BankData::SAVINGS, 20000.0, "Linda White" };
    BankData account9 = { 456789, BankData::SAVINGS, 18000.0, "Robert Taylor" };
    BankData account10 = { 987654, BankData::CURRENT, 35000.0, "Karen Wilson" };

// Create 10 instances of the BankDetails class
    BankDetails accountDetails1;
    accountDetails1.CreateBankAccount(account1);

    BankDetails accountDetails2;
    accountDetails2.CreateBankAccount(account2);

    BankDetails accountDetails3;
    accountDetails3.CreateBankAccount(account3);

    BankDetails accountDetails4;
    accountDetails4.CreateBankAccount(account4);

    BankDetails accountDetails5;
    accountDetails5.CreateBankAccount(account5);

    BankDetails accountDetails6;
    accountDetails6.CreateBankAccount(account6);

    BankDetails accountDetails7;
    accountDetails7.CreateBankAccount(account7);

    BankDetails accountDetails8;
    accountDetails8.CreateBankAccount(account8);

    BankDetails accountDetails9;
    accountDetails9.CreateBankAccount(account9);

    BankDetails accountDetails10;
    accountDetails10.CreateBankAccount(account10);

    // Assuming you have created 10 instances as shown in the previous response

// Show details for account 1
    accountDetails1.ShowAllAccountDetails();

// Show details for account 2
    accountDetails2.ShowAllAccountDetails();

// Show details for account 3
    accountDetails3.ShowAllAccountDetails();

// Show details for account 4
    accountDetails4.ShowAllAccountDetails();

// Show details for account 5
    accountDetails5.ShowAllAccountDetails();

// Show details for account 6
    accountDetails6.ShowAllAccountDetails();

// Show details for account 7
    accountDetails7.ShowAllAccountDetails();

// Show details for account 8
    accountDetails8.ShowAllAccountDetails();

// Show details for account 9
    accountDetails9.ShowAllAccountDetails();

// Show details for account 10
    accountDetails10.ShowAllAccountDetails();


    return  0 ;
}