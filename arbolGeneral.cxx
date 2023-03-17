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


template<class T>
bool arbolGeneral<T>::insertNode(nodoGeneral<T>*,T& padre){


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

    if(this->isEmpty()){
        return -1;

    }else{

        return this->height(this->root);

    }

}

template<class T>
int arbolGeneral<T>::height(nodoGeneral<T>* node){

    int h=-1;
    list<nodoGeneral<T>*>::iterator it_desc;
    
    if(node->leafNode()){

        alt = 0;
    }else{

        int desc_h;
        list<nodoGeneral<T>*>::iterator it_desc;
        
        for(it_desc = node.desc.begin(); it_desc != node.desc.end(); it_desc++){
            
            desc_h = this->height(*it_desc);
            
            if(h < desc_h+1){

                h = desc_h+1;
            }

        }
    }

    return alt;

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