#include "car.h"
#include "rectangle.h"

int main()
{
    Car objCar;
    objCar.setBrand("Toyota");
    objCar.setModel("Corolla");
    objCar.setYearModel(1998);
    objCar.printData();

    Rectangle * objRectangle = new Rectangle;
    objRectangle->setWidth(32.4);
    objRectangle->setHeight(24.4);
    cout << "Area:\t\t" << objRectangle->getArea() << endl;
    cout << "Circumference:\t" << objRectangle->getCircum() << endl << endl;
    delete objRectangle;
    objRectangle = nullptr;

    return 0;
}
