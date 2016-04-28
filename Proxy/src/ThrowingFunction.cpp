#include <ThrowingFunction.hpp>
#include <HeavyClass.hpp>
#include <stdexcept>
#include <./MySmartPtr/MySmartPtr.hpp>

void throwingFunction()
{
    HeavyClass* c = new HeavyClass;
    MySmartPtr<HeavyClass> aHeavyInstance(c);
    aHeavyInstance->printMe();
    (*aHeavyInstance).printMe();

    throw std::runtime_error("Some error");

    delete(&aHeavyInstance);
}
