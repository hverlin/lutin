#include <iostream>
#include "EtatDefaut.h"
#include "Automate.h"
#include "Symbole.h"

class Etat27 : public EtatDefaut {
public:
    Etat27() : EtatDefaut("E27") { }

    int transition(Automate *automate, Symbole *s);
};
