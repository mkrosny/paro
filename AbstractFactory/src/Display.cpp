#include <Display.hpp>
#include <UnsupportedSystemException.hpp>
#include <Windows.hpp>
#include <Kde.hpp>


Display::Display(const std::string system)
{
    if(system == "WINDOWS")
    {
        allWidgets.push_back(std::make_shared<WindowsLabel>());
        allWidgets.push_back(std::make_shared<WindowsSlider>());
        allWidgets.push_back(std::make_shared<WindowsButton>());
        return;
    }
    if(system == "KDE")
    {
        allWidgets.push_back(std::make_shared<KdeLabel>());
        allWidgets.push_back(std::make_shared<KdeSlider>());
        allWidgets.push_back(std::make_shared<KdeButton>());
        return;
    }

    throw UnsupportedSystem(system);
}


void Display::display()
{
    for(std::shared_ptr<Widget> widget : allWidgets )
    {
        widget->draw();
    }
}
