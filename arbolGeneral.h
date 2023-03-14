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
        bool isEmpty();
        nodoGeneral<T>* getRoot();
        void setRoot(nodoGeneral<T>* nraiz);
        bool insertNode(T& padre, T& n);
        bool deleteNode(T& n);

        bool search(T& n);
        unsigned int height();
        unsigned int size();
        void preOrder();
        void inOrder();
        void posOrder();

};

#include "arbolGeneral.cxx"
#endif 