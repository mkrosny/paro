#include <Logger.hpp>
#include <SqlDataSaver.hpp>

int main()
{
    SqlAdress adress("127.0.0.1");
    std::unique_ptr<Saver> dataSaver(new SqlDataSaver(adress));
    Logger logger(dataSaver);
    logger.log("ciekawy log 1");
    logger.log("ciekawy log 2");
    logger.log("ciekawy log 3");
 }
