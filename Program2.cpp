#include <iostream>
#include <random>
using namespace std;


class BankAccount {

    enum Errors { MINIMUM_BALANCE, INVALID_INPUT};

public:
    void Initialise() {

        accountHolderName = InputUserName();

        accountType = InputAccountType();

        availableBalance = InputCreditDeposite();

        accountNumber = GenerateAccountNumber();

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
            ThrowError(MINIMUM_BALANCE);
        }
    }

    void DisplayAccountDetails() {
        cout << "\nACCOUNT DETAILS," << endl
         << "Account Number: " << accountNumber << endl
         << "Account Type: " << accountType << endl
         << "Available Balance: " << availableBalance << endl
         << "Account Holder Name: " << accountHolderName << endl
         << "\n";
    }

private:

    int accountNumber{};
    string accountType;
    float availableBalance{};
    string accountHolderName;

    int accountLastFourDigit{};
    const float minimumAccountBalance = 10000;

    string InputUserName()
    {
        string firstName;
        string lastName;

        cout << "Creating Account In ABC Bank:" << endl;

        cout << "Enter Your First Name:" << endl;
        cin >> firstName;
        cout << "Enter Your Last Name:" << endl;
        cin >> lastName;

        return lastName+" "+firstName;
    }

    string InputAccountType()
    {
        string type;
        cout << "\nEnter which type of account you want to make\n('S' for Saving and 'C' for Current):" << endl;
        cin >> type;
        if(type != "S")
            if(type != "C")
                ThrowError(INVALID_INPUT);

        return type;
    }

    float InputCreditDeposite()
    {
        float credit;
        cout << "\nEnter Money to be deposited\n(Minimum Account Balance is " << minimumAccountBalance << "):"<< endl;
        cin >> credit;
        if(credit < 10000)
            ThrowError(MINIMUM_BALANCE);

        return credit;
    }

    int GenerateAccountNumber()
    {
        int randomNumber = rand() % 900000 + 100000;
        return randomNumber;
    }

    int GetAccountLastFourDigit() {
        int lastFourDigit = accountNumber % 10000;
        return lastFourDigit;
    }

    void ThrowError(Errors error)
    {
        if(error == INVALID_INPUT)
        {
            cout << "Error: Invalid Input.";
        }
        if(error == MINIMUM_BALANCE)
        {
            cout << "Error: Minimum Balance is less than " << minimumAccountBalance <<".";
        }

    }

};

void DisplayNameAndEnrollmentNumber()
{
    cout << "\nProgram Created By,"<< endl
     << "Name: Abhay Raj" << endl
     << "Enrollment Number: 00976803122" << endl;
}

int main()
{
    BankAccount accounts[10];
    for(BankAccount& account : accounts)
    {
        account.Initialise();
        account.DisplayAccountDetails();
    }

    DisplayNameAndEnrollmentNumber();

    return  0 ;
}