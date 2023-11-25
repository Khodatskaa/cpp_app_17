#ifndef IRON_H
#define IRON_H

#include <string>

struct Iron {
public:
    Iron(const std::string& firm, const std::string& model, const std::string& color,
        int minTemp, int maxTemp, bool steamSupply, int power);

    void displayInfo() const;

private:
    std::string firm;
    std::string model;
    std::string color;
    int minTemp;
    int maxTemp;
    bool steamSupply;
    int power;
};

#endif 
