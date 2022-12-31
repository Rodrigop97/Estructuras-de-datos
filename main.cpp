#include <iostream>
#include "pila.cpp"
#include "vector.cpp"
using namespace std;

int main()
{
    /*
    Pila<int> p;
    if (p.pila_vacia())
        std::cout<<"Vacia"<<std::endl;
    p.pila_agregar(3);
    p.pila_agregar(12);
    p.pila_agregar(8);
    p.pila_obtener();
    std::cout<<p.pila_obtener()<<std::endl;
    p.pila_agregar(34);
    p.pila_agregar(60);
    p.pila_agregar(1);
    while(!p.pila_vacia())
        std::cout<<p.pila_obtener()<<std::endl;
    */

    Vector<int> v;
    int x;
    v.add_dato(32);
    v.mostrar();
    for(int i=0; i<4; i++){
        std::cout<<"Ingresar numero: ";
        std::cin>>x;
        v.add_dato(x);
    }
    v.mostrar();
    std::cout<<"Ingresar numero a eliminar: ";
    std::cin>>x;
    v.eliminar_dato(x);
    v.mostrar();

    return 0;
}
