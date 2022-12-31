#include "vector.h"
#include <iostream>

template <class T>
Vector<T>::Vector()
{
    this->dat = nullptr;
    this->cant = 0;
}

template <class T>
void Vector<T>::add_dato(T nuevo)
{
    T *aux = new T[this->cant+1];
    for (int i=0; i<this->cant; i++)
        aux[i] = this->dat[i];
    aux[this->cant] = nuevo;
    delete[] this->dat;
    this->dat = aux;
    this->cant++;
}

template <class T>
void Vector<T>::eliminar_dato(T dato)
{
    bool a = false;
    T *aux = new T[this->cant-1];
    int cont = 0;
    for (int i=0; i<this->cant; i++){
        if (this->dat[i] != dato){
            aux[cont] = this->dat[i];
            cont++;
        } else
            a = true;
    }
    if (a) {
        this->cant--;
        delete[] this->dat;
        this->dat = aux;
    }
}

template <class T>
int Vector<T>::cantidad()
{
    return this->cant;
}

template <class T>
void Vector<T>::mostrar()
{
    for (int i=0; i<this->cant; i++)
        std::cout<<this->dat[i]<<" ";
    std::cout<<std::endl;
}
