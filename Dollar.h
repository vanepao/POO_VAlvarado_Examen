//
// Created by Graphic Design on 02/04/18.
//

#ifndef UNTITLED_DOLLAR_H
#define UNTITLED_DOLLAR_H

#include <iostream>


class Dollar {
private:
    float dollar1, dollar2;

public:

    Dollar();
    Dollar(float moneda1, float moneda2);
    std::string to_String();




    friend Dollar operator +(const Dollar n1, const Dollar n2);
    friend Dollar operator -(const Dollar n1, const Dollar n2);
    friend bool operator <(const Dollar n1, const Dollar n2);
    friend bool operator >(const Dollar n1, const Dollar n2);
    friend bool operator<=(const Dollar n1, const Dollar n2);
    friend bool operator >=(const Dollar n1, const Dollar n2);
    friend bool operator ==(const Dollar n1, const Dollar n2);
    friend bool operator !=(const Dollar n1, const Dollar n2);
    friend bool operator ++(const Dollar n1, const Dollar n2);
};


#endif //UNTITLED_DOLLAR_H
