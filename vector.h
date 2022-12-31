#ifndef VECTOR_H
#define VECTOR_H


template <class T>
class Vector
{
private:
    int cant;
    T *dat;
public:
    Vector();
    void add_dato(T);
    void eliminar_dato(T);
    int cantidad();
    void mostrar();
};

#endif // VECTOR_H
