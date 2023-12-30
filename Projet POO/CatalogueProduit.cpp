#include "CatalogueProduit.h"

CatalogueProduit::CatalogueProduit() : ID_Produit(0), ID_entrepot(0), Prix_HT(0), REF_Produit(""), Designation(""), quantite_stock(0), seuil_reappro(0), taux_TVA(0), Historique_facturation("") {}

CatalogueProduit::CatalogueProduit(float newPrix_HT, System::String^ new_REF_Produit, System::String^ new_Designation, int new_quantite_stock, int new_seuil_reappro, float new_taux_TVA, System::String^ new_Historique_facturation)
    : ID_Produit(0), Prix_HT(newPrix_HT), REF_Produit(new_REF_Produit), Designation(new_Designation), quantite_stock(new_quantite_stock), seuil_reappro(new_seuil_reappro), taux_TVA(new_taux_TVA), Historique_facturation(new_Historique_facturation) {}