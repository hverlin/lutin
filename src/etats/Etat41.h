#include <iostream>
#include "EtatDefaut.h"
#include "Automate.h"
#include "Symbole.h"

class Etat41 : public EtatDefaut {
public:
    Etat41() : EtatDefaut("E41") { }

    int transition(Automate *automate, Symbole *s);
};
