/*
clase que crea el objeto de usuario que recibe el nombre, la edad, y el num del pasaporte
*/
#ifndef USUARIO_H
#define USUARIO_H
#include <string>
#include<iostream>

#pragma once
using namespace std;

class usuario
{
public:
    usuario();
    usuario(string name,int age,int passport);
    //getters
    int get_edad();
    int get_num_pasaporte();
    string get_nombre();
    //setters
    void set_edad(int age);
    void set_nombre(string name);
    void set_num_pasaporte(int num_passport);

    void checa_edad(usuario u1);
     
private:
    string nombre;
    int edad;
    int num_p;

};

usuario::usuario()
{
    nombre = "";
    edad = 0;
    num_p = 0;

}

usuario::usuario(string name, int age, int passport)
{
    nombre = name;
    edad = age;
    num_p = passport;

}

//getters
int usuario::get_edad(){
    return edad;
}

string usuario::get_nombre(){
    return nombre;
}

int usuario::get_num_pasaporte(){
    return num_p;
}

//setters
void usuario::set_edad(int age){
    edad = age;
}

void usuario::set_nombre(string name){
    nombre = name;
}

void usuario::set_num_pasaporte(int passport){
    num_p = passport;
}

//metodo para checar si el usuario puede viajar solo o no
void usuario::checa_edad(usuario u1){
    if (u1.edad >= 18){
        cout<<"Este usuario puede volar solo"<<endl;
    }else{
        cout<<"Este usuario no puede viajar solo"<<endl;
    }
}

#endif