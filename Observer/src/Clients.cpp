#include <Clients.hpp>
#include <iostream>

Chart::Chart(Database &db)
    :database(db)
{
}

Calculator::Calculator(Database &db)
    :database(db)
{
}

EmailSender::EmailSender(Database &db)
    :database(db)
{
}

void Calculator::recalculate()
{
    std::cout << "Calculator::recalculate()   " << database.getData("calculator") << "\n";
}

void EmailSender::send()
{
    std::cout << "EmailSender::send()   " << database.getData("email") << "\n";
}

void Chart::plot()
{
    std::cout << "Chart::plot()   " << database.getData("chart") << "\n";
}
