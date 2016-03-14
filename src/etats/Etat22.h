#include <iostream>
#include "EtatDefaut.h"
#include "Automate.h"
#include "Symbole.h"

class Etat22 : public EtatDefaut {
public:
    Etat22() : EtatDefaut("E22") { }

    int transition(Automate *automate, Symbole *s);
};
