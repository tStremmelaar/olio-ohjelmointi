#include "car.h"
#include "rectangle.h"
#include "student.h"

#include <memory>

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

    unique_ptr<Student> objStudent = make_unique<Student>();
    objStudent->setName("Teppo Testi");
    objStudent->setStudentNumber(32487);
    objStudent->setAverage(3.22);
    cout << "Name:\t\t" << objStudent->getName() << endl;
    cout << "Student number:\t" << objStudent->getStudentNumber() << endl;
    cout << "Average:\t" << objStudent->getAverage() << endl << endl;
    return 0;
}
