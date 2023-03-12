#ifndef __ARBOLGENERAL_H__
#define __ARBOLGENERAL_H__
#include "nodoGeneral.h"
template < class T >
class arbolGeneral{

    private:
        nodoGeneral<T>* root;

    public:
        arbolGeneral();
        arbolGeneral(T& val);
        ~arbolGeneral();
        bool esVacio();
        nodoGeneral<T>* getRoot();
        void setRoot(nodoGeneral<T>* nraiz);
        bool insertarNodo(T& padre, T& n);
        bool eliminarNodo(T& n);

        bool buscar(T& n);
        unsigned int height();
        unsigned int size();
        void preOrder();
        void inOrder();
        void posOrder();

};

#include "arbolGeneral.cxx"
#endif 