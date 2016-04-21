#include "Handlers.hpp"

#include <iostream>

using namespace std;

CommandHandler::Result Quitter::handle(const string& command, const vector<string>& parameters) const
{
    if (command != "quit")
        return Result::Declined;
    cout << "Console has quitted!" << endl;
    exit(0);
}

CommandHandler::Result Printer::handle(const string& command, const vector<string>& parameters) const
{
    if (command != "print")
        return Result::Declined;
    cout << parameters[0] << endl;
    return Result::Accepted;
}

CommandHandler::Result Sum::handle(const string& command, const vector<string>& parameters) const
{
  int s,t;
    if (command != "sum")
      return Result::Declined;
    t=parameters.size();
    cout << t;
    // while(t>1){
    //   s+=stoi(parameters.at(t));
    //   t--;
    // }
    cout << s << endl;
    return Result::Accepted;
}
