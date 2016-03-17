#include <iostream>
#include <stdexcept>
#include <memory>

using namespace std;


class DError: public logic_error
{
public:
DError(const string msg):logic_error(msg)
{
}
};

class Resource
{ 
public:
    void use(const char* N)
    {
        cout << "Using resource. Passed " << *N << endl;
        if (*N == 'd')
        {
	throw DError("Passed d. d is prohibited");
        }
    };
};

int main(int argc, char* argv[])
{
    if(argc != 2)
    {
        cerr << "You need to pass 1 argument" << endl;
        exit(-1);
    }
    const char* N = argv[1];

    try
    {
        auto rsc = unique_ptr<Resource> (new Resource);
        rsc->use(N);
    }
    catch (DError & e)
    {
        cout << e.what() << endl;
    }
    return 0;
}

