#include "animal.h"
#include "logger.h"

void Animal::fillContent(const std::string& name, const std::string& animalClass, const std::string& nickname) 
{
    content.name = name;
    content.animalClass = animalClass;
    content.nickname = nickname;
}

void Animal::displayContent() 
{
    Logger::log("Animal Information:");
    Logger::log("Name: " + content.name);
    Logger::log("Class: " + content.animalClass);
    Logger::log("Nickname: " + content.nickname);
}

void Animal::makeSound()
{
    Logger::log("Animal sound: Hissing");
}
