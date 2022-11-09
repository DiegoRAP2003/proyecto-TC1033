#ifndef AEROLINEA_H
#define AEROLINEA_H
#include<string>
#pragma once
using namespace std;

/*
esta clase va a funcionar mas adelante para poder determinar el precio de los vuelos
*/
class aerolinea
{
public:
    aerolinea();
    aerolinea(string a);
    int precio_aerolinea(string a);
    void set_aerolinea(string a);
    string get_aerolinea();

private:
    string nombre_aerolinea;
};

aerolinea::aerolinea()
{
    nombre_aerolinea = "";
    

}

aerolinea::aerolinea(string a)
{
    nombre_aerolinea = a;

}

int aerolinea::precio_aerolinea(string a){
    int precio = 0;
    if (a == "aeromexico"){
        precio = 7000;
    }else if(a == "volaris"){
        precio = 2000;
    }
    return precio;
}

string aerolinea::get_aerolinea(){
    return nombre_aerolinea;
}

void aerolinea::set_aerolinea(string a){
    nombre_aerolinea = a;
}

#endif