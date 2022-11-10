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
    int precio_aerolinea(aerolinea a1);
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

//setters y getters
string aerolinea::get_aerolinea(){
    return nombre_aerolinea;
}

void aerolinea::set_aerolinea(string a){
    nombre_aerolinea = a;
}

//metodo para determinar el precio que cuesta viajar en una aerolinea
int aerolinea::precio_aerolinea(aerolinea a1){
    int precio = 0;
    if (a1.nombre_aerolinea == "aeromexico"){
        precio = 7000;
    }else if(a1.nombre_aerolinea == "volaris"){
        precio = 2000;
    }
    return precio;
}
#endif