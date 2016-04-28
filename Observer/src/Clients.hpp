#pragma once
#include <Database.hpp>

class Chart
{
public:
    Chart(Database& db);
    void plot();
private:
    Database& database;
};

class Calculator
{
public:
    Calculator(Database& db);
    void recalculate();
private:
    Database& database;
};

class EmailSender
{
public:
    EmailSender(Database& db);
    void send();
private:
    Database& database;
};
