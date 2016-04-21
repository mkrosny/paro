#pragma once
#include <string>
#include <memory>
#include <SqlDataSaver.hpp>
#include <Saving.hpp>


class Logger
{
public:
    Logger(SqlAdress adress);
    void log(std::string log);
private:
    std::unique_ptr<SqlDataSaver> dataSaver;
};



