#include <iostream>
#include "EtatDefaut.h"
#include "Automate.h"
#include "Symbole.h"

class Etat12 : public EtatDefaut {
public:
    Etat12() : EtatDefaut("E12") { }

    int transition(Automate *automate, Symbole *s);
};
