#include "content.h"
#include "logger.h"
#include <string>  

Content::Content() : power(0.0), spinSpeed(0), heatingTemperature(0) {}

Content::Content(double power, int spinSpeed, int heatingTemperature)
    : power(power), spinSpeed(spinSpeed), heatingTemperature(heatingTemperature) {}

void Content::setParameters(double power, int spinSpeed, int heatingTemperature) {
    this->power = power;
    this->spinSpeed = spinSpeed;
    this->heatingTemperature = heatingTemperature;
}

void Content::startWashing() const {
    Logger::log("Washing machine is started.");
    Logger::log("Power: " + std::to_string(power) + "W");
    Logger::log("Spin Speed: " + std::to_string(spinSpeed) + " RPM");
    Logger::log("Heating Temperature: " + std::to_string(heatingTemperature) + "°C");
}