#pragma once
#include <iostream>

class Operatie {
private:
    char* vectorCaractere;
    double* vectorNumeric;
    const int campConstant;
    static int campStatic;
    static const int lungimeVectorCaractere = 10;

public:
    Operatie();
    Operatie(const char* caractere, double* numeric, int constant);
    Operatie(const Operatie& other);
    ~Operatie();

    // Metode de acces
    const char* getVectorCaractere() const;
    void setVectorCaractere(const char* caractere);
    const double* getVectorNumeric() const;
    void setVectorNumeric(double* numeric);
    int getCampConstant() const;
    static int getCampStatic();
    static void setCampStatic(int value);

    // Metode generice
    void metodaGenerica1();
    void metodaGenerica2();

    // Operatori supraincarcati
    Operatie& operator=(const Operatie& other);
    char operator[](int index) const;
    Operatie operator+(const Operatie& other) const;
    bool operator==(const Operatie& other) const;

    // Operatori de citire si afisare
    friend std::istream& operator>>(std::istream& is, Operatie& operatie);
    friend std::ostream& operator<<(std::ostream& os, const Operatie& operatie);
};