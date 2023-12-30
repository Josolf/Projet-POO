#pragma once
#ifndef PERSONNEL_H
#define PERSONNEL_H

#include <iostream>

ref class Personnel
{
private:
    int ID_Personnel;
    System::String^ Nom;
    System::String^ Prenom;
    System::String^ DateEmbauche;
    System::String^ SuperieurHierarchique;
    int ID_Poste;

public:
    Personnel();
    Personnel(System::String^ new_Nom, System::String^ new_Prenom, System::String^ new_DateEmbauche, System::String^ new_SuperieurHierarchique, int new_ID_Poste);

    // Getters
    int get_ID_Personnel() { return ID_Personnel; }
    System::String^ get_Nom() { return Nom; }
    System::String^ get_Prenom() { return Prenom; }
    System::String^ get_DateEmbauche() { return DateEmbauche; }
    System::String^ get_SuperieurHierarchique() { return SuperieurHierarchique; }
    int get_ID_Poste() { return ID_Poste; }

    // Setters
    void set_ID_Personnel(int id) { ID_Personnel = id; }
    void set_Nom(System::String^ cNom) { Nom = cNom; }
    void set_Prenom(System::String^ cPrenom) { Prenom = cPrenom; }
    void set_DateEmbauche(System::String^ cDateEmbauche) { DateEmbauche = cDateEmbauche; }
    void set_SuperieurHierarchique(System::String^ cSuperieurHierarchique) { SuperieurHierarchique = cSuperieurHierarchique; }
    void set_ID_Poste(int cID_Poste) { ID_Poste = cID_Poste; }
};

#endif
