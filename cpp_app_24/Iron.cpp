#include "iron.h"
#include "logger.h"

Iron::Iron(const std::string& firm, const std::string& model, const std::string& color,
    int minTemp, int maxTemp, bool steamSupply, int power)
    : firm(firm), model(model), color(color), minTemp(minTemp), maxTemp(maxTemp),
    steamSupply(steamSupply), power(power) {}

void Iron::displayInfo() const {
    Logger::log("Iron Information:");
    Logger::log("Firm: " + firm);
    Logger::log("Model: " + model);
    Logger::log("Color: " + color);
    Logger::log("Minimum Temperature: " + std::to_string(minTemp));
    Logger::log("Maximum Temperature: " + std::to_string(maxTemp));
    Logger::log("Steam Supply: " + std::string(steamSupply ? "Yes" : "No"));
    Logger::log("Power: " + std::to_string(power));
}
