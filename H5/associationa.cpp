#include "associationa.h"

AssociationA::AssociationA(ClassB value):objectB(value)
{
}

string AssociationA::getBinfo()
{
    return objectB.getInfo();
}

void AssociationA::setBinfo(string value)
{
    objectB.setInfo(value);
}
