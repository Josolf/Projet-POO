#pragma once
#include "ModifStock.h"
#include "CreerArticle.h"

#include <string>
#include <msclr/marshal_cppstd.h>

using namespace ProjetPOO;

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace System::Runtime::InteropServices;

	public ref class Stock : public System::Windows::Forms::Form
	{
	public:
		Stock(void)
		{
			InitializeComponent();

		}

	protected:

		~Stock()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ DgvArt;
	protected:

	protected:
	private: System::Windows::Forms::Button^ afficherStock;
	private: System::Windows::Forms::Button^ creerArticle;
	private: System::Windows::Forms::Button^ modifArticle;
	private: System::Windows::Forms::Button^ suppArticle;

	private:

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Stock::typeid));
			this->DgvArt = (gcnew System::Windows::Forms::DataGridView());
			this->afficherStock = (gcnew System::Windows::Forms::Button());
			this->creerArticle = (gcnew System::Windows::Forms::Button());
			this->modifArticle = (gcnew System::Windows::Forms::Button());
			this->suppArticle = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DgvArt))->BeginInit();
			this->SuspendLayout();

			this->DgvArt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->DgvArt->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->DgvArt->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DgvArt->Location = System::Drawing::Point(34, 28);
			this->DgvArt->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->DgvArt->Name = L"DgvArt";
			this->DgvArt->RowHeadersWidth = 51;
			this->DgvArt->RowTemplate->Height = 24;
			this->DgvArt->Size = System::Drawing::Size(1454, 456);
			this->DgvArt->TabIndex = 0;

			this->afficherStock->BackColor = System::Drawing::Color::Gainsboro;
			this->afficherStock->Location = System::Drawing::Point(277, 524);
			this->afficherStock->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->afficherStock->Name = L"afficherStock";
			this->afficherStock->Size = System::Drawing::Size(192, 98);
			this->afficherStock->TabIndex = 1;
			this->afficherStock->Text = L"Afficher le stock";
			this->afficherStock->UseVisualStyleBackColor = false;
			this->afficherStock->Click += gcnew System::EventHandler(this, &Stock::afficherStock_Click);

			this->creerArticle->BackColor = System::Drawing::Color::Gainsboro;
			this->creerArticle->Location = System::Drawing::Point(504, 524);
			this->creerArticle->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->creerArticle->Name = L"creerArticle";
			this->creerArticle->Size = System::Drawing::Size(192, 98);
			this->creerArticle->TabIndex = 2;
			this->creerArticle->Text = L"Creer un Article";
			this->creerArticle->UseVisualStyleBackColor = false;
			this->creerArticle->Click += gcnew System::EventHandler(this, &Stock::creerArticle_Click);

			this->modifArticle->BackColor = System::Drawing::Color::Gainsboro;
			this->modifArticle->Location = System::Drawing::Point(726, 524);
			this->modifArticle->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->modifArticle->Name = L"modifArticle";
			this->modifArticle->Size = System::Drawing::Size(192, 99);
			this->modifArticle->TabIndex = 3;
			this->modifArticle->Text = L"Modifier un article";
			this->modifArticle->UseVisualStyleBackColor = false;
			this->modifArticle->Click += gcnew System::EventHandler(this, &Stock::modifArticle_Click);

			this->suppArticle->BackColor = System::Drawing::Color::Gainsboro;
			this->suppArticle->Location = System::Drawing::Point(947, 524);
			this->suppArticle->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->suppArticle->Name = L"suppArticle";
			this->suppArticle->Size = System::Drawing::Size(192, 99);
			this->suppArticle->TabIndex = 4;
			this->suppArticle->Text = L"Supprimer un article";
			this->suppArticle->UseVisualStyleBackColor = false;
			this->suppArticle->Click += gcnew System::EventHandler(this, &Stock::suppArticle_Click);

			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1523, 636);
			this->Controls->Add(this->suppArticle);
			this->Controls->Add(this->modifArticle);
			this->Controls->Add(this->creerArticle);
			this->Controls->Add(this->afficherStock);
			this->Controls->Add(this->DgvArt);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"Stock";
			this->Text = L"Stock";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DgvArt))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
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

			DgvArt->DataSource = dataTable;
		}
		catch (Exception^ ex) {

			MessageBox::Show("Erreur lors de la récupération du stock : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {

			connection->Close();
		}
	}

	private: System::Void creerArticle_Click(System::Object^ sender, System::EventArgs^ e) {
		CreerArticle obj;
		obj.ShowDialog();

		String^ connectionString = "Data Source=Martin_GOA;Initial Catalog=Projet;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try {

			connection->Open();

			String^ querySelectStock = "SELECT CATALOGUE_PRODUIT.ID_PRODUIT, REF_PRODUIT, DESIGNATION, PRIX_HT_FIXE, TAUX_TVA, PROVIENT2.QUANTITE_PRODUIT_STOCK, PROVIENT2.SEUIL_REAPPROVISIONNEMENT ,ENTREPOT.NOM_ENTREPOT, ENTREPOT.ID_ENTREPOT FROM [Projet].[dbo].[CATALOGUE_PRODUIT] JOIN PROVIENT2 ON CATALOGUE_PRODUIT.ID_PRODUIT = PROVIENT2.ID_PRODUIT JOIN ENTREPOT ON PROVIENT2.ID_ENTREPOT = ENTREPOT.ID_ENTREPOT";
			SqlDataAdapter^ commandStock = gcnew SqlDataAdapter(querySelectStock, connection);

			DataTable^ dataTable = gcnew DataTable();

			commandStock->Fill(dataTable);

			connection->Close();

			DgvArt->DataSource = dataTable;
		}
		catch (Exception^ ex) {

			MessageBox::Show("Erreur lors de la récupération du stock : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {

			connection->Close();
		}
	}
	private: System::Void suppArticle_Click(System::Object^ sender, System::EventArgs^ e) {

		if (DgvArt->SelectedRows->Count == 0) {
			MessageBox::Show("Veuillez sélectionner une commande à supprimer.");
			return;
		}

		int selectedRowIdx = DgvArt->CurrentCell->RowIndex;
		int idProduit = Convert::ToInt32(DgvArt->Rows[selectedRowIdx]->Cells[0]->Value);

		String^ connectionString = "Data Source=Martin_GOA;Initial Catalog=Projet;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		String^ query = "DELETE FROM [Projet].[dbo].[PROVIENT2] WHERE [ID_PRODUIT] = @id_produit";
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		command->Parameters->AddWithValue("@id_produit", idProduit);

		String^ query2 = "DELETE FROM [Projet].[dbo].[CATALOGUE_PRODUIT] WHERE [ID_PRODUIT] = @id_produit";
		SqlCommand^ command2 = gcnew SqlCommand(query2, connection);
		command2->Parameters->AddWithValue("@id_produit", idProduit);

		try {
			connection->Open();
			command->ExecuteNonQuery();
			command2->ExecuteNonQuery();
			MessageBox::Show("Produit supprimée avec succès.");
		}
		catch (Exception^ ex) {
			MessageBox::Show("Erreur lors de la suppression de la commande : " + ex->Message);
		}
		finally {
			connection->Close();
		}

		afficherStock_Click(sender, e);
	}

	private: System::Void modifArticle_Click(System::Object^ sender, System::EventArgs^ e) {
		ModifStock obj;
		obj.ShowDialog();
	}
	};
}