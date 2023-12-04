#include "ExpresieMatematica.h"

ExpresieMatematica::ExpresieMatematica(const std::string& exp) : expresie(exp) {}

std::string ExpresieMatematica::getExpresie() const {
    return expresie;
}