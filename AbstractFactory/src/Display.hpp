#pragma once

#include <memory>
#include <string>
#include <vector>
#include <Widgets.hpp>

class Display
{
public:
    Display(const std::string system);
    void display();

private:
    std::vector<std::shared_ptr<Widget>> allWidgets;
};

