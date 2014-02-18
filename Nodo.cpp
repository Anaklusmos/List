#include "Nodo.h"

#include <iostream>
using namespace std;

Nodo::Nodo(int num)
{
    this->num=num;
    this->inicio=NULL;
    //ctor
}

Nodo::~Nodo()
{
    //dtor
}
