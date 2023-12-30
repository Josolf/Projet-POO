#include "Adresse.h"

namespace ProjetPOO {

    // Constructeur
    Adresse::Adresse()
        : numero(0), nomRue(System::String::Empty), nomVille(System::String::Empty), codePostal(System::String::Empty) {}
    Adresse::Adresse(int numero, System::String^ nomRue, System::String^ nomVille, System::String^ codePostal)
    {
        this->numero = numero;
        this->nomRue = nomRue;
        this->nomVille = nomVille;
        this->codePostal = codePostal;
    }


}
