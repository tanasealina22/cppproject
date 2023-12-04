#ifndef EXPRESIE_MATEMATICA_H
#define EXPRESIE_MATEMATICA_H

#include <string>

class ExpresieMatematica {
private:
    std::string expresie;

public:
    ExpresieMatematica(const std::string& exp);
    std::string getExpresie() const;

    
    char operator[](size_t index) const;

    
    ExpresieMatematica operator+(const ExpresieMatematica& other) const;
    ExpresieMatematica operator-(const ExpresieMatematica& other) const;
    ExpresieMatematica operator*(const ExpresieMatematica& other) const;
    ExpresieMatematica operator/(const ExpresieMatematica& other) const;

    
    ExpresieMatematica& operator++();     
    ExpresieMatematica operator++(int); 
    ExpresieMatematica& operator--();     
    ExpresieMatematica operator--(int);  

    
    operator double() const;

    
    ExpresieMatematica operator!() const;

    
    bool operator<(const ExpresieMatematica& other) const;
    bool operator>(const ExpresieMatematica& other) const;
    bool operator<=(const ExpresieMatematica& other) const;
    bool operator>=(const ExpresieMatematica& other) const;
    bool operator==(const ExpresieMatematica& other) const;
};

#endif 