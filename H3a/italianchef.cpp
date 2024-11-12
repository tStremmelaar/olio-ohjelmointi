#include "italianchef.h"

ItalianChef::ItalianChef(string newName) : Chef(newName)
{
    cout << "ItalianChef " << name << " konstruktori" << endl;
}

string ItalianChef::getName()
{
    // cout << "name of the Italian Chef is " << name << endl;
    return name;
}

void ItalianChef::makePasta()
{
    cout << "Italian Chef " << name << " makes pasta" << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "ItalianChef " << name << " destruktori" << endl;
}
