#include "animal.h"

Animal::Animal() {}

void Animal::callOut()
{
    std::cout << "Elain aantelee." << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor" << std::endl;
}
