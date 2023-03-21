#include "nodoGeneral.h"
#include <iostream>
#include <list>
using namespace std;


template<class T>
nodoGeneral<T>::nodoGeneral(){

}

template<class T>
nodoGeneral<T>::~nodoGeneral(){

    list<nodoGeneral<T> >::iterator itr_desc;

    for(itr_desc = this->desc.begin(); itr_desc != this->desc.end(); it_desc++){
        delete *it_desc;
    }

    this->desc.clear();


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

    this->desc.clear();


}

template <class T>
void nodoGeneral<T>::addDesc(T& nval){

    nodoGeneral<T>* node = new nodoGeneral<T>*();

    node->setData(nval);
    
    this->desc.push_back(node);

}

template<class T>
bool nodoGeneral<T>::deleteDesc(T& val){

    //search node with the given value
    list<nodoGeneral<T>*>::iterator it_desc;
    nodoGeneral<T> *aux;
    bool deleted=false;
    for(it_desc = this->desc.begin(); it_desc != this->desc.end(); it_desc++){

        aux = *it_desc;

        if(aux->getData() == val){
            break;
        }
    }

    //if found, eliminate it
    if(it_desc != this->desc.end()){
        delete *it_desc;
        this->desc.erase(it_desc);
        deleted = true;
    }

    return deleted;

}

template<class T>
bool nodoGeneral<T>::leafNode(){
    return this->desc.size() == 0;
}