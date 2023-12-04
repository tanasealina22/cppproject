#include "ExpresieMatematica.h"

ExpresieMatematica::ExpresieMatematica(const std::string& exp) : expresie(exp) {}

std::string ExpresieMatematica::getExpresie() const {
    return expresie;
}

char ExpresieMatematica::operator[](size_t index) const {
    if (index < expresie.size()) {
        return expresie[index];
    }
    else {
        // Tratare index invalid
        return '\0';
    }
}

ExpresieMatematica ExpresieMatematica::operator+(const ExpresieMatematica& other) const {
    // Implementare adunare
    return ExpresieMatematica("0");
}

ExpresieMatematica ExpresieMatematica::operator-(const ExpresieMatematica& other) const {
    // Implementare scadere
    return ExpresieMatematica("0");
}

ExpresieMatematica ExpresieMatematica::operator*(const ExpresieMatematica& other) const {
    // Implementare inmultire
    return ExpresieMatematica("0");
}

ExpresieMatematica ExpresieMatematica::operator/(const ExpresieMatematica& other) const {
    // Implementare impartire
    return ExpresieMatematica("0");
}

ExpresieMatematica& ExpresieMatematica::operator++() {
    // Implementare pre-incrementare
    return *this;
}

ExpresieMatematica ExpresieMatematica::operator++(int) {
    // Implementare post-incrementare
    return ExpresieMatematica("0");
}

ExpresieMatematica& ExpresieMatematica::operator--() {
    // Implementare pre-decrementare
    return *this;
}

ExpresieMatematica ExpresieMatematica::operator--(int) {
    // Implementare post-decrementare
    return ExpresieMatematica("0");
}

ExpresieMatematica::operator double() const {
    // Implementare cast implicit sau explicit
    return 0.0;
}

ExpresieMatematica ExpresieMatematica::operator!() const {
    // Implementare negatie
    return ExpresieMatematica("0");
}

bool ExpresieMatematica::operator<(const ExpresieMatematica& other) const {
    // Implementare operator <
    return true;
}

bool ExpresieMatematica::operator>(const ExpresieMatematica& other) const {
    // Implementare operator >
    return true;
}

bool ExpresieMatematica::operator<=(const ExpresieMatematica& other) const {
    // Implementare operator <=
    return true;
}

bool ExpresieMatematica::operator>=(const ExpresieMatematica& other) const {
    // Implementare operator >=
    return true;
}

bool ExpresieMatematica::operator==(const ExpresieMatematica& other) const {
    // Implementare operator ==
    return true;
}