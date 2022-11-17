/*
*Proyecto cafeteria
*Diego Alfaro A01709971
*11/17/2022
*/

/*
*La clase cafe contiene variables y un metodo generico, al igual que 2 diferentes
*constructores para sus clases hijas, capuccino, americano, latte
*/

#include <string>
#include <iostream>

#ifndef CAFE_H
#define CAFE_H

#pragma once

using namespace std;

//clase cafe, que es abstracta
class Cafe{
    protected:
        //variables de instancia
        int tipo_leche;
        float temperatura;
        string nombre_leche;
        int cantidad;
    
    public:
        //metodos de clase cafe
        Cafe();
        Cafe(int leche,float temp,int cantidad);
        Cafe(float temp, int cantidad);

        string conversion_leche();

};

/*
*constructor por default
*
*@param 
*@return Objeto cafe
*/
Cafe::Cafe(){
    tipo_leche = 1;
    temperatura = 0.0;
}

/*
*Constructor que recibe valores para llenar variables
*
*@param int leche: el numero del tipo de leche, float temp: la temperatura a la que estara el cafe, int c: la cantidad de cafe
*@return
*/

Cafe::Cafe(int leche, float temp, int c){
    tipo_leche = leche;
    temperatura = temp;
    cantidad = c;
}

/*
*Constructor que recibe valores para llenar variables, este solo recibe 1 parametro
*
*@param float temp: la temperatura a la que estara el cafe, int c: la cantidad del cafe
*@return
*/

Cafe::Cafe(float temp, int c){
    temperatura = temp;
    cantidad = c;
}

/*
*Metodo que hace la conversion de el tipo de leche para poder imprimirlo despues
*
*@param
*@return string: nombre del tipo de leche
*/

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

//declaro la clase capuccino que hereda de la clase cafe

class Capuccino : public Cafe{
    
    protected:    
        float precio;
        int espuma;        

    public:
        Capuccino();
        Capuccino(int leche,float temp, int cantidad, int e);
        float calcula_precio();
        void imprime_capuccino();
};

/*
*Constructor que recibe valores para llenar las variables del objeto
*
*@param int leche: llena el tipo de la leche, float temp: la temperatura del cafe, int c: cantidad de cafe
*/
Capuccino::Capuccino(int leche,float temp, int c, int e): Cafe(leche, temp,cantidad), espuma(e){}

Capuccino::Capuccino(){
    tipo_leche = 1;
    temperatura = 100.0;
    cantidad = 10;
    espuma = 1;
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
    if(espuma == 1){
        cout<<"Su capuccino con leche "<<conversion_leche()<<" a "<<temperatura<< " grados"<< " con espuma"<<" ha sido agregado a su orden."<< endl;
    }else if(espuma == 2){
        cout<<"Su capuccino con leche "<<conversion_leche()<<" a "<<temperatura<< " grados"<<" sin espuma"<<" ha sido agregado a su orden."<< endl;
    }
    
}

class Americano:public Cafe{
    private:
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

Americano::Americano(float temp, int c): Cafe(temp,cantidad){
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

Latte::Latte(int leche, float temp, int c): Cafe(leche,temp,cantidad){
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