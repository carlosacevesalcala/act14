#include <iostream>
#include "arreglo.h"
#include "computadora.h"

using namespace std;

int main(){

    Arreglo<Computadora> computadoras;
    Computadora c01;
    Computadora c02;
    Computadora c03;
    Computadora c04;
    Computadora c05;
    Computadora c06;

    c01.setmarca("hp");
    c01.setso("windows");
    c01.sethdd(1000);
    c01.setram(8);

    c02.setmarca("mac");
    c02.setso("macOS");
    c02.sethdd(2000);
    c02.setram(12);

    c03.setmarca("acer");
    c03.setso("windows");
    c03.sethdd(2500);
    c03.setram(16);

    c04.setmarca("acer");
    c04.setso("windows");
    c04.sethdd(1500);
    c04.setram(8);

    c05.setmarca("lenovo");
    c05.setso("windows");
    c05.sethdd(500);
    c05.setram(4);

    computadoras<<c01<<c02<<c03<<c04<<c05;

    Computadora *ptr = computadoras.buscar(c01);
    
    if (ptr !=nullptr ){
        cout<<*ptr<<endl;
    }
    else
    {
        cout<<"no existe"<<endl;
    }
    Computadora *petr = computadoras.buscar(c06);
    
    if (petr !=nullptr ){
        cout<<*petr<<endl;
    }
    else
    {
        cout<<"no existe"<<endl;
    }

    Arreglo<Computadora*> ptrs = computadoras.buscar_todos(c03);
    
    if(ptrs.size() > 0){
        for (size_t i = 0; i < ptrs.size(); i++)
        {
            Computadora *c = ptrs[i];
            cout<< *c<<endl;
        }
        
    }
    else{
        cout<<"no existe coincidencias"<<endl;
    }

    return 0;
}