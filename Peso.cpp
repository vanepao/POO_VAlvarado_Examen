//
// Created by Graphic Design on 02/04/18.
//

#include "Peso.h"
Peso::Peso() {
    moneda1, moneda2 = 0;
}
Peso::Peso(float moneda1, float moneda2){
    this->moneda1=moneda1;
    this->moneda2=moneda2;
}



std::string Peso::to_String() {
    return "$" + std::to_string(moneda1) + " MXN " +" para peso.";
}

Peso operator+(const Peso n1, const Peso n2) {
   Peso pso;
    pso.moneda1= n1.moneda1;
    pso.moneda2=n2.moneda2;
    return pso;
}




