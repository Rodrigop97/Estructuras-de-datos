#ifndef PILA_H
#define PILA_H


template <class T>
struct nodo{
    T dato;
    nodo *link = nullptr;
};

template <class T>
class Pila
{
private:
    nodo<T> *tope;

public:
    Pila();
    T pila_obtener();
    void pila_agregar(T);
    bool pila_vacia();
};

#endif // PILA_H
