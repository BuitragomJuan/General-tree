#include "arbolGeneral.h"
#include "nodoGeneral.h"
#include <iostream>
using namespace std;


arbolGeneral::arbolGeneral(){

}

template <class T>
arbolGeneral::arbolGeneral(T& val ){

}

arbolGeneral::~arbolGeneral(){

}

bool arbolGeneral::isEmpty(){

}

template< class T>
nodoGeneral<T>* arbolGeneral::getRoot(){

    return this;
}

template <class T>
void arbolGeneral::setRoot(nodoGeneral<T>* nroot){

}

template< class T >
bool arbolGeneral::insertNode(T& padre, T& n){

}

template <class T>
bool arbolGeneral::deleteNode(T& n){

}

template<class T>
bool arbolGeneral::search(T& n){
    
}

unsigned int arbolGeneral::height(){

}

unsigned int arbolGeneral::size(){


}

void arbolGeneral::preOrder(){

}

void arbolGeneral::inOrder(){
    
}

void arbolGeneral::posOrder(){
    
}