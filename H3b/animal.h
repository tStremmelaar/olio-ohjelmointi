#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
//using namespace std;

class Animal
{
public:
    Animal();
    virtual void callOut();
    virtual ~Animal();
};

#endif // ANIMAL_H