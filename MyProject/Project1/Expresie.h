#pragma once
#include "Operatie.h"
#include "Calculator.h"

class Expresie {
private:
    Calculator calculator;

    double parseFactor(const char* expresie, size_t& index) const;

public:
    void evalueazaExpresie(const char* expresie);
};