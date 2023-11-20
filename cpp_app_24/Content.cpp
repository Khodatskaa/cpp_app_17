#include "content.h"
#include "logger.h"

void Content::displayBoilerInfo(const Boiler& boiler) 
{
    Logger::log("Boiler Information:");
    Logger::log("Firm: " + boiler.firm);
    Logger::log("Color: " + boiler.color);
    Logger::log("Power: " + std::to_string(boiler.power));
    Logger::log("Volume: " + std::to_string(boiler.volume));
    Logger::log("Heating Temperature: " + std::to_string(boiler.heatingTemperature));
}
