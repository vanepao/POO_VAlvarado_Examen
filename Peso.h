//
// Created by Graphic Design on 02/04/18.
//

#ifndef UNTITLED_PESO_H
#define UNTITLED_PESO_H

#include <iostream>

class Peso {
private:
    float moneda1,moneda2;

public:
    Peso();
    Peso(float moneda1, float moneda2);
    std::string to_String();


    friend Peso operator +(const Peso n1, const Peso n2);
    friend Peso operator -(const Peso n1, const Peso n2);
    friend bool operator <(const Peso n1, const Peso n2);
    friend bool operator >(const Peso n1, const Peso n2);
    friend bool operator<=(const Peso n1, const Peso n2);
    friend bool operator >=(const Peso n1, const Peso n2);
    friend bool operator ==(const Peso n1, const Peso n2);
    friend bool operator !=(const Peso n1, const Peso n2);
    friend bool operator ++(const Peso n1, const Peso n2);





};


#endif //UNTITLED_PESO_H
