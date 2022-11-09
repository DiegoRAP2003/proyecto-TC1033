/*
clase que crea el objeto de usuario que recibe el nombre, la edad, y el num del pasaporte
*/
#ifndef USUARIO_H
#define USUARIO_H
#include <string>

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
    age = edad;
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

#endif