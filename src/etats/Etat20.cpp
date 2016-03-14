#include "Etat20.h"
#include "Etat27.h"

bool Etat20::transition(Automate *automate, Symbole *s) {
    switch (*s) {
        case ID_TERMINAL:
            automate->decalage(new Etat27, s);
            return CONTINUE;
        default:
            return false;
    }
}
