#ifndef EXPRESIE_H
#define EXPRESIE_H

#include <string>
using namespace std;

class Expresie {
public:
    int solveExpression(const string& expression);

private:
    int evaluateExpression(const string& expression, size_t& index);
    int evaluateTerm(const string& expression, size_t& index);
    int evaluateFactor(const string& expression, size_t& index);
};

#endif