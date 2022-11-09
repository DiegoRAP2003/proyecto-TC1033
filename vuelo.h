/*
clase para crear los vuelos, recibe la fecha de salida, regreso y la ciudad destino
*/

#ifndef VUELO_H
#define VUELO_H
//#include "aerolinea.h"
//#include "usuario.h"
#include<string>

using namespace std;
#pragma once

class vuelo
{
public:
    vuelo();
    vuelo(string f_s,string f_r,string d);
    void set_fecha_salida(string f_s);
    void set_fecha_regreso(string f_r);
    void set_destino(string d);
    string get_fecha_salida();
    string get_fecha_regreso();
    string get_destino();
    //void crea_vuelo(usuario u1,aerolinea a);// este metodo va a recibir un objeto usuario, vuelo pero hasta aplicar herencia

private:
    string fecha_salida;
    string fecha_regreso;
    string destino;
};

//constructor default
vuelo::vuelo()
{
    fecha_regreso = "";
    fecha_salida = "";
    destino = "";
   
}

//constructor para declarar las variables de instacia
vuelo::vuelo(string f_s,string f_r,string d)
{
    fecha_regreso = f_r;
    fecha_salida = f_s;
    destino = d;
}

//setter y getter para la variable destino
void vuelo::set_destino(string d){
    destino = d;
}

string vuelo::get_destino(){
    return destino;
}

//setter y getter para la variable fecha de regreso
void vuelo::set_fecha_regreso(string f_r){
    fecha_regreso = f_r;
}

string vuelo::get_fecha_regreso(){
    return fecha_regreso;
}

//setter y getter para variable fecha de salida
void vuelo::set_fecha_salida(string f_s){
    fecha_salida = f_s;
}

string vuelo::get_fecha_salida(){
    return fecha_salida;
}

//void vuelo::crea_vuelo(usuario u1, aerolinea a1){

#endif