#include <string>
#include <iostream>
#ifndef CAFE_H
#define CAFE_H

#pragma once

using namespace std;

class Cafe{
    protected:
        int tipo_leche;
        float temperatura;
        string nombre_leche;
    
    public:
        Cafe();
        Cafe(int leche,float temp):tipo_leche(leche),temperatura(temp){};
        Cafe(float temp):temperatura(temp){};
        string conversion_leche();

};

Cafe::Cafe(){
    tipo_leche = 1;
    temperatura = 0.0;
}

string Cafe::conversion_leche(){
    if (tipo_leche == 1){
        nombre_leche = "deslactosada";
    }else if(tipo_leche == 2){
        nombre_leche = "regular";
    }else if(tipo_leche == 3){
        nombre_leche = "de almendra";
    }
    return nombre_leche;
}

class Capuccino : public Cafe{
    
    protected:    
        int cantidad;
        float precio;
    
    public:
        Capuccino();
        Capuccino(int leche,float temp, int cantidad);
        float calcula_precio();
        void imprime_capuccino();
};

Capuccino::Capuccino(int leche,float temp, int c): Cafe(leche, temp), cantidad(c){}

Capuccino::Capuccino(){
    tipo_leche = 1;
    temperatura = 100.0;
    cantidad = 10;
}

float Capuccino::calcula_precio(){
    if(tipo_leche == 1){
        precio = cantidad * 1.8;
    }else if(tipo_leche == 2){
        precio = cantidad *1.5;
    }else if(tipo_leche == 3){
        precio = cantidad * 1.9;
    }
    
    return precio;
}

void Capuccino::imprime_capuccino(){

    cout<<"Su capuccino con leche "<<conversion_leche()<<" a "<<temperatura<< " grados"<<" ha sido agregado a su orden."<< endl;
}

class Americano:public Cafe{
    private:
        int cantidad;
        float precio;
    public:
        Americano();
        Americano(float temp, int cantidad);
        float calcula_precio();
        void imprime_americano();
};

Americano::Americano(){
    cantidad = 10;
    tipo_leche = 1;
    temperatura = 100.0;

}

Americano::Americano(float temp, int c): Cafe(temp),cantidad(c){
    temperatura = temp;
    cantidad = c;
}

float Americano::calcula_precio(){
    precio = cantidad * 1.4;

    return precio;    
}

void Americano::imprime_americano(){
    cout<<"Su cafe americano a "<<temperatura<< " grados"<<" ha sido agregado a su orden."<< endl;
}

class Latte: public Cafe{
    private:
        int cantidad;
        float precio;
    public:
        Latte();
        Latte(int leche,float temp, int cantidad);
        float calcula_precio();
        void imprime_latte();
};

Latte::Latte(){
    tipo_leche = 1;
    temperatura = 100.0;
    cantidad = 10;
}

Latte::Latte(int leche, float temp, int c){
    tipo_leche = leche;
    temperatura = temp;
    cantidad = c;
}

float Latte::calcula_precio(){
    if(tipo_leche == 1){
        precio = cantidad * 2.2;
    }else if(tipo_leche == 2){
        precio = cantidad *2;
    }else if(tipo_leche == 3){
        precio = cantidad * 2.5;
    }
    
    return precio;

}

void Latte::imprime_latte(){
    cout<<"Su latte con leche: "<<conversion_leche()<<" a "<<temperatura<< " grados"<<" ha sido agregado a su orden."<< endl;
}

#endif