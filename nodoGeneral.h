#ifndef __NODOGENERAL_H__
#define __NODOGENERAL_H__
#include <list>

template< class T >
class nodoGeneral{

    private:
        T data;
        list< nodoGeneral<T>* > desc;
    public:
        nodoGeneral();
        ~nodoGeneral();
        T& getData();
        void setData(T& val);
        void clearList();
        void addDesc(T& nval);
        bool deleteDesc(T& val);
        bool leafNode();
};

#include "nodoGeneral.cxx"
#endif