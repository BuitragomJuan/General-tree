#include "arbolGeneral.h"
#include "nodoGeneral.h"
#include <iostream>
using namespace std;

template< class T>
arbolGeneral<T>::arbolGeneral(){
    this->root = NULL:
}

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

    //if the tree is empty, new node and assign it as the root of it
    if(this->isEmpty()){

        nodoGeneral<T> node = new nodoGeneral<T>();

        this->setRoot(node);
    }else{

        //if there's at least one node in the tree:
        // -check if actual node is == to father's given node
        // -if it is the father, insert the new node there
        //-if it's not, check every son and call insert in there

    }

}


template <class T>
bool arbolGeneral<T>::deleteNode(T& n){

    //if the tree is empty return
    if(this->isEmpty()){
        return false;
    }

    //if root is the one to be deleted
    // -delete in root
    // -set root to NULL

    //if there's at least one node on the tree:
    // -if one of the sons is the one i want to delete:
    // -if none of the sons is the one i want to delete:
    // -check every son node and call delete there



}

template<class T>
bool arbolGeneral<T>::search(T& n){

    if(this->isEmpty()){
        
        return false;
    }else{
        //compare actual node data with given data as parameter
        //if it is, return it was found
        //if it is not, for every son node call search

    }
    
    
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
void arbolGeneral<T>::preOrder(nodoGeneral<T>* node){

    cout << node->getData()<<" ";

    list<nodoGeneral<T>* >::iterator it;

    for(it = this->desc.begin(); it != this->desc.end(); it++){
        
        this->preOrder(*it);
    }



}

template<class T>
void arbolGeneral<T>::inOrder(){

    //NON RECURSIVE (NOR ITERATIVE)
    //locate in the root
    //place the root in a queue
    //create a cycle while there's somtng on the queue
    // -substract the first one available on the queue
    // print its data
    // insert in the queue all its descendants
    
}

template<class T>
void arbolGeneral<T>::posOrder(){

    //call posOrder on every descendant 
    //print on screen the value of the actual node
    
}


template<class T>
unsigned int arbolGeneral<T>::size(){

    //if empty return 0
    //for each son, call size
    //store all the sizes in a variable
    //return all the accumulated sizes + 1 

}