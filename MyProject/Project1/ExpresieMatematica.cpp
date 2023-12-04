#include "ExpresieMatematica.h"

ExpresieMatematica::ExpresieMatematica(const std::string& exp) : expresie(exp) {}

std::string ExpresieMatematica::getExpresie() const {
    return expresie;
}

char ExpresieMatematica::operator[](size_t index) const {
    if (index < expresie.size()) {
        return expresie[index];
    }
    else {
        
        return '\0';
    }
}

ExpresieMatematica ExpresieMatematica::operator+(const ExpresieMatematica& other) const {
    
    return ExpresieMatematica("0");
}

ExpresieMatematica ExpresieMatematica::operator-(const ExpresieMatematica& other) const {
    
    return ExpresieMatematica("0");
}

ExpresieMatematica ExpresieMatematica::operator*(const ExpresieMatematica& other) const {
    
    return ExpresieMatematica("0");
}

ExpresieMatematica ExpresieMatematica::operator/(const ExpresieMatematica& other) const {
   
    return ExpresieMatematica("0");
}

ExpresieMatematica& ExpresieMatematica::operator++() {
    
    return *this;
}

ExpresieMatematica ExpresieMatematica::operator++(int) {
    
    return ExpresieMatematica("0");
}

ExpresieMatematica& ExpresieMatematica::operator--() {
    
    return *this;
}

ExpresieMatematica ExpresieMatematica::operator--(int) {
    
    return ExpresieMatematica("0");
}

ExpresieMatematica::operator double() const {
    
    return 0.0;
}

ExpresieMatematica ExpresieMatematica::operator!() const {
    
    return ExpresieMatematica("0");
}

bool ExpresieMatematica::operator<(const ExpresieMatematica& other) const {
    
    return true;
}

bool ExpresieMatematica::operator>(const ExpresieMatematica& other) const {
    
    return true;
}

bool ExpresieMatematica::operator<=(const ExpresieMatematica& other) const {
    
    return true;
}

bool ExpresieMatematica::operator>=(const ExpresieMatematica& other) const {
    
    return true;
}

bool ExpresieMatematica::operator==(const ExpresieMatematica& other) const {
    
    return true;
}