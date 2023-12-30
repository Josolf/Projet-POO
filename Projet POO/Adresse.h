#pragma once
#include <string>

namespace ProjetPOO {

    public ref class Adresse
    {
    private:
        int numero;
        System::String^ nomRue;
        System::String^ nomVille;
        System::String^ codePostal;

    public:

        Adresse();
        Adresse(int numero, System::String^ nomRue, System::String^ nomVille, System::String^ codePostal);

        property int Numero {
            int get() { return numero; }
            void set(int value) { numero = value; }
        }

        property System::String^ NomRue {
            System::String^ get() { return nomRue; }
            void set(System::String^ value) { nomRue = value; }
        }

        property System::String^ NomVille {
            System::String^ get() { return nomVille; }
            void set(System::String^ value) { nomVille = value; }
        }

        property System::String^ CodePostal {
            System::String^ get() { return codePostal; }
            void set(System::String^ value) { codePostal = value; }
        }
    };
}