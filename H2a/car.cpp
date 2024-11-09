#include "car.h"

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}

void Car::printData()
{
    cout << "Brand:\t" << brand << endl;
    cout << "Model:\t" << model << endl;
    cout << "Year:\t" << yearModel << endl;
}

Car::Car() {}
