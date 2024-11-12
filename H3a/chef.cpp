#include "chef.h"

Chef::Chef(string newName)
{
    name = "Chef " + newName + " ";
    cout << name << "konstruktori" << endl;
}

void Chef::makeSalad()
{
    cout << name << "makes salad" << endl;
}

void Chef::makeSoup()
{
    cout << name << "makes soup" << endl;
}

Chef::~Chef()
{
    cout << name << "destruktori" << endl;
}
