#include "nodoGeneral.h"
#include <iostream>
#include <list>
using namespace std;


template<class T>
nodoGeneral<T>::nodoGeneral(){

}

template<class T>
nodoGeneral<T>::~nodoGeneral(){


}

template<class T>
void nodoGeneral<T>::setData(T& data){

    this->data = data;

}

template <class T>
T& nodoGeneral<T>::getData(){

    return this->data;

}

template<class T>
void nodoGeneral<T>::clearList(){


}

template <class T>
void nodoGeneral<T>::addDesc(T& nval){

    this->desc.push_back(nval);

}

template<class T>
void nodoGeneral<T>::deleteDesc(T& val){


}


