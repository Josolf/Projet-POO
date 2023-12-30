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

	public ref class Statistiques : public System::Windows::Forms::Form
	{
	public:
		Statistiques(void)
		{
			InitializeComponent();

		}

	protected:

		~Statistiques()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBoxMois;
	private: System::Windows::Forms::Button^ BtnCA;
	private: System::Windows::Forms::TextBox^ TbCA;

	private: System::Windows::Forms::Button^ BtnStats;

	private: System::Windows::Forms::DataGridView^ DgvSeuil;

	private: System::Windows::Forms::TextBox^ TbCommercial;
	private: System::Windows::Forms::TextBox^ TbAchat;

	private: System::Windows::Forms::DataGridView^ DgvPlusVendus;
	private: System::Windows::Forms::DataGridView^ DgvMoinsVendus;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label7;

	private:

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Statistiques::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBoxMois = (gcnew System::Windows::Forms::ComboBox());
			this->BtnCA = (gcnew System::Windows::Forms::Button());
			this->TbCA = (gcnew System::Windows::Forms::TextBox());
			this->BtnStats = (gcnew System::Windows::Forms::Button());
			this->DgvSeuil = (gcnew System::Windows::Forms::DataGridView());
			this->TbCommercial = (gcnew System::Windows::Forms::TextBox());
			this->TbAchat = (gcnew System::Windows::Forms::TextBox());
			this->DgvPlusVendus = (gcnew System::Windows::Forms::DataGridView());
			this->DgvMoinsVendus = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DgvSeuil))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DgvPlusVendus))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DgvMoinsVendus))->BeginInit();
			this->SuspendLayout();

			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Gainsboro;
			this->label2->Location = System::Drawing::Point(315, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Mois :";

			this->comboBoxMois->BackColor = System::Drawing::Color::Gainsboro;
			this->comboBoxMois->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxMois->FormattingEnabled = true;
			this->comboBoxMois->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"01", L"02", L"03", L"04", L"05", L"06", L"07",
					L"08", L"09", L"10", L"11", L"12"
			});
			this->comboBoxMois->Location = System::Drawing::Point(371, 69);
			this->comboBoxMois->Margin = System::Windows::Forms::Padding(2);
			this->comboBoxMois->Name = L"comboBoxMois";
			this->comboBoxMois->Size = System::Drawing::Size(69, 28);
			this->comboBoxMois->TabIndex = 40;

			this->BtnCA->BackColor = System::Drawing::Color::Gainsboro;
			this->BtnCA->Location = System::Drawing::Point(469, 68);
			this->BtnCA->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->BtnCA->Name = L"BtnCA";
			this->BtnCA->Size = System::Drawing::Size(177, 30);
			this->BtnCA->TabIndex = 41;
			this->BtnCA->Text = L"Valider";
			this->BtnCA->UseVisualStyleBackColor = false;
			this->BtnCA->Click += gcnew System::EventHandler(this, &Statistiques::BtnCA_Click);

			this->TbCA->BackColor = System::Drawing::Color::Gainsboro;
			this->TbCA->Location = System::Drawing::Point(665, 69);
			this->TbCA->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->TbCA->Name = L"TbCA";
			this->TbCA->ReadOnly = true;
			this->TbCA->Size = System::Drawing::Size(272, 26);
			this->TbCA->TabIndex = 42;

			this->BtnStats->BackColor = System::Drawing::Color::Gainsboro;
			this->BtnStats->Location = System::Drawing::Point(449, 118);
			this->BtnStats->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->BtnStats->Name = L"BtnStats";
			this->BtnStats->Size = System::Drawing::Size(227, 88);
			this->BtnStats->TabIndex = 44;
			this->BtnStats->Text = L"Générer les statistiques";
			this->BtnStats->UseVisualStyleBackColor = false;
			this->BtnStats->Click += gcnew System::EventHandler(this, &Statistiques::BtnStats_Click);

			this->DgvSeuil->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->DgvSeuil->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DgvSeuil->Location = System::Drawing::Point(105, 276);
			this->DgvSeuil->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->DgvSeuil->Name = L"DgvSeuil";
			this->DgvSeuil->RowHeadersWidth = 51;
			this->DgvSeuil->RowTemplate->Height = 24;
			this->DgvSeuil->Size = System::Drawing::Size(983, 150);
			this->DgvSeuil->TabIndex = 45;

			this->TbCommercial->BackColor = System::Drawing::Color::Gainsboro;
			this->TbCommercial->Location = System::Drawing::Point(179, 468);
			this->TbCommercial->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->TbCommercial->Name = L"TbCommercial";
			this->TbCommercial->ReadOnly = true;
			this->TbCommercial->Size = System::Drawing::Size(209, 26);
			this->TbCommercial->TabIndex = 48;

			this->TbAchat->BackColor = System::Drawing::Color::Gainsboro;
			this->TbAchat->Location = System::Drawing::Point(842, 468);
			this->TbAchat->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->TbAchat->Name = L"TbAchat";
			this->TbAchat->ReadOnly = true;
			this->TbAchat->Size = System::Drawing::Size(172, 26);
			this->TbAchat->TabIndex = 49;

			this->DgvPlusVendus->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->DgvPlusVendus->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DgvPlusVendus->GridColor = System::Drawing::SystemColors::ActiveCaption;
			this->DgvPlusVendus->Location = System::Drawing::Point(33, 535);
			this->DgvPlusVendus->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->DgvPlusVendus->Name = L"DgvPlusVendus";
			this->DgvPlusVendus->RowHeadersWidth = 51;
			this->DgvPlusVendus->RowTemplate->Height = 24;
			this->DgvPlusVendus->Size = System::Drawing::Size(555, 181);
			this->DgvPlusVendus->TabIndex = 52;

			this->DgvMoinsVendus->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->DgvMoinsVendus->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DgvMoinsVendus->Location = System::Drawing::Point(612, 535);
			this->DgvMoinsVendus->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->DgvMoinsVendus->Name = L"DgvMoinsVendus";
			this->DgvMoinsVendus->RowHeadersWidth = 51;
			this->DgvMoinsVendus->RowTemplate->Height = 24;
			this->DgvMoinsVendus->Size = System::Drawing::Size(558, 181);
			this->DgvMoinsVendus->TabIndex = 53;

			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Cursor = System::Windows::Forms::Cursors::No;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(485, 33);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(138, 21);
			this->label1->TabIndex = 155;
			this->label1->Text = L"Chiffre d\'affaires";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Cursor = System::Windows::Forms::Cursors::No;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(396, 251);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(362, 21);
			this->label3->TabIndex = 156;
			this->label3->Text = L"Produits sous le seuil de réapprovisionnement";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Cursor = System::Windows::Forms::Cursors::No;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(158, 442);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(230, 21);
			this->label4->TabIndex = 157;
			this->label4->Text = L"Valeur commerciale du stock";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Cursor = System::Windows::Forms::Cursors::No;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label8->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label8->Location = System::Drawing::Point(838, 442);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(188, 21);
			this->label8->TabIndex = 158;
			this->label8->Text = L"Valeur d\'achat du stock";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Cursor = System::Windows::Forms::Cursors::No;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Location = System::Drawing::Point(790, 510);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(259, 21);
			this->label5->TabIndex = 159;
			this->label5->Text = L"Les 10 produits les moins vendus";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Cursor = System::Windows::Forms::Cursors::No;
			this->label7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->Location = System::Drawing::Point(158, 510);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(244, 21);
			this->label7->TabIndex = 160;
			this->label7->Text = L"Les 10 produits les plus vendus";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1194, 731);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->DgvMoinsVendus);
			this->Controls->Add(this->DgvPlusVendus);
			this->Controls->Add(this->TbAchat);
			this->Controls->Add(this->TbCommercial);
			this->Controls->Add(this->DgvSeuil);
			this->Controls->Add(this->BtnStats);
			this->Controls->Add(this->TbCA);
			this->Controls->Add(this->BtnCA);
			this->Controls->Add(this->comboBoxMois);
			this->Controls->Add(this->label2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"Statistiques";
			this->Text = L"Statistiques";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DgvSeuil))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DgvPlusVendus))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DgvMoinsVendus))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BtnStats_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ connectionString = "Data Source=Martin_GOA;Initial Catalog=Projet;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try {

			connection->Open();

			String^ querySeuil = "SELECT CP.ID_PRODUIT, CP.REF_PRODUIT, CP.DESIGNATION, P2.ID_ENTREPOT, P2.QUANTITE_PRODUIT_STOCK, P2.SEUIL_REAPPROVISIONNEMENT FROM CATALOGUE_PRODUIT CP INNER JOIN PROVIENT2 P2 ON CP.ID_PRODUIT = P2.ID_PRODUIT WHERE CAST(P2.QUANTITE_PRODUIT_STOCK AS INT) < P2.SEUIL_REAPPROVISIONNEMENT;";
			SqlDataAdapter^ commandSeuil = gcnew SqlDataAdapter(querySeuil, connection);

			String^ queryCommercial = "SELECT SUM((CP.PRIX_HT_FIXE * CP.TAUX_TVA) * CAST(P2.QUANTITE_PRODUIT_STOCK AS INT)) AS ValeurTotaleStock FROM CATALOGUE_PRODUIT CP INNER JOIN PROVIENT2 P2 ON CP.ID_PRODUIT = P2.ID_PRODUIT;";
			SqlCommand^ commandCommercial = gcnew SqlCommand(queryCommercial, connection);

			String^ queryAchat = "SELECT SUM((CP.PRIX_HT_FIXE * CP.TAUX_TVA) * CAST(P2.QUANTITE_PRODUIT_STOCK AS INT)*0.9) AS ValeurAchatStock FROM CATALOGUE_PRODUIT CP INNER JOIN PROVIENT2 P2 ON CP.ID_PRODUIT = P2.ID_PRODUIT;";
			SqlCommand^ commandAchat = gcnew SqlCommand(queryAchat, connection);

			String^ queryPlusVendus = "SELECT TOP 10 CP.ID_PRODUIT, CP.DESIGNATION, SUM(DC.QUANTITE) AS TotalVendu FROM CATALOGUE_PRODUIT CP INNER JOIN DETAIL_COMMANDE DC ON CP.ID_PRODUIT = DC.ID_ARTICLE GROUP BY CP.ID_PRODUIT, CP.DESIGNATION ORDER BY TotalVendu DESC;";
			SqlDataAdapter^ commandPlusVendus = gcnew SqlDataAdapter(queryPlusVendus, connection);

			String^ queryMoinsVendus = "SELECT TOP 10 CP.ID_PRODUIT, CP.DESIGNATION, SUM(DC.QUANTITE) AS TotalVendu FROM CATALOGUE_PRODUIT CP INNER JOIN DETAIL_COMMANDE DC ON CP.ID_PRODUIT = DC.ID_ARTICLE GROUP BY CP.ID_PRODUIT, CP.DESIGNATION ORDER BY TotalVendu ASC;";
			SqlDataAdapter^ commandMoinsVendus = gcnew SqlDataAdapter(queryMoinsVendus, connection);

			SqlDataReader^ reader_Commercial = commandCommercial->ExecuteReader();
			reader_Commercial->Read();
			String^ ValeurCommerciale = reader_Commercial["ValeurTotaleStock"]->ToString();
			reader_Commercial->Close();
			TbCommercial->Text = ValeurCommerciale;

			SqlDataReader^ reader_Achat = commandAchat->ExecuteReader();
			reader_Achat->Read();
			String^ ValeurAchat = reader_Achat["ValeurAchatStock"]->ToString();
			reader_Achat->Close();
			TbAchat->Text = ValeurAchat;

			DataTable^ dataTableSeuil = gcnew DataTable();
			DataTable^ dataTablePlusVendus = gcnew DataTable();
			DataTable^ dataTableMoinsVendus = gcnew DataTable();

			commandSeuil->Fill(dataTableSeuil);
			commandPlusVendus->Fill(dataTablePlusVendus);
			commandMoinsVendus->Fill(dataTableMoinsVendus);

			connection->Close();

			DgvSeuil->DataSource = dataTableSeuil;
			DgvPlusVendus->DataSource = dataTablePlusVendus;
			DgvMoinsVendus->DataSource = dataTableMoinsVendus;
		}
		catch (Exception^ ex) {

			MessageBox::Show("Erreur lors de la récupération des statistiques : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {

			connection->Close();
		}
	}
	private: System::Void BtnCA_Click(System::Object^ sender, System::EventArgs^ e) {
x		int Mois = Convert::ToInt32(comboBoxMois->Text);

		String^ connectionString = "Data Source=Martin_GOA;Initial Catalog=Projet;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try {

			connection->Open();

			String^ queryCA = "SELECT SUM(DC.PRIX_UNITAIRE * DC.QUANTITE) AS ChiffreAffaires FROM COMMANDE CO INNER JOIN DETAIL_COMMANDE DC ON CO.ID_COMMANDE = DC.ID_COMMANDE WHERE MONTH(CO.DATE_EMISSION) = @Mois;";
			SqlCommand^ commandCA = gcnew SqlCommand(queryCA, connection);
			commandCA->Parameters->AddWithValue("@Mois", Mois);

			SqlDataReader^ reader_CA = commandCA->ExecuteReader();
			reader_CA->Read();
			String^ chiffreAffaire = reader_CA["ChiffreAffaires"]->ToString();
			reader_CA->Close();

			if (chiffreAffaire != "") {
				TbCA->Text = chiffreAffaire;
			}
			else {
				TbCA->Text = "Aucune chiffre d'affaires pour ce mois";
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Erreur lors de la récupération des données : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			connection->Close();
		}
	}
	};
}