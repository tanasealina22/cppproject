#include <iostream>
#include <exception>
#include <string.h>
#include <cmath>
#include <sstream>
using namespace std;

#pragma once


class Operatie
{
private:
    double operand1;
    double operand2;

public:
    Operatie() : operand1(0.0), operand2(0.0) {}
    Operatie(double op1, double op2) : operand1(op1), operand2(op2) {}
    
    

    //Operatori aritmetici
    //Operator +
    Operatie operator+(const Operatie& other) const
    {
        Operatie rezultat;
        rezultat.operand1 = operand1 + other.operand1;
        rezultat.operand2 = operand2 + other.operand2;
        return rezultat;
    }
    double getOperand1() const { return operand1; }
    double getOperand2() const { return operand2; }

    //Operator -
    Operatie operator-(const Operatie& other) const
    {
        Operatie rezultat;
        rezultat.operand1 = operand1 - other.operand1;
        rezultat.operand2 = operand2 - other.operand2;
        return rezultat;
    }

    //Operator *
    Operatie operator*(const Operatie& other) const {
        Operatie rezultat;
        rezultat.operand1 = operand1 * other.operand1;
        rezultat.operand2 = operand2 * other.operand2;
        return rezultat;
    }

    //Operator / 
    Operatie operator/(const Operatie& other) const 
    {
        if (other.operand1 == 0.0 || other.operand2 == 0.0) 
        {
           cerr << "Eroare: Impartire la zero!" << endl;
            return Operatie();
        }

        Operatie rezultat;
        rezultat.operand1 = operand1 / other.operand1;
        rezultat.operand2 = operand2 / other.operand2;
        return rezultat;
    }

    //Operatorul ^ = ridicarea la putere
    Operatie operator^(const Operatie& exponent) const
    {
        Operatie rezultat;
        rezultat.operand1 = pow(operand1, exponent.operand1);
        rezultat.operand2 = pow(operand2, exponent.operand2);
        return rezultat;
    }

    //Operatorul % = radical
    Operatie operator%(const Operatie& radical) const {
        Operatie rezultat;
        rezultat.operand1 = pow(operand1, 1.0 / radical.operand1);
        rezultat.operand2 = pow(operand2, 1.0 / radical.operand2);
        return rezultat;
    }

    // Operatori de indexare
    double operator[](int index) const {
        if (index == 0)
            return operand1;
        else if (index == 1)
            return operand2;
        else {
            cerr << "Eroare: Index invalid!" << endl;
            return 0.0;
        }
    }

    // Operatori de incrementare si decrementare
    Operatie operator++() {
        ++operand1;
        ++operand2;
        return *this;
    }

    Operatie operator++(int) {
        Operatie temp = *this;
        ++(*this);
        return temp;
    }

    Operatie operator--() {
        --operand1;
        --operand2;
        return *this;
    }

    Operatie operator--(int) {
        Operatie temp = *this;
        --(*this);
        return temp;
    }
    // Operatori de negatie
    Operatie operator-() const {
        Operatie rezultat;
        rezultat.operand1 = -operand1;
        rezultat.operand2 = -operand2;
        return rezultat;
    }

    // Operatori relationali
    bool operator<(const Operatie& other) const {
        return operand1 < other.operand1 && operand2 < other.operand2;
    }

    bool operator>(const Operatie& other) const {
        return operand1 > other.operand1 && operand2 > other.operand2;
    }

    bool operator<=(const Operatie& other) const {
        return operand1 <= other.operand1 && operand2 <= other.operand2;
    }

    bool operator>=(const Operatie& other) const {
        return operand1 >= other.operand1 && operand2 >= other.operand2;
    }

    bool operator==(const Operatie& other) const {
        return operand1 == other.operand1 && operand2 == other.operand2;
    }

    // Operatori de citire si afisare
    
    //Operator >>
    friend istream& operator>>(istream& is, Operatie& operatie) {
        cout << "Introduceti primul operand: ";
        is >> operatie.operand1;

        cout << "Introduceti al doilea operand: ";
        is >> operatie.operand2;

        return is;
    }
    //Operator <<
    friend ostream& operator<<(ostream& os, const Operatie& operatie) {
        os << "Operatie(" << operatie.operand1 << ", " << operatie.operand2 << ")";
        return os;
    }

    double evaluate() const
    {
        return operand1 + operand2;
    }
    
};



class Calculator {
public:
    // Operatii
    Operatie aduna(const Operatie& op1, const Operatie& op2) const
    {
        return op1 + op2;
    }

    Operatie scade(const Operatie& op1, const Operatie& op2) const
    {
        return op1 - op2;
    }

    Operatie inmulteste(const Operatie& op1, const Operatie& op2) const 
    {
        return op1 * op2;
    }

    Operatie imparte(const Operatie& op1, const Operatie& op2) const 
    {
        // Adaugare verificare pentru evitarea impartirii la zero
        if (op2.getOperand1() == 0.0 || op2.getOperand2() == 0.0) 
        {
            cerr << "Eroare: Impartire la zero!" << endl;
            return Operatie();
        }

        return op1 / op2;
    }

    Operatie ridicareLaPutere(const Operatie& op, const Operatie& exponent) const 
    {
        return op ^ exponent;
    }

    Operatie radical(const Operatie& op, const Operatie& radical) const {
        return op % radical;
    }
};


class Expresie {
private:
    Calculator calculator;

    Operatie parseExpresie(const string& expresie) const {
        
        double operand1, operand2;
        char operatie;
        istringstream stream(expresie);
        stream >> operand1 >> operatie >> operand2;

        
        switch (operatie) {
        case '+':
            return calculator.aduna(Operatie(operand1, operand2), Operatie(0.0, 0.0));
        case '-':
            return calculator.scade(Operatie(operand1, operand2), Operatie(0.0, 0.0));
        case '*':
            return calculator.inmulteste(Operatie(operand1, operand2), Operatie(0.0, 0.0));
        case '/':
            return calculator.imparte(Operatie(operand1, operand2), Operatie(0.0, 0.0));
        default:
            cerr << "Eroare: Operatie invalida!" << endl;
            return Operatie();
        }
    }

public:
    void evalueazaExpresie() {
        string expresie;
        cout << "Introduceti expresia: ";
        getline(cin, expresie);

        // Parsare și evaluare
        Operatie rezultat = parseExpresie(expresie);

        // Afișare rezultat
        cout << "Rezultatul expresiei este: " << rezultat.evaluate() << endl;
    }
};

int main() {
    Expresie expresieCalculator;
    expresieCalculator.evalueazaExpresie();

    return 0;
}
