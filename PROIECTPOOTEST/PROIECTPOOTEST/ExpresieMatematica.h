#ifndef EXPRESIE_MATEMATICA_H
#define EXPRESIE_MATEMATICA_H

#include <string>

class ExpresieMatematica {
private:
    std::string expresie;

public:
    ExpresieMatematica(const std::string& exp);
    std::string getExpresie() const;

    // Suprascrierea operatorului de indexare []
    char operator[](size_t index) const;

    // Operatorii aritmetici
    ExpresieMatematica operator+(const ExpresieMatematica& other) const;
    ExpresieMatematica operator-(const ExpresieMatematica& other) const;
    ExpresieMatematica operator*(const ExpresieMatematica& other) const;
    ExpresieMatematica operator/(const ExpresieMatematica& other) const;

    // Operatorii de incrementare si decrementare
    ExpresieMatematica& operator++();     // Pre-incrementare
    ExpresieMatematica operator++(int);  // Post-incrementare
    ExpresieMatematica& operator--();     // Pre-decrementare
    ExpresieMatematica operator--(int);  // Post-decrementare

    // Cast implicit sau explicit
    operator double() const;

    // Operator de negație !
    ExpresieMatematica operator!() const;

    // Operatori relaționali
    bool operator<(const ExpresieMatematica& other) const;
    bool operator>(const ExpresieMatematica& other) const;
    bool operator<=(const ExpresieMatematica& other) const;
    bool operator>=(const ExpresieMatematica& other) const;
    bool operator==(const ExpresieMatematica& other) const;
};

#endif // EXPRESIE_MATEMATICA_H