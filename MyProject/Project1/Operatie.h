#pragma once

#ifndef Operatie_h
#define Operatie_h
#include <iostream>
#include <exception>
#include <string.h>
#include <cmath>
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

    //Operator <<
    friend ostream& operator<<(ostream& os, const Operatie& operatie) {
        os << "Operatie(" << operatie.operand1 << ", " << operatie.operand2 << ")";
        return os;
    }
};

class Calculator
{

};

#endif