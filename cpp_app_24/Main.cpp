#include "boiler.h"
#include "content.h"

int main()
{
    Boiler myBoiler("HTR Boilers", "Blue", 1800.0, 10.0, 50.0);

    Content::displayBoilerInfo(myBoiler);

    return 0;
}
