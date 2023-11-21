#ifndef ANIMAL_H
#define ANIMAL_H

#include "content.h"

struct Animal 
{
public:
    void fillContent(const std::string& name, const std::string& animalClass, const std::string& nickname);
    void displayContent();
    void makeSound();

private:
    Content content;
};

#endif 