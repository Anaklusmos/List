#ifndef LISTA_H
#define LISTA_H


class Lista
{
    public:
        Nodo*inicio;
        Lista();
        virtual ~Lista();

        void imprimir();
        void agregarNodo(Nodo*n);
        bool agregarNodo(Nodo*n, int pos);
        void borrarUltimo();
        bool borrarNodo(int pos);
    protected:
    private:
};

#endif // LISTA_H
