#include "expresie.h"
#include <iostream>
#include <cctype>
using namespace std;


int Expresie::evaluateTerm(const string& expression, size_t& index) {
    
    int result = evaluateFactor(expression, index);

    while (index < expression.length()) {
        char op = expression[index];

        if (op == '*' || op == '/') {
            index++; 

            int nextFactor = evaluateFactor(expression, index);

            if (op == '*') {
                result *= nextFactor;
            }
            else if (op == '/') {
                if (nextFactor != 0) {
                    result /= nextFactor;
                }
                else {
                    cerr << "Error: Division by zero!" << endl;
                    return 0; 
                }
            }
        }
        else {
            break; 
        }
    }

    return result;
}

int Expresie::evaluateFactor(const string& expression, size_t& index) {
    
    int result = 0;

    if (expression[index] == '(') {
        index++; 
        result = evaluateExpression(expression, index);
        index++; 
    }
    else if (isdigit(expression[index])) {
        while (index < expression.length() && isdigit(expression[index])) {
            result = result * 10 + (expression[index] - '0');
            index++;
        }
    }
    else {
        cerr << "Error: Invalid expression!" << endl;
    }

    return result;
}

int Expresie::evaluateExpression(const string& expression, size_t& index) {
    
    int result = evaluateTerm(expression, index);

    while (index < expression.length()) {
        char op = expression[index];

        if (op == '+' || op == '-') {
            index++; 

            int nextTerm = evaluateTerm(expression, index);

            if (op == '+') {
                result += nextTerm;
            }
            else if (op == '-') {
                result -= nextTerm;
            }
        }
        else {
            break; 
        }
    }

    return result;
}

int Expresie::solveExpression(const string& expression) {
    size_t index = 0;
    return evaluateExpression(expression, index);
}