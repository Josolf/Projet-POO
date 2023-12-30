#pragma once

#include <Windows.h>
#include <sqlext.h>
#include <sqltypes.h>
#include <sql.h>
#include <string>
#include <sstream>
#include <msclr/marshal_cppstd.h>

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	public ref class ModifStock : public System::Windows::Forms::Form
	{
	public:
		ModifStock(void)
		{
			InitializeComponent();

		}

	protected:

		~ModifStock()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ DGV_modifierProduit;
	protected:

	private: System::Windows::Forms::Button^ buttonReculer;
	private: System::Windows::Forms::Button^ buttonAvancer;

	private: System::Windows::Forms::Button^ afficherStock;

	private: System::Windows::Forms::TextBox^ TB_refProduit;
	private: System::Windows::Forms::TextBox^ TB_Designation;
	private: System::Windows::Forms::TextBox^ TB_PrixHT;
	private: System::Windows::Forms::TextBox^ TB_TauxTVA;
	private: System::Windows::Forms::TextBox^ TB_quantiteProduit;
	private: System::Windows::Forms::TextBox^ TB_seuil;

	private: System::Windows::Forms::TextBox^ TB_IDP;
	private: System::Windows::Forms::TextBox^ Cb_Entrepot;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

	protected:

	private:

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ModifStock::typeid));
			this->DGV_modifierProduit = (gcnew System::Windows::Forms::DataGridView());
			this->buttonReculer = (gcnew System::Windows::Forms::Button());
			this->buttonAvancer = (gcnew System::Windows::Forms::Button());
			this->afficherStock = (gcnew System::Windows::Forms::Button());
			this->TB_refProduit = (gcnew System::Windows::Forms::TextBox());
			this->TB_Designation = (gcnew System::Windows::Forms::TextBox());
			this->TB_PrixHT = (gcnew System::Windows::Forms::TextBox());
			this->TB_TauxTVA = (gcnew System::Windows::Forms::TextBox());
			this->TB_quantiteProduit = (gcnew System::Windows::Forms::TextBox());
			this->TB_seuil = (gcnew System::Windows::Forms::TextBox());
			this->TB_IDP = (gcnew System::Windows::Forms::TextBox());
			this->Cb_Entrepot = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_modifierProduit))->BeginInit();
			this->SuspendLayout();

			this->DGV_modifierProduit->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->DGV_modifierProduit->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGV_modifierProduit->Location = System::Drawing::Point(27, 15);
			this->DGV_modifierProduit->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->DGV_modifierProduit->Name = L"DGV_modifierProduit";
			this->DGV_modifierProduit->RowHeadersWidth = 51;
			this->DGV_modifierProduit->RowTemplate->Height = 24;
			this->DGV_modifierProduit->Size = System::Drawing::Size(1447, 354);
			this->DGV_modifierProduit->TabIndex = 0;

			this->buttonReculer->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16, System::Drawing::FontStyle::Bold));
			this->buttonReculer->Location = System::Drawing::Point(1195, 616);
			this->buttonReculer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonReculer->Name = L"buttonReculer";
			this->buttonReculer->Size = System::Drawing::Size(143, 84);
			this->buttonReculer->TabIndex = 85;
			this->buttonReculer->Text = L"<";
			this->buttonReculer->UseVisualStyleBackColor = true;
			this->buttonReculer->Click += gcnew System::EventHandler(this, &ModifStock::buttonReculer_Click);

			this->buttonAvancer->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16, System::Drawing::FontStyle::Bold));
			this->buttonAvancer->Location = System::Drawing::Point(1361, 616);
			this->buttonAvancer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonAvancer->Name = L"buttonAvancer";
			this->buttonAvancer->Size = System::Drawing::Size(136, 84);
			this->buttonAvancer->TabIndex = 86;
			this->buttonAvancer->Text = L">";
			this->buttonAvancer->UseVisualStyleBackColor = true;
			this->buttonAvancer->Click += gcnew System::EventHandler(this, &ModifStock::buttonAvancer_Click);

			this->afficherStock->BackColor = System::Drawing::Color::Gainsboro;
			this->afficherStock->Location = System::Drawing::Point(1281, 379);
			this->afficherStock->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->afficherStock->Name = L"afficherStock";
			this->afficherStock->Size = System::Drawing::Size(192, 98);
			this->afficherStock->TabIndex = 89;
			this->afficherStock->Text = L"Charger le stock";
			this->afficherStock->UseVisualStyleBackColor = false;
			this->afficherStock->Click += gcnew System::EventHandler(this, &ModifStock::afficherStock_Click);

			this->TB_refProduit->BackColor = System::Drawing::Color::Gainsboro;
			this->TB_refProduit->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TB_refProduit->Location = System::Drawing::Point(286, 451);
			this->TB_refProduit->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->TB_refProduit->Name = L"TB_refProduit";
			this->TB_refProduit->Size = System::Drawing::Size(203, 19);
			this->TB_refProduit->TabIndex = 98;
			this->TB_refProduit->TextChanged += gcnew System::EventHandler(this, &ModifStock::TB_refProduit_TextChanged);

			this->TB_Designation->BackColor = System::Drawing::Color::Gainsboro;
			this->TB_Designation->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TB_Designation->Location = System::Drawing::Point(286, 490);
			this->TB_Designation->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->TB_Designation->Name = L"TB_Designation";
			this->TB_Designation->Size = System::Drawing::Size(203, 19);
			this->TB_Designation->TabIndex = 99;
			this->TB_Designation->TextChanged += gcnew System::EventHandler(this, &ModifStock::TB_Designation_TextChanged);

			this->TB_PrixHT->BackColor = System::Drawing::Color::Gainsboro;
			this->TB_PrixHT->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TB_PrixHT->Location = System::Drawing::Point(286, 529);
			this->TB_PrixHT->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->TB_PrixHT->Name = L"TB_PrixHT";
			this->TB_PrixHT->Size = System::Drawing::Size(203, 19);
			this->TB_PrixHT->TabIndex = 100;
			this->TB_PrixHT->TextChanged += gcnew System::EventHandler(this, &ModifStock::TB_PrixHT_TextChanged);

			this->TB_TauxTVA->BackColor = System::Drawing::Color::Gainsboro;
			this->TB_TauxTVA->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TB_TauxTVA->Location = System::Drawing::Point(286, 561);
			this->TB_TauxTVA->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->TB_TauxTVA->Name = L"TB_TauxTVA";
			this->TB_TauxTVA->Size = System::Drawing::Size(203, 19);
			this->TB_TauxTVA->TabIndex = 101;
			this->TB_TauxTVA->TextChanged += gcnew System::EventHandler(this, &ModifStock::TB_TauxTVA_TextChanged);

			this->TB_quantiteProduit->BackColor = System::Drawing::Color::Gainsboro;
			this->TB_quantiteProduit->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TB_quantiteProduit->Location = System::Drawing::Point(286, 594);
			this->TB_quantiteProduit->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->TB_quantiteProduit->Name = L"TB_quantiteProduit";
			this->TB_quantiteProduit->Size = System::Drawing::Size(203, 19);
			this->TB_quantiteProduit->TabIndex = 102;
			this->TB_quantiteProduit->TextChanged += gcnew System::EventHandler(this, &ModifStock::TB_quantiteProduit_TextChanged);

			this->TB_seuil->BackColor = System::Drawing::Color::Gainsboro;
			this->TB_seuil->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TB_seuil->Location = System::Drawing::Point(783, 596);
			this->TB_seuil->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->TB_seuil->Name = L"TB_seuil";
			this->TB_seuil->Size = System::Drawing::Size(203, 19);
			this->TB_seuil->TabIndex = 103;
			this->TB_seuil->TextChanged += gcnew System::EventHandler(this, &ModifStock::TB_seuil_TextChanged);

			this->TB_IDP->BackColor = System::Drawing::Color::Gainsboro;
			this->TB_IDP->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TB_IDP->Location = System::Drawing::Point(188, 390);
			this->TB_IDP->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->TB_IDP->Name = L"TB_IDP";
			this->TB_IDP->ReadOnly = true;
			this->TB_IDP->Size = System::Drawing::Size(58, 19);
			this->TB_IDP->TabIndex = 105;

			this->Cb_Entrepot->BackColor = System::Drawing::Color::Gainsboro;
			this->Cb_Entrepot->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Cb_Entrepot->Location = System::Drawing::Point(395, 390);
			this->Cb_Entrepot->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Cb_Entrepot->Name = L"Cb_Entrepot";
			this->Cb_Entrepot->ReadOnly = true;
			this->Cb_Entrepot->Size = System::Drawing::Size(94, 19);
			this->Cb_Entrepot->TabIndex = 106;

			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Cursor = System::Windows::Forms::Cursors::No;
			this->label9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label9->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label9->Location = System::Drawing::Point(260, 392);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(130, 21);
			this->label9->TabIndex = 152;
			this->label9->Text = L"ID de l\'entrepot";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label9->Click += gcnew System::EventHandler(this, &ModifStock::label9_Click);

			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Cursor = System::Windows::Forms::Cursors::No;
			this->label10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label10->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label10->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label10->Location = System::Drawing::Point(72, 561);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(102, 21);
			this->label10->TabIndex = 151;
			this->label10->Text = L"Taux de TVA";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Cursor = System::Windows::Forms::Cursors::No;
			this->label11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label11->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label11->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label11->Location = System::Drawing::Point(72, 490);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(103, 21);
			this->label11->TabIndex = 150;
			this->label11->Text = L"Désignation";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Cursor = System::Windows::Forms::Cursors::No;
			this->label12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label12->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label12->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label12->Location = System::Drawing::Point(72, 594);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(77, 21);
			this->label12->TabIndex = 149;
			this->label12->Text = L"Quantité";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Cursor = System::Windows::Forms::Cursors::No;
			this->label13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label13->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label13->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label13->Location = System::Drawing::Point(72, 529);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(123, 21);
			this->label13->TabIndex = 148;
			this->label13->Text = L"Prix hors-taxes";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Cursor = System::Windows::Forms::Cursors::No;
			this->label16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label16->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label16->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label16->Location = System::Drawing::Point(72, 449);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(170, 21);
			this->label16->TabIndex = 147;
			this->label16->Text = L"Référence du produit";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Cursor = System::Windows::Forms::Cursors::No;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(529, 594);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(240, 21);
			this->label3->TabIndex = 153;
			this->label3->Text = L"Seuil de reapprovisionnement";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Cursor = System::Windows::Forms::Cursors::No;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(63, 392);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 21);
			this->label2->TabIndex = 154;
			this->label2->Text = L"ID du produit";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1509, 720);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->Cb_Entrepot);
			this->Controls->Add(this->TB_IDP);
			this->Controls->Add(this->TB_seuil);
			this->Controls->Add(this->TB_quantiteProduit);
			this->Controls->Add(this->TB_TauxTVA);
			this->Controls->Add(this->TB_PrixHT);
			this->Controls->Add(this->TB_Designation);
			this->Controls->Add(this->TB_refProduit);
			this->Controls->Add(this->afficherStock);
			this->Controls->Add(this->buttonAvancer);
			this->Controls->Add(this->buttonReculer);
			this->Controls->Add(this->DGV_modifierProduit);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"ModifStock";
			this->Text = L"ModifStock";
			this->Load += gcnew System::EventHandler(this, &ModifStock::ModifStock_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_modifierProduit))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void ModifStock_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ connectionString = "Data Source=Martin_GOA;Initial Catalog=Projet;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);
		connection->Open();

		String^ query = "SELECT MIN(ID_PRODUIT) AS ID_PRODUIT FROM CATALOGUE_PRODUIT;";

		SqlCommand^ command = gcnew SqlCommand(query, connection);
		SqlDataReader^ reader_min = command->ExecuteReader();
		reader_min->Read();
		String^ MinID = reader_min["ID_PRODUIT"]->ToString();
		std::string minID = msclr::interop::marshal_as<std::string>(MinID);
		int min_ID = std::stoi(minID);

		TB_IDP->Text = MinID;
		ChargerInformationsStock(min_ID);
		ChargerProvient2(min_ID);

		connection->Close();

		try {

			connection->Open();

			String^ querySelectStock = "SELECT CATALOGUE_PRODUIT.ID_PRODUIT, REF_PRODUIT, DESIGNATION, PRIX_HT_FIXE, TAUX_TVA, PROVIENT2.QUANTITE_PRODUIT_STOCK, PROVIENT2.SEUIL_REAPPROVISIONNEMENT ,ENTREPOT.NOM_ENTREPOT, ENTREPOT.ID_ENTREPOT FROM [Projet].[dbo].[CATALOGUE_PRODUIT] JOIN PROVIENT2 ON CATALOGUE_PRODUIT.ID_PRODUIT = PROVIENT2.ID_PRODUIT JOIN ENTREPOT ON PROVIENT2.ID_ENTREPOT = ENTREPOT.ID_ENTREPOT";
			SqlDataAdapter^ commandStock = gcnew SqlDataAdapter(querySelectStock, connection);

			DataTable^ dataTable = gcnew DataTable();

			commandStock->Fill(dataTable);

			connection->Close();

			DGV_modifierProduit->DataSource = dataTable;
		}
		catch (Exception^ ex) {

			MessageBox::Show("Erreur lors de la récupération du stock : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {

			connection->Close();
		}
	}

	private: void ChargerInformationsStock(int produitId) {
		String^ connectionString = "Data Source=Martin_GOA;Initial Catalog=Projet;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try {
			connection->Open();

			String^ query = "SELECT * FROM dbo.CATALOGUE_PRODUIT WHERE ID_PRODUIT = " + produitId;
			SqlCommand^ command = gcnew SqlCommand(query, connection);
			SqlDataReader^ reader = command->ExecuteReader();

			if (reader->Read()) {

				if (reader["REF_PRODUIT"]->ToString() == "") {
					int nextID = produitId + 1;
					TB_IDP->Text = nextID.ToString();
					ChargerInformationsStock(nextID);
					ChargerProvient2(nextID);
				}
				else {

					TB_refProduit->Text = reader["REF_PRODUIT"]->ToString();
					TB_Designation->Text = reader["DESIGNATION"]->ToString();

					String^ PrixHTStr = reader["PRIX_HT_FIXE"]->ToString();
					TB_PrixHT->Text = PrixHTStr;

					String^ TVAStr = reader["TAUX_TVA"]->ToString();
					TB_TauxTVA->Text = TVAStr;

					reader->Close();
				}

			}
			else {

				TB_refProduit->Text = "";
				TB_Designation->Text = "";
				TB_PrixHT->Text = "";
				TB_TauxTVA->Text = "";

				reader->Close();
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Erreur lors du chargement des données : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			connection->Close();
		}
	}

	private: void MettreAJourProduitFloat(int produitId, String^ champ, float valeur) {
		String^ connectionString = "Data Source=Martin_GOA;Initial Catalog=Projet;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try {
			connection->Open();
			String^ query = "UPDATE dbo.CATALOGUE_PRODUIT SET " + champ + " = @Valeur WHERE ID_PRODUIT = @produitID";
			SqlCommand^ command = gcnew SqlCommand(query, connection);
			command->Parameters->AddWithValue("@Valeur", valeur);
			command->Parameters->AddWithValue("@produitID", produitId);
			command->ExecuteNonQuery();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Erreur lors de la mise à jour : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			connection->Close();
		}
	}

	private: void MettreAJourProduit(int produitId, String^ champ, String^ valeur) {
		String^ connectionString = "Data Source=Martin_GOA;Initial Catalog=Projet;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try {
			connection->Open();
			String^ query = "UPDATE dbo.CATALOGUE_PRODUIT SET " + champ + " = @Valeur WHERE ID_PRODUIT = @produitID";
			SqlCommand^ command = gcnew SqlCommand(query, connection);
			command->Parameters->AddWithValue("@Valeur", valeur);
			command->Parameters->AddWithValue("@produitID", produitId);
			command->ExecuteNonQuery();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Erreur lors de la mise à jour : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			connection->Close();
		}
	}

		   bool estUnFlottant(const std::string& str) {
			   std::istringstream iss(str);
			   double nombre;
			   iss >> nombre;

			   return iss.eof() && !iss.fail();
		   }

	private: System::Void TB_refProduit_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		int produitId = Convert::ToInt32(TB_IDP->Text);
		String^ nouvelleRef = TB_refProduit->Text;
		MettreAJourProduit(produitId, "REF_PRODUIT", nouvelleRef);
	}

	private: System::Void TB_Designation_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		int produitId = Convert::ToInt32(TB_IDP->Text);
		String^ nouvelleDesignation = TB_Designation->Text;
		MettreAJourProduit(produitId, "DESIGNATION", nouvelleDesignation);
	}

	private: System::Void TB_PrixHT_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (TB_PrixHT->Text != "") {
			String^ nouveauPrix = TB_PrixHT->Text;
			std::string str = msclr::interop::marshal_as<std::string>(nouveauPrix);

			if (estUnFlottant(str)) {
				int produitId = Convert::ToInt32(TB_IDP->Text);
				float prixHT = std::stof(str);
				MettreAJourProduitFloat(produitId, "PRIX_HT_FIXE", prixHT);
			}
		}
		else {
			int produitId = Convert::ToInt32(TB_IDP->Text);
			float prixHT = 1.0;
			MettreAJourProduitFloat(produitId, "PRIX_HT_FIXE", prixHT);
		}
	}

	private: System::Void TB_TauxTVA_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (TB_TauxTVA->Text != "") {
			String^ nouvelleTVA = TB_TauxTVA->Text;
			std::string str2 = msclr::interop::marshal_as<std::string>(nouvelleTVA);

			if (estUnFlottant(str2)) {
				int produitId = Convert::ToInt32(TB_IDP->Text);
				float TVA = std::stof(str2);
				MettreAJourProduitFloat(produitId, "TAUX_TVA", TVA);
			}
		}
		else {
			int produitId = Convert::ToInt32(TB_IDP->Text);
			float TVA = 1.0;
			MettreAJourProduitFloat(produitId, "TAUX_TVA", TVA);
		}
	}

	private: void ChargerProvient2(int produitId) {
		String^ connectionString = "Data Source=Martin_GOA;Initial Catalog=Projet;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);
		SqlDataReader^ reader = nullptr;
		try {
			connection->Open();

			String^ query = "SELECT PROVIENT2.* FROM PROVIENT2 "
				"JOIN CATALOGUE_PRODUIT ON PROVIENT2.ID_PRODUIT = CATALOGUE_PRODUIT.ID_PRODUIT "
				"WHERE PROVIENT2.ID_PRODUIT = @produitId";

			SqlCommand^ command = gcnew SqlCommand(query, connection);

			command->Parameters->AddWithValue("@produitId", produitId);

			SqlDataReader^ reader = command->ExecuteReader();

			if (reader->Read()) {

				String^ idEntrepot = reader["ID_ENTREPOT"]->ToString();
				int id_Entrepot = Convert::ToInt32(idEntrepot);

				reader->Close();

				query = "SELECT * FROM PROVIENT2 WHERE ID_ENTREPOT = " + id_Entrepot;
				command = gcnew SqlCommand(query, connection);
				reader = command->ExecuteReader();

				if (reader->Read()) {

					Cb_Entrepot->Text = reader["ID_ENTREPOT"]->ToString();
					TB_quantiteProduit->Text = reader["QUANTITE_PRODUIT_STOCK"]->ToString();
					TB_seuil->Text = reader["SEUIL_REAPPROVISIONNEMENT"]->ToString();
				}
			}
			else {

				Cb_Entrepot->Text = "";
				TB_quantiteProduit->Text = "";
				TB_seuil->Text = "";

				MessageBox::Show("Erreur de récupération des données : " + produitId, "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		catch (Exception^ ex) {

		}

		if (connection->State == ConnectionState::Open) {
			connection->Close();

		}
	}

	private: void MettreAJourProvient2Int(int produitId, int entrepotID, String^ champ, int valeur) {
		String^ connectionString = "Data Source=Martin_GOA;Initial Catalog=Projet;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try {
			connection->Open();
			String^ query = "UPDATE dbo.PROVIENT2 SET " + champ + " = @Valeur WHERE ID_PRODUIT = @produitID AND ID_ENTREPOT = @entrepotID";
			SqlCommand^ command = gcnew SqlCommand(query, connection);
			command->Parameters->AddWithValue("@Valeur", valeur);
			command->Parameters->AddWithValue("@produitID", produitId);
			command->Parameters->AddWithValue("@entrepotID", entrepotID);
			command->ExecuteNonQuery();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Erreur lors de la mise à jour : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			connection->Close();
		}
	}

		   bool estUnEntier(const std::string& str) {
			   std::istringstream iss(str);
			   int nombre;
			   iss >> nombre;
			   return iss.eof() && !iss.fail();
		   }

	private: System::Void TB_quantiteProduit_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (TB_quantiteProduit->Text != "") {
			String^ nouvelleQuantite = TB_quantiteProduit->Text;
			std::string str3 = msclr::interop::marshal_as<std::string>(nouvelleQuantite);

			if (estUnEntier(str3)) {
				int produitId = Convert::ToInt32(TB_IDP->Text);
				int entrepotId = Convert::ToInt32(Cb_Entrepot->Text);
				float Quantite = std::stoi(str3);
				MettreAJourProvient2Int(produitId, entrepotId, "QUANTITE_PRODUIT_STOCK", Quantite);
			}
			else {
				TB_quantiteProduit->Text = "1";
				MessageBox::Show("Veuillez entrez une valeur correcte");
			}
		}
		else {
			int produitId = Convert::ToInt32(TB_IDP->Text);
			int entrepotId = Convert::ToInt32(Cb_Entrepot->Text);
			int Quantite = 1;
			MettreAJourProvient2Int(produitId, entrepotId, "QUANTITE_PRODUIT_STOCK", Quantite);
		}
	}

	private: System::Void TB_seuil_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (TB_seuil->Text != "") {
			String^ nouveauSeuil = TB_seuil->Text;
			std::string str4 = msclr::interop::marshal_as<std::string>(nouveauSeuil);

			if (estUnEntier(str4)) {
				int produitId = Convert::ToInt32(TB_IDP->Text);
				int entrepotId = Convert::ToInt32(Cb_Entrepot->Text);
				float Seuil = std::stoi(str4);
				MettreAJourProvient2Int(produitId, entrepotId, "SEUIL_REAPPROVISIONNEMENT", Seuil);
			}
			else {
				TB_seuil->Text = "1";
				MessageBox::Show("Veuillez entrez une valeur correcte");
			}
		}
		else {
			int produitId = Convert::ToInt32(TB_IDP->Text);
			int entrepotId = Convert::ToInt32(Cb_Entrepot->Text);
			int Seuil = 1;
			MettreAJourProvient2Int(produitId, entrepotId, "SEUIL_REAPPROVISIONNEMENT", Seuil);
		}
	}

	private: System::Void afficherStock_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ connectionString = "Data Source=Martin_GOA;Initial Catalog=Projet;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try {

			connection->Open();

			String^ querySelectStock = "SELECT CATALOGUE_PRODUIT.ID_PRODUIT, REF_PRODUIT, DESIGNATION, PRIX_HT_FIXE, TAUX_TVA, PROVIENT2.QUANTITE_PRODUIT_STOCK, PROVIENT2.SEUIL_REAPPROVISIONNEMENT ,ENTREPOT.NOM_ENTREPOT, ENTREPOT.ID_ENTREPOT FROM [Projet].[dbo].[CATALOGUE_PRODUIT] JOIN PROVIENT2 ON CATALOGUE_PRODUIT.ID_PRODUIT = PROVIENT2.ID_PRODUIT JOIN ENTREPOT ON PROVIENT2.ID_ENTREPOT = ENTREPOT.ID_ENTREPOT";
			SqlDataAdapter^ commandStock = gcnew SqlDataAdapter(querySelectStock, connection);

			DataTable^ dataTable = gcnew DataTable();

			commandStock->Fill(dataTable);

			connection->Close();

			DGV_modifierProduit->DataSource = dataTable;
		}
		catch (Exception^ ex) {

			MessageBox::Show("Erreur lors de la récupération du stock : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {

			connection->Close();
		}

		String^ connectionString2 = "Data Source=Martin_GOA;Initial Catalog=Projet;Integrated Security=True";
		SqlConnection^ connection2 = gcnew SqlConnection(connectionString2);
		connection2->Open();

		String^ query = "SELECT MIN(ID_PRODUIT) AS ID_PRODUIT FROM CATALOGUE_PRODUIT;";

		SqlCommand^ command = gcnew SqlCommand(query, connection2);
		SqlDataReader^ reader_min = command->ExecuteReader();
		reader_min->Read();
		String^ MinID = reader_min["ID_PRODUIT"]->ToString();
		std::string minID = msclr::interop::marshal_as<std::string>(MinID);
		int min_ID = std::stoi(minID);

		connection2->Close();

		TB_IDP->Text = MinID;
		ChargerInformationsStock(min_ID);
		ChargerProvient2(min_ID);
	}

	private: System::Void buttonAvancer_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ connectionString = "Data Source=Martin_GOA;Initial Catalog=Projet;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);
		connection->Open();

		String^ queryMaxID = "SELECT MAX(ID_PRODUIT) AS ID_PRODUIT FROM CATALOGUE_PRODUIT;";

		SqlCommand^ commandMaxID = gcnew SqlCommand(queryMaxID, connection);

		SqlDataReader^ reader_max = commandMaxID->ExecuteReader();
		reader_max->Read();
		String^ MaxID = reader_max["ID_PRODUIT"]->ToString();
		std::string maxID = msclr::interop::marshal_as<std::string>(MaxID);
		int max_ID = std::stoi(maxID);

		reader_max->Close();
		connection->Close();

		int current_ID;
		if (Int32::TryParse(TB_IDP->Text, current_ID)) {

			if (current_ID < max_ID) {
				int currentId = Convert::ToInt32(TB_IDP->Text);

				connection->Open();
				String^ queryNextID = "SELECT * FROM(SELECT ID_PRODUIT, LEAD(ID_PRODUIT) OVER(ORDER BY ID_PRODUIT) AS NextID FROM CATALOGUE_PRODUIT) AS SubQuery WHERE ID_PRODUIT = @idProduit; ";
				SqlCommand^ commandNextID = gcnew SqlCommand(queryNextID, connection);
				commandNextID->Parameters->AddWithValue("@idProduit", currentId);

				SqlDataReader^ reader_next = commandNextID->ExecuteReader();
				reader_next->Read();
				String^ Next_ID = reader_next["NextID"]->ToString();
				std::string nextID = msclr::interop::marshal_as<std::string>(Next_ID);
				int NextID = std::stoi(nextID);
				reader_next->Close();
				connection->Close();

				TB_IDP->Text = NextID.ToString();

				ChargerInformationsStock(NextID);
				ChargerProvient2(NextID);
			}
			else {

				MessageBox::Show("Aucun autre produit");
			}
		}
		else {

			MessageBox::Show("L'ID du Produit actuel n'est pas valide.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void buttonReculer_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connectionString = "Data Source=Martin_GOA;Initial Catalog=Projet;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);
		connection->Open();

		String^ query = "SELECT MIN(ID_PRODUIT) AS ID_PRODUIT FROM CATALOGUE_PRODUIT;";

		SqlCommand^ command = gcnew SqlCommand(query, connection);
		SqlDataReader^ reader_min = command->ExecuteReader();
		reader_min->Read();
		String^ MinID = reader_min["ID_PRODUIT"]->ToString();
		std::string minID = msclr::interop::marshal_as<std::string>(MinID);
		int min_ID = std::stoi(minID);

		connection->Close();

		int currentId = Convert::ToInt32(TB_IDP->Text);
		int previousId = currentId - 1;

		if (currentId > min_ID) {
			int currentId = Convert::ToInt32(TB_IDP->Text);

			connection->Open();
			String^ queryPreviousID = "SELECT * FROM(SELECT ID_PRODUIT, LAG(ID_PRODUIT) OVER(ORDER BY ID_PRODUIT) AS PreviousID FROM CATALOGUE_PRODUIT) AS SubQuery WHERE ID_PRODUIT = @idProduit; ";
			SqlCommand^ commandPreviousID = gcnew SqlCommand(queryPreviousID, connection);
			commandPreviousID->Parameters->AddWithValue("@idProduit", currentId);

			SqlDataReader^ reader_previous = commandPreviousID->ExecuteReader();
			reader_previous->Read();
			String^ Previous_ID = reader_previous["PreviousID"]->ToString();
			std::string previousID = msclr::interop::marshal_as<std::string>(Previous_ID);
			int PreviousID = std::stoi(previousID);
			reader_previous->Close();
			connection->Close();

			TB_IDP->Text = PreviousID.ToString();

			ChargerInformationsStock(PreviousID);
			ChargerProvient2(PreviousID);
		}
		else {
			MessageBox::Show("Il n'existe pas de produit avant");
		}
	}
	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}