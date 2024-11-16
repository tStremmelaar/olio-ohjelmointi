#include "dog.h"

Dog::Dog() {}

void Dog::callOut()
{
    std::cout << "Koira haukkuu!" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor" << std::endl;
}
