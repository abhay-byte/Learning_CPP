//
// Created by Generic Computing on 14-09-2023.
//
#include <cstring>
#ifndef LEARNING_C___BANKDATA_H
#define LEARNING_C___BANKDATA_H


class BankData {

    public:
        enum AccountType{SAVINGS, CURRENT};
        BankData(int accountNumber,AccountType accountType,float bankBalance,char accountHolderName[]) {
            this->accountNumber = accountNumber;
            this->accountType = accountType;
            this->bankBalance = bankBalance;
            strcpy(this->accountHolderName,accountHolderName);
        }

        int accountNumber;
        AccountType accountType;
        float bankBalance;
        char accountHolderName[];
};


#endif //LEARNING_C___BANKDATA_H
