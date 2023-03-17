#include "arbolGeneral.h"
#include "nodoGeneral.h"
#include <iostream>
using namespace std;

template <class T>
arbolGeneral<T>::arbolGeneral(T& val ){

    nodoGeneral<T>* nodo = new nodoGeneral<T>;
    nodo->setDato(val);

    this->root=nodo;

}

template<class T>
arbolGeneral<T>::~arbolGeneral(){
    
    delete this->root;
    this->root= NULL;

}

template<class T>
bool arbolGeneral<T>::isEmpty(){

    if(this->root == NULL){
        
        return true;
    }else{return false;}

}

template< class T>
nodoGeneral<T>* arbolGeneral<T>::getRoot(){

    return this->root;

}

template <class T>
void arbolGeneral<T>::setRoot(nodoGeneral<T>* nroot){

    this->root = nroot;

}

template< class T >
bool arbolGeneral<T>::insertNode(T& padre, T& n){

    bool added=false,existence=false;

    if(this->isEmpty()){
        
        ArbolGeneral<T>* tree = new ArbolGeneral<T>(n);
        added = true;

    }else{

        existence = this->search(padre);

        if(existence){

            nodoGeneral<T>* fnode = new nodoGeneral<T>();

            


            
        }else{}

        

    }


    return added;

}

template <class T>
bool arbolGeneral<T>::deleteNode(T& n){

}

template<class T>
bool arbolGeneral<T>::search(T& n){

    
    
}

template<class T>
unsigned int arbolGeneral<T>::height(){

}

template<class T>
unsigned int arbolGeneral<T>::size(){


}

template<class T>
void arbolGeneral<T>::preOrder(){

}

template<class T>
void arbolGeneral<T>::inOrder(){
    
}

template<class T>
void arbolGeneral<T>::posOrder(){
    
}