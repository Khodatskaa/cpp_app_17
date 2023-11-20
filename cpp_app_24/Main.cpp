#include "iron.h"
#include "logger.h"
#include "content.h"

int main() {
    Logger::log("Creating an instance of Iron...");

    // Creating an instance of Iron
    Iron iron("XYZ", "Model123", "Silver", 100, 200, true, 1200);

    // Displaying iron information
    iron.displayInfo();

    // Using the Content class
    Content content;
    content.fillWater(iron);
    content.startIroning(iron);

    Logger::log("Program completed.");

    return 0;
}
