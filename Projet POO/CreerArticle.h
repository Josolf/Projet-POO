#pragma once
#include "CatalogueProduit.h"
#include <string>
#include <msclr/marshal_cppstd.h>

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	public ref class CreerArticle : public System::Windows::Forms::Form
	{
	public:
		CreerArticle(void)
		{
			InitializeComponent();

		}

	protected:

		~CreerArticle()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::ComboBox^ Cb_Entrepot;

	private: System::Windows::Forms::TextBox^ Tb_Ref;

	private: System::Windows::Forms::TextBox^ Tb_Designation;
	private: System::Windows::Forms::TextBox^ Tb_PrixHT;
	private: System::Windows::Forms::TextBox^ Tb_Quantite;

	private: System::Windows::Forms::TextBox^ Tb_PrixTVA;
	private: System::Windows::Forms::Button^ Bt_Valider_Art;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label8;

	private:

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CreerArticle::typeid));
			this->Cb_Entrepot = (gcnew System::Windows::Forms::ComboBox());
			this->Tb_Ref = (gcnew System::Windows::Forms::TextBox());
			this->Tb_Designation = (gcnew System::Windows::Forms::TextBox());
			this->Tb_PrixHT = (gcnew System::Windows::Forms::TextBox());
			this->Tb_Quantite = (gcnew System::Windows::Forms::TextBox());
			this->Tb_PrixTVA = (gcnew System::Windows::Forms::TextBox());
			this->Bt_Valider_Art = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();

			this->Cb_Entrepot->BackColor = System::Drawing::Color::LightGray;
			this->Cb_Entrepot->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Cb_Entrepot->FormattingEnabled = true;
			this->Cb_Entrepot->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"1", L"2", L"3", L"4" });
			this->Cb_Entrepot->Location = System::Drawing::Point(294, 188);
			this->Cb_Entrepot->Margin = System::Windows::Forms::Padding(2);
			this->Cb_Entrepot->Name = L"Cb_Entrepot";
			this->Cb_Entrepot->Size = System::Drawing::Size(69, 28);
			this->Cb_Entrepot->TabIndex = 42;

			this->Tb_Ref->BackColor = System::Drawing::Color::Gainsboro;
			this->Tb_Ref->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Tb_Ref->Location = System::Drawing::Point(32, 46);
			this->Tb_Ref->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Tb_Ref->Name = L"Tb_Ref";
			this->Tb_Ref->Size = System::Drawing::Size(156, 19);
			this->Tb_Ref->TabIndex = 43;

			this->Tb_Designation->BackColor = System::Drawing::Color::Gainsboro;
			this->Tb_Designation->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Tb_Designation->Location = System::Drawing::Point(280, 46);
			this->Tb_Designation->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Tb_Designation->Name = L"Tb_Designation";
			this->Tb_Designation->Size = System::Drawing::Size(177, 19);
			this->Tb_Designation->TabIndex = 44;

			this->Tb_PrixHT->BackColor = System::Drawing::Color::Gainsboro;
			this->Tb_PrixHT->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Tb_PrixHT->Location = System::Drawing::Point(32, 114);
			this->Tb_PrixHT->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Tb_PrixHT->Name = L"Tb_PrixHT";
			this->Tb_PrixHT->Size = System::Drawing::Size(156, 19);
			this->Tb_PrixHT->TabIndex = 45;

			this->Tb_Quantite->BackColor = System::Drawing::Color::Gainsboro;
			this->Tb_Quantite->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Tb_Quantite->Location = System::Drawing::Point(32, 190);
			this->Tb_Quantite->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Tb_Quantite->Name = L"Tb_Quantite";
			this->Tb_Quantite->Size = System::Drawing::Size(156, 19);
			this->Tb_Quantite->TabIndex = 46;

			this->Tb_PrixTVA->BackColor = System::Drawing::Color::Gainsboro;
			this->Tb_PrixTVA->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Tb_PrixTVA->Location = System::Drawing::Point(280, 114);
			this->Tb_PrixTVA->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Tb_PrixTVA->Name = L"Tb_PrixTVA";
			this->Tb_PrixTVA->Size = System::Drawing::Size(177, 19);
			this->Tb_PrixTVA->TabIndex = 47;

			this->Bt_Valider_Art->BackColor = System::Drawing::Color::Gainsboro;
			this->Bt_Valider_Art->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Bt_Valider_Art->FlatAppearance->BorderColor = System::Drawing::Color::Lime;
			this->Bt_Valider_Art->FlatAppearance->BorderSize = 0;
			this->Bt_Valider_Art->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->Bt_Valider_Art->Location = System::Drawing::Point(130, 248);
			this->Bt_Valider_Art->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Bt_Valider_Art->Name = L"Bt_Valider_Art";
			this->Bt_Valider_Art->Size = System::Drawing::Size(233, 55);
			this->Bt_Valider_Art->TabIndex = 48;
			this->Bt_Valider_Art->Text = L"Valider";
			this->Bt_Valider_Art->UseVisualStyleBackColor = false;
			this->Bt_Valider_Art->Click += gcnew System::EventHandler(this, &CreerArticle::Bt_Valider_Art_Click);

			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Cursor = System::Windows::Forms::Cursors::No;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(28, 158);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 21);
			this->label1->TabIndex = 143;
			this->label1->Text = L"Quantité";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Cursor = System::Windows::Forms::Cursors::No;
			this->label7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->Location = System::Drawing::Point(28, 88);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(123, 21);
			this->label7->TabIndex = 142;
			this->label7->Text = L"Prix hors-taxes";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Cursor = System::Windows::Forms::Cursors::No;
			this->label16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label16->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label16->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label16->Location = System::Drawing::Point(28, 20);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(170, 21);
			this->label16->TabIndex = 141;
			this->label16->Text = L"Référence du produit";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Cursor = System::Windows::Forms::Cursors::No;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(276, 158);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(132, 21);
			this->label2->TabIndex = 146;
			this->label2->Text = L"N° de l\'entrepot";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Cursor = System::Windows::Forms::Cursors::No;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(276, 88);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(102, 21);
			this->label4->TabIndex = 145;
			this->label4->Text = L"Taux de TVA";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Cursor = System::Windows::Forms::Cursors::No;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label8->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label8->Location = System::Drawing::Point(276, 20);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(103, 21);
			this->label8->TabIndex = 144;
			this->label8->Text = L"Désignation";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(504, 318);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->Bt_Valider_Art);
			this->Controls->Add(this->Tb_PrixTVA);
			this->Controls->Add(this->Tb_Quantite);
			this->Controls->Add(this->Tb_PrixHT);
			this->Controls->Add(this->Tb_Designation);
			this->Controls->Add(this->Tb_Ref);
			this->Controls->Add(this->Cb_Entrepot);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"CreerArticle";
			this->Text = L"CreerArticle";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Bt_Valider_Art_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ refProduit = Tb_Ref->Text;
		String^ designationProduit = Tb_Designation->Text;

		String^ numEntrepot = Cb_Entrepot->Text;

		CatalogueProduit^ nouveauProduit = gcnew CatalogueProduit();

		float prixHT;
		try {
			std::string str = msclr::interop::marshal_as<std::string>(Tb_PrixHT->Text);
			prixHT = std::stof(str);
		}
		catch (const std::invalid_argument&) {
			MessageBox::Show("Le prix hors-taxe doit être un réel.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		int quantiteStock;
		try {
			std::string str2 = msclr::interop::marshal_as<std::string>(Tb_Quantite->Text);
			quantiteStock = std::stoi(str2);
		}
		catch (const std::invalid_argument&) {
			MessageBox::Show("La quantité doit être un nombre entier.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		std::string str3 = msclr::interop::marshal_as<std::string>(numEntrepot);
		float IdEntrepot = std::stoi(str3);

		float TVAproduit;
		try {
			std::string str4 = msclr::interop::marshal_as<std::string>(Tb_PrixTVA->Text);
			TVAproduit = std::stof(str4);
		}
		catch (const std::invalid_argument&) {
			MessageBox::Show("Le taux de TVA doit être un réel.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		nouveauProduit->set_Prix_HT(prixHT);
		nouveauProduit->set_REF(refProduit);
		nouveauProduit->set_Designation(designationProduit);
		nouveauProduit->set_quantite_stock(quantiteStock);
		nouveauProduit->set_ID_entrepot(IdEntrepot);
		nouveauProduit->set_TVA(TVAproduit);

		String^ connectionString = "Data Source=Martin_GOA;Initial Catalog=Projet;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try {

			connection->Open();

			String^ queryProduit = "INSERT INTO CATALOGUE_PRODUIT (REF_PRODUIT, DESIGNATION, PRIX_HT_FIXE, TAUX_TVA) VALUES (@ref_produit, @designation, @prix_HT, @TVA)";
			SqlCommand^ commandProduit = gcnew SqlCommand(queryProduit, connection);

			commandProduit->Parameters->Add("@ref_produit", SqlDbType::VarChar, 50)->Value = refProduit;
			commandProduit->Parameters->Add("@designation", SqlDbType::VarChar, 50)->Value = designationProduit;
			commandProduit->Parameters->Add("@prix_HT", SqlDbType::Float)->Value = prixHT;
			commandProduit->Parameters->Add("@TVA", SqlDbType::Float)->Value = TVAproduit;
			commandProduit->ExecuteNonQuery();

			String^ queryGetIDProduit = "SELECT IDENT_CURRENT('CATALOGUE_PRODUIT') AS IDProduit";
			SqlCommand^ commandGetIDProduit = gcnew SqlCommand(queryGetIDProduit, connection);
			Object^ resultClient = commandGetIDProduit->ExecuteScalar();

			int idClient = Convert::ToInt32(resultClient);
			nouveauProduit->set_ID_Produit(idClient);

			String^ queryProvient2 = "INSERT INTO PROVIENT2 (ID_PRODUIT, ID_ENTREPOT, QUANTITE_PRODUIT_STOCK, SEUIL_REAPPROVISIONNEMENT) VALUES (@ID_P, @ID_E, @quantite, @seuil)";
			SqlCommand^ commandProvient2 = gcnew SqlCommand(queryProvient2, connection);

			commandProvient2->Parameters->Add("@ID_P", SqlDbType::Int)->Value = nouveauProduit->get_ID_produit();
			commandProvient2->Parameters->Add("@ID_E", SqlDbType::Int)->Value = IdEntrepot;
			commandProvient2->Parameters->Add("@quantite", SqlDbType::Int)->Value = quantiteStock;
			commandProvient2->Parameters->Add("@seuil", SqlDbType::Int)->Value = quantiteStock / 4;
			commandProvient2->ExecuteNonQuery();

			this->Close();

			MessageBox::Show("Le produit a été ajouté à la base de données avec succès.", "Succès", MessageBoxButtons::OK, MessageBoxIcon::Information);

		}
		catch (Exception^ ex) {

			MessageBox::Show("Erreur lors de l'ajout du produit : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {

			connection->Close();
		}
	}
	};
}