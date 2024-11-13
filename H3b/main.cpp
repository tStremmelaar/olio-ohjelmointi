#include "animal.h"
#include "dog.h"

#include <windows.h>

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    Animal *ptrAnimal = new Animal();
    ptrAnimal->callOut();
    delete ptrAnimal;
    ptrAnimal = nullptr;
    return 0;
}
