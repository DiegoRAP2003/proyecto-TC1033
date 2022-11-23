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

        //Setters
        void set_tipo_leche(int l);
        void set_temperatura(float temp);
        void set_nombre_leche(string n);
        void set_cantidad(int c);

        //getters
        int get_tipo_leche();
        float get_temperatura();
        string get_nombre_leche();
        int get_cantidad();

        //metodos
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

//setters

/*
*setter para la variable cantidad
*
*@param int c
*@return 
*/
void Cafe::set_cantidad(int c){
    cantidad = c;
}

/*
*setter para la variable nombre_leche
*
*@param string n_l
*@return 
*/
void Cafe::set_nombre_leche(string n_l){
    nombre_leche = n_l;
}

/*
*setter para la variable temperatura
*
*@param float temp
*@return 
*/
void Cafe::set_temperatura(float temp){
    temperatura = temp;
}

/*
*setter para la variable tipo_leche
*
*@param int t_l
*@return 
*/
void Cafe::set_tipo_leche(int t_l){
    tipo_leche = t_l;
}

//getters

/*
*getter para la variable cantidad
*
*@param 
*@return int cantidad
*/
int Cafe::get_cantidad(){
    return cantidad;
}

/*
*getter para la variable temperatura
*
*@param 
*@return float temperatura
*/
float Cafe::get_temperatura(){
    return temperatura;
}

/*
*getter para la variable nombre_leche
*
*@param 
*@return string nombre_leche
*/
string Cafe::get_nombre_leche(){
    return nombre_leche;
}

/*
*getter para la variable tipo_leche
*
*@param 
*@return int tipo_leche
*/
int Cafe::get_tipo_leche(){
    return tipo_leche;
}

//declaro la clase capuccino que hereda de la clase cafe

class Capuccino : public Cafe{
    
    protected:    
        float precio;
        int espuma;        

    public:
        //constructores
        Capuccino();
        Capuccino(int leche,float temp, int cantidad, int e);
        
        //metodos
        float calcula_precio();
        void imprime_capuccino();

        //getters y setters
        int get_espuma();
        float get_precio();

        void set_espuma(int e);
        void set_precio(float p);
};

/*
*Constructor que recibe valores para llenar las variables del objeto
*
*@param int leche: llena el tipo de la leche, float temp: la temperatura del cafe, int c: cantidad de cafe
*/
Capuccino::Capuccino(int leche,float temp, int c, int e): Cafe(leche, temp,cantidad), espuma(e){}

/*
*constructor por default
*
*@param 
*@return Objeto capuccino
*/
Capuccino::Capuccino(){
    tipo_leche = 1;
    temperatura = 100.0;
    cantidad = 10;
    espuma = 1;
}

/*
*metodo que calcula el precio del objeto
*
*@param
*@return float precio
*/
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

/*
*metodo que imprime el capuccino completo usando las variables de la clase cafe y capuccino
*
*@param
*@return
*/
void Capuccino::imprime_capuccino(){
    if(espuma == 1){
        cout<<"Su capuccino con leche "<<conversion_leche()<<" a "<<temperatura<< " grados"<< " con espuma"<<" ha sido agregado a su orden."<< endl;
    }else if(espuma == 2){
        cout<<"Su capuccino con leche "<<conversion_leche()<<" a "<<temperatura<< " grados"<<" sin espuma"<<" ha sido agregado a su orden."<< endl;
    }
    
}

//getters

/*
*getter para la variable espuma, aunque esta variable es tipo int para hacer mas facil el metodo de imprime capuccino
*
*@param 
*@return int espuma
*/
int Capuccino::get_espuma(){
    return espuma;
}

/*
*getter para la variable precio
*
*@param 
*@return float precio
*/
float Capuccino::get_precio(){
    return precio;
}

//setters

/*
*setter para la variable espuma
*
*@param int e
*@return 
*/
void Capuccino::set_espuma(int e){
    espuma = e;
}

/*
*setter para la variable precio
*
*@param float p
*@return 
*/
void Capuccino::set_precio(float p){
    precio = p;
}

//declaro la calse americano que hereda de cafe

class Americano:public Cafe{
    private:
        float precio;
    public:

        //constructores
        Americano();
        Americano(float temp, int cantidad);

        //metodos
        float calcula_precio();
        void imprime_americano();

        //getters y setters
        float get_precio();
        
        void set_precio(float p);
};

/*
*constructor por default
*
*@param 
*@return Objeto Americano
*/
Americano::Americano(){
    cantidad = 10;
    tipo_leche = 1;
    temperatura = 100.0;

}

/*
*Constructor que recibe valores para llenar las variables del objeto
*
*@param float temp: la temperatura del cafe, int c: cantidad de cafe
*@return objeto Americano
*/
Americano::Americano(float temp, int c): Cafe(temp,cantidad){
    temperatura = temp;
    cantidad = c;
}

/*
*metodo que calcula el precio del objeto
*
*@param
*@return float precio
*/
float Americano::calcula_precio(){
    precio = cantidad * 1.4;

    return precio;    
}

/*
*metodo que imprime el capuccino completo usando las variables de la clase cafe y americano
*
*@param
*@return
*/
void Americano::imprime_americano(){
    cout<<"Su cafe americano a "<<temperatura<< " grados"<<" ha sido agregado a su orden."<< endl;
}

/*
*setter para la variable precio
*
*@param float p
*@return 
*/
void Americano::set_precio(float p){
    precio = p;
}

/*
*getter para la variable precio
*
*@param 
*@return float precio
*/
float Americano::get_precio(){
    return precio;
}

//declaro la calse latte que hereda de cafe

class Latte: public Cafe{
    private:
        float precio;
    public:

        //constructores
        Latte();
        Latte(int leche,float temp, int cantidad);

        //metodos
        float calcula_precio();
        void imprime_latte();

        //setters y getters
        float get_precio();

        void set_precio(float p);
};

/*
*constructor por default
*
*@param 
*@return Objeto latte
*/
Latte::Latte(){
    tipo_leche = 1;
    temperatura = 100.0;
    cantidad = 10;
}

/*
*Constructor que recibe valores para llenar las variables del objeto
*
*@param int leche: llena el tipo de la leche, float temp: la temperatura del cafe, int c: cantidad de cafe
*@return objeto Latte
*/
Latte::Latte(int leche, float temp, int c): Cafe(leche,temp,cantidad){
    tipo_leche = leche;
    temperatura = temp;
    cantidad = c;
}

/*
*metodo que calcula el precio del objeto
*
*@param
*@return float precio
*/
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

/*
*metodo que imprime el capuccino completo usando las variables de la clase cafe y latte
*
*@param
*@return
*/
void Latte::imprime_latte(){
    cout<<"Su latte con leche: "<<conversion_leche()<<" a "<<temperatura<< " grados"<<" ha sido agregado a su orden."<< endl;
}

/*
*setter para la variable precio
*
*@param float p
*@return 
*/
void Latte::set_precio(float p){
    precio = p;
}

/*
*getter para la variable precio
*
*@param 
*@return float precio
*/
float Latte::get_precio(){
    return precio;
}
#endif
