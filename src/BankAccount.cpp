#include "BankAccount.hpp"

int BankAccount::getBalance() const
{
    return balance;
}

void BankAccount::decrementBalance(unsigned int decrementBy)
{
    balance -= decrementBy;
}

void BankAccount::incrementBalance(unsigned int incrementBy)
{
    balance += incrementBy;
}
