#ifndef BOILER_H
#define BOILER_H

#include <string>

struct Boiler
{
    std::string firm;
    std::string color;
    double power;
    double volume;
    double heatingTemperature;

    Boiler(std::string firm, std::string color, double power, double volume, double heatingTemperature);

};


#endif 
