#include "Cafe.h"
#include "Orden.h"
#include <string>
#include <iostream>

using namespace std;



void menu_leches();//funcion para imprimer le menu de leches
void menu_cafe();//funcion para imprimir los tipos de cafes disponibles
void menu_tamanios();//funcion para imprimir el menu de los tamanios
int convierte_tamanios(int tamanio);//funcion para convertir el tamanio a la cantidad para el objeto

int main(){
    int opcion,leche,tamanio,cantidad,sino;
    float temperatura;
    bool continua = true;
    cout<<"Buenos dias"<<endl;
    Orden obj;
    while (continua == true){    
        menu_cafe();
        cout<<"Que le gustaria comprar(introduzca el numero del producto): ";
        cin>>opcion;
        if(opcion == 1){

            menu_leches();
            cout<<"Que tipo de leche desea(introduzca el numero): ";
            cin>>leche;
            temperatura = 150.4;
            menu_tamanios();
            cout<<"Que tamanio le gustaria(introduzca el numero): ";
            cin>>tamanio;
            cout<<"\n";
            cantidad = convierte_tamanios(tamanio);
            obj.agrega_capuccino(leche,temperatura,cantidad);

        }else if(opcion == 2){

            temperatura = 157.4;
            menu_tamanios();
            cout<<"Que tamanio le gustaria(introduzca el numero): ";
            cin>>tamanio;
            cout<<"\n";
            cantidad = convierte_tamanios(tamanio);
            obj.agrega_americano(temperatura,cantidad);

        }else if(opcion == 3){

            menu_leches();
            cout<<"Que tipo de leche desea(introduzca el numero): ";
            cin>>leche;
            cout<<"\n";
            temperatura = 100.2;
            menu_tamanios();
            cout<<"Que tamanio le gustaria(introduzca el numero): ";
            cin>>tamanio;
            cantidad = convierte_tamanios(tamanio);
            obj.agrega_latte(leche,temperatura,cantidad);

        }
        cout<<"Desea cotinuar ordenando? 1. Si 2. No ";
        cin>>sino;
        if(sino == 1){
            continua = true;
        }else if(sino == 2){
            continua = false;
            obj.pago_total();
        }        
    }
    
    return 0;
}

void menu_leches(){
    cout<<"\n";
    cout<<"========LECHE========"<<endl;
    cout<<"1. Leche Desalactosada"<<endl;
    cout<<"2. Leche Regular"<<endl;
    cout<<"3. Leche de Almendra"<<endl;
    cout<<"====================="<<endl;
    cout<<"\n";
}

void menu_cafe(){
    cout<<"=======BEBIDAS======="<<endl;
    cout<<"1. Capuccino"<<endl;
    cout<<"2. Cafe Americano"<<endl;
    cout<<"3. Latte"<<endl;
    cout<<"====================="<<endl;
    cout<<"\n";    
}

void menu_tamanios(){
    cout<<"======TAMANIOS======="<<endl;
    cout<<"1. Chico"<<endl;
    cout<<"2. Mediano"<<endl;
    cout<<"3. Grande"<<endl;
    cout<<"====================="<<endl;
    cout<<"\n";
}

int convierte_tamanios(int tamanio){
    int cantidad;
    if(tamanio == 1){
        cantidad = 10;
    }else if(tamanio = 2){
        cantidad = 20;
    }else if(tamanio == 3){
        cantidad = 35;
    }

    return cantidad;
}
