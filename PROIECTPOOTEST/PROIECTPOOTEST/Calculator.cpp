#include <iostream>
#include "Calculator.h"
#include "ExpresieMatematica.h"
#include "Evaluator.h"

void Calculator::startCalculator() {
    std::cout << "Calculatorul este pornit.\n";
    while (true) {
        std::string input;
        std::cout << "Introduceti o expresie matematica sau 'exit' pentru a iesi: ";
        std::getline(std::cin, input);

        if (input == "exit") {
            std::cout << "Calculatorul este oprit.\n";
            break;
        }

        ExpresieMatematica expresie(input);
        double rezultat = Evaluator::evaluareExpresie(expresie);
        std::cout << "Rezultat: " << rezultat << "\n\n";
    }
}