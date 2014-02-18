#ifndef NODO_DOBLE_H
#define NODO_DOBLE_H

#include <iostream>
using namespace std;

class Nodo_Doble
{
    public:
        Nodo_Doble*sig;
        Nodo_Doble*ant;
        int num;
        Nodo_Doble(int num);
        virtual ~Nodo_Doble();
    protected:
    private:
};

#endif // NODO_DOBLE_H
