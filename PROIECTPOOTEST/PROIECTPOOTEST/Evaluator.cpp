#include "Evaluator.h"
#include <cctype>  // pentru isdigit
#include <cmath>   // pentru sqrt și pow
#include <iostream>

double Evaluator::evaluareExpresie(const ExpresieMatematica& expresie) {
    std::string expr = expresie.getExpresie();

    double rezultat = 0.0;
    double operand = 0.0;
    char operatie = '+';
    bool esteRadical = false;

    for (size_t i = 0; i < expr.size(); ++i) {
        char caracter = expr[i];

        if (isdigit(caracter) || caracter == '.') {
            std::string operandString;
            while (i < expr.size() && (isdigit(expr[i]) || expr[i] == '.')) {
                operandString += expr[i++];
            }
            --i;
            operand = std::stod(operandString);

            if (esteRadical) {
                rezultat += sqrt(operand);
                esteRadical = false;
            }
            else {
                switch (operatie) {
                case '+':
                    rezultat += operand;
                    break;
                case '-':
                    rezultat -= operand;
                    break;
                case '*':
                    rezultat *= operand;
                    break;
                case '/':
                    if (operand != 0.0) {
                        rezultat /= operand;
                    }
                    else {
                        // Tratare împărțire la zero
                        std::cout << "Eroare impartire la 0";
                    }
                    break;
                case '^':
                    rezultat = pow(rezultat, operand);
                    break;
                default:
                    // Tratare operator necunoscut
                    return 0.0;
                }
            }
        }
        else if (caracter == '+') {
            operatie = '+';
        }
        else if (caracter == '-') {
            operatie = '-';
        }
        else if (caracter == '*') {
            operatie = '*';
        }
        else if (caracter == '/') {
            operatie = '/';
        }
        else if (caracter == '^') {
            operatie = '^';
        }
        else if (caracter == 'r') {
            esteRadical = true;
        }
    }

    return rezultat;
}