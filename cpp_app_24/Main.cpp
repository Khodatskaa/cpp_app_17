#include "animal.h"

int main() 
{
    Animal myAnimal;

    myAnimal.fillContent("Lizard", "Reptiles", "Lizz");

    myAnimal.displayContent();

    myAnimal.makeSound();

    return 0;
}
