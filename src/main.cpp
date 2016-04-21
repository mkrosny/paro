#include <memory>

#include "Console.hpp"
#include "Handlers.hpp"

using namespace std;

int main()
{
    Console console;

    console.addHandler(std::unique_ptr<CommandHandler>(new Quitter));
    console.addHandler(std::unique_ptr<CommandHandler>(new Printer));

    console.run();
    return 0;
}
