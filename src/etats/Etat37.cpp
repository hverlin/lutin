#include "Etat37.h"
#include "Etat41.h"
#include "Etat31.h"
#include "Etat33.h"
#include "Etat32.h"

int Etat37::transition(Automate *automate, Symbole *s) {
    switch (*s) {
        case FACTEUR:
        case CONSTANTE_NUMERIQUE:
        case IDENTIFICATEUR_FACTEUR:
        case EXPRESSION_PARENTHESEE:
            automate->pushSymbole(s);
            automate->pushEtat(new Etat41);
            return CONTINUE;

        case NUM_TERMINAL:
            automate->decalage(new Etat32, s);
            return CONTINUE;

        case PAROUV_TERMINAL:
            automate->decalage(new Etat33, s);
            return CONTINUE;

        case ID_TERMINAL:
            automate->decalage(new Etat31, s);
            return CONTINUE;
        default:
            return ERREUR;
    }
}
