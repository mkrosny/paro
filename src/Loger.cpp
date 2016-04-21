#include <Logger.hpp>
#include<memory>
#include<Saving.hpp>



Logger::Logger(SqlAdress adress)
{
    dataSaver.reset(new SqlDataSaver(adress));
}

void Logger::log(std::string log)
{
    dataSaver->saveData(log);
}


