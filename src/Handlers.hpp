#pragma once

#include "CommandHandler.hpp"
#include <cstdlib>
using namespace std;

struct Quitter : CommandHandler
{
    Result handle(const string&, const vector<string>&) const override;
};

struct Printer : CommandHandler
{
    Result handle(const string&, const vector<string>&) const override;
};

struct Sum : CommandHandler
{
    Result handle(const string&, const vector<string>&) const override;
};
