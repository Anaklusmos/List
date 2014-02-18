#include "Nodo_Doble.h"

Nodo_Doble::Nodo_Doble(int num)
{
    this->num=num;
    this->ant=NULL;
    this->sig=NULL;
    //ctor
}

Nodo_Doble::~Nodo_Doble()
{
    //dtor
}
