#include "car.h"

Car::Car(string newBrand, string newModel, int newYearModel)
{
    brand = newBrand;
    model = newModel;
    yearModel = newYearModel;
}

void Car::printData()
{
    cout << "Brand:\t" << brand << endl;
    cout << "Model:\t" << model << endl;
    cout << "Year:\t" << yearModel << endl << endl;
}
