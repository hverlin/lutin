#include "Etat15.h"
#include "Etat22.h"

int Etat15::transition(Automate *automate, Symbole *s) {
    switch (*s) {
        case POINT_VIRGULE_TERMINAL:
            automate->decalage(new Etat22, s);
            return CONTINUE;
        // recuperation des erreurs
        case FIN_PROGRAMME:
        case LIRE_TERMINAL:
        case ECRIRE_TERMINAL:
        case ID_TERMINAL:
        {
            Symbole* symboleOublie = new Symbole(POINT_VIRGULE_TERMINAL);
            automate->pushSymbole(symboleOublie);
            automate->pushEtat(new Etat22);
            return CONTINUE;
        }
        default:
            return ERREUR;
    }
}
