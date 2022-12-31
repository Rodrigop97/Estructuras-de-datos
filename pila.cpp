#include "pila.h"

template <class T>
Pila<T>::Pila()
{
    this->tope = nullptr;
}

template <class T>
void Pila<T>::pila_agregar(T dat)
{
    nodo<T> *nuevo = new nodo<T>;
    nuevo->dato = dat;
    nuevo->link = this->tope;
    this->tope = nuevo;
}

template <class T>
bool Pila<T>::pila_vacia()
{
    return (this->tope == nullptr);
}

template <class T>
T Pila<T>::pila_obtener()
{
    int x = this->tope->dato;
    nodo<T> *aux = this->tope;
    tope = aux->link;
    delete aux;
    return x;
}
