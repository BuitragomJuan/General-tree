#include <iostream>
#include "arbolGeneral.h"
#include "nodoGeneral.h"
using namespace std;

int main(){

    char nuevo;
    int root;
    int nnode,fnode;

    cout<<"ingresar la raiz del arbol a crear: "<<endl;
    cin>>root;

    arbolGeneral<int> *tree = new arbolGeneral<int>(root);

    cout<<"raiz del arbol: "<<tree->getRoot();


    do{

        bool added;
        cout<< "Ingresar un nodo (y/n)?"<<endl;
        cin>>nuevo;

        if(nuevo == 'y'){

            cout<<"ingrese el valor del nuevo nodo: ";
            cin>> nnode;

            cout<<"ingrese el valor del padre del nuevo nodo: ";
            cin>> fnode;

            added = tree->insertNode(fnode,nnode);

            if(!added)
                cout<<"el nodo padre no existe en el arbol."<<endl
            else
                cout<<"nodo agregado correctamente al arbol"<<endl;
            
        }


    }while(nuevo == 'y');
    

    


}