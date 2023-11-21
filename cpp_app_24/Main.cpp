#include "box.h"
#include "content.h"
#include <string>  

int main()
{
    Box washingMachineBox;
    washingMachineBox.setDimensions(60.0, 80.0, 100.0);

    Content washingMachineContent;
    washingMachineContent.setParameters(1500.0, 1200, 40);

    washingMachineContent.startWashing();

    return 0;
}