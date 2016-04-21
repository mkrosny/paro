#pragma once

class BankAccount
{
public:
    void decrementBalance(unsigned int);
    void incrementBalance(unsigned int);
    int getBalance() const;

private:
    int balance{};
};