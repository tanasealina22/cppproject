#include "Expresie.h"
#include <iostream>

double Expresie::parseFactor(const char* expresie, size_t& index) const {
    // Your implementation for parseFactor
    // ...
    double rezultat = 0.0; // Replace with your logic
    return rezultat;
}

void Expresie::evalueazaExpresie(const char* expresie) {
    size_t index = 0;  // Initialize the index
    double rezultat = parseFactor(expresie, index);

    // Check if the expression was fully parsed
    if (expresie[index] == '\0') {
        // Afișare rezultat
        std::cout << "Rezultatul expresiei este: " << rezultat << std::endl;
    }
    else {
        std::cerr << "Eroare: Expresie invalida!" << std::endl;
    }
}