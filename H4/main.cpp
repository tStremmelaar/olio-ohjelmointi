#include "car.h"

int main()
{
    Car objCar("Toyota", "Corolla");
    objCar.setEngine();
    objCar.setWheels();
    objCar.printDetails();
    return 0;
}
