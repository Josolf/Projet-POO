#include "Personnel.h"
#include <iostream>

using namespace System;

int main(array<System::String^>^ args)
{

    Personnel^ p1 = gcnew Personnel();

    p1->set_ID_Personnel(1);
    p1->set_Nom("Debels");
    p1->set_Prenom("Maxim");
    p1->set_DateEmbauche("02/04/2004");
    p1->set_SuperieurHierarchique("Dufaux");
    p1->set_ID_Poste(3);

    Console::WriteLine("Personnel 1:");
    Console::WriteLine("ID: " + p1->get_ID_Personnel());
    Console::WriteLine("Nom: " + p1->get_Nom());
    Console::WriteLine("Prenom: " + p1->get_Prenom());
    Console::WriteLine("Date d'embauche: " + p1->get_DateEmbauche());
    Console::WriteLine("Superieur Hierarchique: " + p1->get_SuperieurHierarchique());
    Console::WriteLine("ID Poste: " + p1->get_ID_Poste());

    Personnel^ p2 = gcnew Personnel("Satouche", "Maxandre", "15/03/2004", "Dufaux", 6);

    Console::WriteLine("\nPersonnel 2:");
    Console::WriteLine("ID: " + p2->get_ID_Personnel());
    Console::WriteLine("Nom: " + p2->get_Nom());
    Console::WriteLine("Prenom: " + p2->get_Prenom());
    Console::WriteLine("Date d'embauche: " + p2->get_DateEmbauche());
    Console::WriteLine("Superieur Hierarchique: " + p2->get_SuperieurHierarchique());
    Console::WriteLine("ID Poste: " + p2->get_ID_Poste());

    return 0;
}