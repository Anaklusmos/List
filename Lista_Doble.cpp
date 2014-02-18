#include "Lista_Doble.h"

Lista_Doble::Lista_Doble()
{
    this->inicio=NULL;
    //ctor
}

Lista_Doble::~Lista_Doble()
{
    //dtor
}

void Lista_Doble::imprimir()
{
    for (Nodo_Doble*temp=inicio; temp!=NULL; temp=temp->siguiente)
        {
           cout<<temp->num<<endl;
        }
}

void Lista_Doble::agregarNodo(Nodo_Doble*nodo)
{
    if (inicio==NULL)
    {
        inicio=nodo;
    }else
    {
        Nodo_Doble*temp;
        for (temp=inicio; temp->sig!=NULL; temp=temp->sig)
        {
            temp->sig=nodo;
            n->ant=temp;
        }
    }
}

void ListaDoble::agregarNodo)(Nodo_Doble*nodo, int pos)
{
    Nodo_Doble*temp=inicio;
    for (int i=0; i<pos-1; i++)
    {
        temp=temp->sig;
        if(temp==NULL)
            return;
    }
    temp->sig->ant=nodo;
    nodo->sig=temp->sig;
    nodo->ant=temp;
    temp->sig=nodo;
}

//Parches para agregar nodo al principio o al final porque truena or something. ↑

void ListaDoble::borrarNodo(int pos)
{
    if (inicio==NULL)
        return;

    if (pos==0)
    {
            Nodo_Doble*temp2;
            temp2=inicio->sig;
            delete inicio;
            inicio=temp2;
            inicio->ant=NULL;
            return ;
    }

    Nodo_Doble*temp=inicio;

    for (int i=0; i<pos; i++)
    {
        temp=temp->sig;
        if(temp==NULL)
        {
            return;
        }
    }

    if (temp->sig!=NULL)
        temp->sig->ant=temp->ant;

    temp->ant->sig=temp->sig;
    delete temp;
}
