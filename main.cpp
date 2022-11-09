#include "usuario.h"
#include "aerolinea.h"
#include "vuelo.h"
#include <iostream>

using namespace std;

int main(){
    string a = "aeromexico";

    aerolinea a1(a);

    int precio = a1.precio_aerolinea(a);

    

    return 0;
}








