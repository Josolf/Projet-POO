#include "Client.h"

Client::Client() : ID_Client(0), Nom(""), Prenom(""), Date_de_Naissance(""), Date_premier_achat("") {}

Client::Client(System::String^ new_Nom, System::String^ new_Prenom, System::String^ new_Date_de_Naissance, System::String^ new_Date_premier_achat)
    : ID_Client(0), Nom(new_Nom), Prenom(new_Prenom), Date_de_Naissance(new_Date_de_Naissance), Date_premier_achat(new_Date_premier_achat) {}
