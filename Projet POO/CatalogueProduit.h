#pragma once 

#ifndef CATALOGUE_H
#define CATALOGUE_H

#include <iostream>

ref class CatalogueProduit
{
private:
	int ID_Produit;
	int ID_entrepot;
	float Prix_HT;
	System::String^ REF_Produit;
	System::String^ Designation;
	int quantite_stock;
	int seuil_reappro;
	float taux_TVA;
	System::String^ Historique_facturation;

public:

	CatalogueProduit();
	CatalogueProduit(float newPrix_HT, System::String^ new_REF_Produit, System::String^ new_Designation, int new_quantite_stock, int new_seuil_reappro, float new_taux_TVA, System::String^ new_Historique_facturation);

	int get_ID_produit() { return ID_Produit; }
	int get_ID_entrepot() { return ID_entrepot; }
	float get_Prix_HT() { return Prix_HT; }
	System::String^ get_REF_Produit() { return REF_Produit; }
	System::String^ get_Designation() { return Designation; }
	int get_quantiteStock() { return quantite_stock; }
	int get_seuil_reappro() { return seuil_reappro; }
	System::String^ get_Historique_facturation() { return Historique_facturation; }

	void set_ID_Produit(int cID_P) { ID_Produit = cID_P; }
	void set_ID_entrepot(int cID_E) { ID_entrepot = cID_E; }
	void set_Prix_HT(float cPrix) { Prix_HT = cPrix; }
	void set_REF(System::String^ cREF) { REF_Produit = cREF; }
	void set_Designation(System::String^ cDesignation) { Designation = cDesignation; }
	void set_quantite_stock(int cQuantite) { quantite_stock = cQuantite; }
	void set_seuil_reappro(int cSeuil) { seuil_reappro = cSeuil; }
	void set_TVA(float cTVA) { taux_TVA = cTVA; }
	void set_Historique_Facturation(System::String^ cHistorique) { Historique_facturation = cHistorique; }
};

#endif

