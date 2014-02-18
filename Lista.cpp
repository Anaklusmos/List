#include "Lista.h"
#include "Nodo.h"

#include <iostream>

using namespace std;
Lista::Lista()
{
    inicio=NULL;
}

Lista::~Lista()
{
    //dtor
}

void Lista::imprimir()
{
    for (Nodo*temp=inicio; temp!=NULL; temp=temp->siguiente)
        {
           cout<<temp->num<<endl;
        }
}

void Lista::agregarNodo(Nodo*n)
{
    if (inicio == NULL)
    {
        inicio=n;
    }else
    {
        Nodo*temp
        for (temp=inicio; temp->sig!=NULL; temp=temp->siguiente);
            temp->sig=n;
    }
}

void Lista::borrarUltimo()
{
    if (inicio==NULL)
    {
        return;
    }if (inicio->siguiente==NULL)
    {
        delete inicio;
        inicio=NULL;
        return;
    }
    Nodo*temp;
    for (temp=inicio;
        temp->siguiente->siguiente!=NULL;
        temp=temp->siguiente);

        delete temp->sig;
        temp->siguiente=NULL;
}

bool Lista::agregarNodo(Nodo*n, int pos)
{
    if (pos==0)
    {
        if (inicio==NULL)
        {
            inicio=n;
            return true;
        }else{
        n->siguiente=inicio;
        inicio=n;
        return true;
        }
    }

    Nodo*temp;
    int i=0;
    for (temp=inicio;
        temp!=NULL;
        temp=temp->siguiente)
        {
            if (i==pos-1)
            {
                n-siguiente=temp->siguiente;
                temp-siguiente=n;
                return true;
            }
            i++;
        }
        return false;
}

bool Lista::borrarNodo(int pos)
{
    Nodo*temp;
    if (pos==0)
    {
        temp=inicio;
        inicio=inicio->siguiente;
        delete temp;
        return true;
    }
    temp=inicio;
    int i=0;
    for(temp=inicio;
        temp!=NULL && i<pos-1;
        temp=temp->siguiente)
        {
            i++;
        }
            if (temp!=NULL){
                Nodo*t2=temp->siguiente->siguiente;
                delete temp->siguiente;
                temp->siguiente=t2;
                return true;
            }else{
                return false;
            }

}
