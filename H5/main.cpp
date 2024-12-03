#include <classb.h>
#include <associationa.h>

#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int b = 10;
    cout << "a:n arvo on: " << a << " ja osoite on: "
         << &a << endl;
    cout << "b:n arvo on: " << b << " ja osoite on: "
         << &b << endl;

    int* myPointer = &a;
    cout << "\nPointterin osoittama osoite on: " << myPointer << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: "
         << *myPointer << endl;

    myPointer = &b;
    cout << "\nPointterin osoittama osoite on: " << myPointer << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: "
         << *myPointer << endl;

    int& refA = a;
    cout << "\nrefA osoittaa osoitteeseen: " << &refA << endl;
    cout << "refA:n osoittaman muistipaikan arvo on: "
         << refA << "\n" << endl;

    refA = b;
    // refA:ta ei saa osoittamaan b:n osoitteeseen


    ClassB objB;
    objB.setInfo("Olion B asettama info");

    AssociationA objAss(objB);
    objAss.setBinfo("Olion objAss asettama info");

    cout << "Assosiaatio esimerkki:" << endl;
    cout << "objB: " << objB.getInfo() << endl;
    cout << "objAss: " << objAss.getBinfo() << endl;

    return 0;
}
