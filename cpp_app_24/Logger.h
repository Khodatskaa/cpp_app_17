#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>

struct Logger
{
public:
    void log(const std::string& message) const
    {
        std::cout << "LOG: " << message << std::endl;
    }
};

#endif 