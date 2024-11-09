#include "car.h"

#include <vector>

int main()
{
    vector<Car> carList;

    Car firstCar("Citroen", "BX", 1990);
    Car secondCar("Toyota", "Corolla", 1998);
    Car thirdCar("Honda", "Civic", 2001);

    carList.push_back(firstCar);
    carList.push_back(secondCar);
    carList.push_back(thirdCar);

    carList[1].printData();

    for(int i = 0; i < 3; ++i)
    {
        carList[i].printData();
    }

    return 0;
}
