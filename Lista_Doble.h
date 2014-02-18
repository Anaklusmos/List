#ifndef LISTA_DOBLE_H
#define LISTA_DOBLE_H
#include "Nodo_Doble.h"

#include <iostream>
using namespace std;
class Lista_Doble
{
    public:
        Nodo_Doble*inicio;
        Lista_Doble();
        virtual ~Lista_Doble();

        void imprimir();
        void agregarNodo(Nodo_Doble*nodo);
        void borrarNodo(int pos);
    protected:
    private:
};

#endif // LISTA_DOBLE_H
