#include "animal.h"
#include "dog.h"

int main()
{
    Animal *ptrAnimal = new Animal();
    ptrAnimal->callOut();
    delete ptrAnimal;
    ptrAnimal = nullptr;

    Dog *ptrDog = new Dog();
    ptrDog->callOut();
    delete ptrDog;
    ptrDog = nullptr;
    return 0;
}
