#ifndef ASSOCIATIONA_H
#define ASSOCIATIONA_H

#include "classb.h"

class AssociationA
{
private:
    ClassB objectB;
public:
    AssociationA(ClassB);
    string getBinfo();
    void setBinfo(string);
};

#endif // ASSOCIATIONA_H
