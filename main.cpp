#include "usuario.h"
#include "aerolinea.h"
#include "vuelo.h"
#include <iostream>

using namespace std;

/*funcion que creara el vuelo, posteriormente 
se implentara en las clases cuando
se aplique herencia*/
void crea_vuelo(aerolinea a1, usuario u1, vuelo v1){
    cout<<"Bienvenido "<<u1.get_nombre()<<" Con numero de pasaporte: "<<u1.get_num_pasaporte()<<endl;
    u1.checa_edad(u1);
    int precio = a1.precio_aerolinea(a1);
    v1.imprime_vuelo(v1);
    cout<<precio<<endl;
}

int main(){
    //objetos de ejemplo

    //objetos aerolinea
    aerolinea obj_aerolinea1("aeromexico");
    aerolinea obj_aerolinea2("volaris");
    //objetos usuario
    usuario obj_usuario1("Diego",19,343);
    usuario obj_usuario2("Andre",15,344);
    //objetos vuelo
    vuelo obj_vuelo1("4/10/2023","5/10/2023","Monterrey");
    vuelo obj_vuelo2("6/8/2023","15/9/2023","Ciudad de Mexico");

    crea_vuelo(obj_aerolinea1,obj_usuario1,obj_vuelo1);
    cout<<"\n";
    crea_vuelo(obj_aerolinea2,obj_usuario2,obj_vuelo2);



    return 0;
}








