#pragma once
#include "BankAccountClientView.hpp"
#include "BalanceIncrementer.hpp"
#include "BalanceDecrementer.hpp"

class BankAccount: public BalanceIncrementer,public BalanceDecrementer, public BankAccountClientView
{
public:
    void decrementBalance(unsigned int);
    void incrementBalance(unsigned int);
    int getBalance() const;

private:
    int balance{};
};
