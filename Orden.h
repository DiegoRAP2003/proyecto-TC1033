#ifndef ORDEN_H
#define ORDEN_H
#include "Cafe.h"
#include <iostream>

using namespace std;

const int MAX = 100;

#pragma once

class Orden{

    private:
        Capuccino lista_capuccino[MAX];
        Americano lista_americano[MAX];
        Latte lista_latte[MAX];
        int icapuccino,iamericano,ilatte;

    public:
        Orden();
        void agrega_capuccino(int leche, float temperatura, int cantidad);
        void agrega_americano(float temperatura, int cantidad);
        void agrega_latte(int leche, float temperatura, int cantidad);
        void pago_total();


};

Orden::Orden(){
    icapuccino = 0;
    iamericano = 0;
    ilatte = 0;
}

void Orden::agrega_capuccino(int leche,float temperatura,int cantidad){
    icapuccino += 1;
    Capuccino aux(leche,temperatura,cantidad);
    aux.imprime_capuccino();
    lista_capuccino[icapuccino] = aux;
}

void Orden::agrega_americano(float temperatura,int cantidad){
    icapuccino += 1;
    Americano aux(temperatura,cantidad);
    aux.imprime_americano();
    lista_americano[iamericano] = aux;
}

void Orden::agrega_latte(int leche,float temperatura,int cantidad){
    icapuccino += 1;
    Latte aux(leche,temperatura,cantidad);
    aux.imprime_latte();
    lista_latte[ilatte] = aux;
}

void Orden::pago_total(){
    double total = 0;
    for(int i = 0; i <= icapuccino; i++){
        total += lista_capuccino[i].calcula_precio();
    }
    for(int i = 0; i <= iamericano; i++){
        total += lista_americano[i].calcula_precio();
    }
    for(int i = 0; i<= ilatte; i++){
        total += lista_latte[i].calcula_precio();
    }
    
    cout<<"Su total a pagar es: "<<total<<" pesos"<<endl;
}

#endif