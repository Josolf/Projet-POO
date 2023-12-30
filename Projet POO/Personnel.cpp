    #include "Personnel.h"


    Personnel::Personnel()
        : ID_Personnel(0), Nom(""), Prenom(""), DateEmbauche(""), SuperieurHierarchique(""), ID_Poste(0) {}

    Personnel::Personnel(System::String^ new_Nom, System::String^ new_Prenom, System::String^ new_DateEmbauche, System::String^ new_SuperieurHierarchique, int new_ID_Poste)
        : ID_Personnel(0), Nom(new_Nom), Prenom(new_Prenom), DateEmbauche(new_DateEmbauche), SuperieurHierarchique(new_SuperieurHierarchique), ID_Poste(new_ID_Poste) {}