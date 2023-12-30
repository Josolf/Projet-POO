#pragma once

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	public ref class ModifierCommande : public System::Windows::Forms::Form
	{
	public:
		ModifierCommande(void)
		{
			InitializeComponent();

		}

	protected:

		~ModifierCommande()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ button3;

	private:

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ModifierCommande::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();

			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(16, 22);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->Size = System::Drawing::Size(1021, 378);
			this->dataGridView1->TabIndex = 0;

			this->button2->BackColor = System::Drawing::Color::Gainsboro;
			this->button2->Location = System::Drawing::Point(384, 406);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(256, 49);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Afficher détails de la commande";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &ModifierCommande::button2_Click);

			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(16, 480);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 82;
			this->dataGridView2->RowTemplate->Height = 33;
			this->dataGridView2->Size = System::Drawing::Size(1021, 339);
			this->dataGridView2->TabIndex = 3;

			this->button3->BackColor = System::Drawing::Color::Gainsboro;
			this->button3->Location = System::Drawing::Point(428, 840);
			this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(213, 40);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Supprimer un article";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &ModifierCommande::button3_Click);

			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1058, 890);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"ModifierCommande";
			this->Text = L"ModifierCommande";
			this->Load += gcnew System::EventHandler(this, &ModifierCommande::ModifierCommande_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dataGridView1->SelectedRows->Count > 0) {
			int idCommande = Convert::ToInt32(dataGridView1->SelectedRows[0]->Cells["ID_COMMANDE"]->Value);

			String^ connectionString = "Data Source=Martin_GOA;Initial Catalog=Projet;Integrated Security=True";
			SqlConnection^ connection = gcnew SqlConnection(connectionString);
			try {
				connection->Open();

				String^ query = "SELECT ID_DETAIL_COMMANDE, ID_COMMANDE, ID_ARTICLE as ID_PRODUIT, QUANTITE, PRIX_UNITAIRE FROM [Projet].[dbo].[DETAIL_COMMANDE] WHERE ID_COMMANDE = @idCommande";
				SqlCommand^ command = gcnew SqlCommand(query, connection);
				command->Parameters->AddWithValue("@idCommande", idCommande);

				SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(command);
				DataSet^ dataSet = gcnew DataSet();
				dataAdapter->Fill(dataSet, "DetailsCommande");

				dataGridView2->DataSource = dataSet;
				dataGridView2->DataMember = "DetailsCommande";
			}
			catch (Exception^ ex) {
				MessageBox::Show("Erreur lors du chargement des détails : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			finally {
				connection->Close();
			}
		}
		else {
			MessageBox::Show("Veuillez sélectionner une commande");
		}
	}

	private: System::Void RafraichirDetailCommande(int idCommande) {

		String^ connectionString = "Data Source=Martin_GOA;Initial Catalog=Projet;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try {
			connection->Open();

			String^ query = "SELECT ID_DETAIL_COMMANDE, ID_COMMANDE, ID_ARTICLE, ID_PRODUIT, QUANTITE, PRIX_UNITAIRE FROM [Projet].[dbo].[DETAIL_COMMANDE] WHERE [ID_COMMANDE] = @idCommande";
			SqlCommand^ command = gcnew SqlCommand(query, connection);
			command->Parameters->AddWithValue("@idCommande", idCommande);

			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);
			DataTable^ dataTable = gcnew DataTable();
			adapter->Fill(dataTable);
			dataGridView2->DataSource = dataTable;
		}
		catch (Exception^ ex) {
			MessageBox::Show("Erreur lors du chargement des détails de la commande : " + ex->Message);
		}
		finally {
			connection->Close();
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		if (dataGridView2->SelectedRows->Count > 0) {

			int idCommande = Convert::ToInt32(dataGridView1->SelectedRows[0]->Cells["ID_COMMANDE"]->Value);

			SqlConnection^ connection = nullptr;
			SqlTransaction^ transaction = nullptr;
			try {
				String^ connectionString = "Data Source=Martin_GOA;Initial Catalog=Projet;Integrated Security=True";
				connection = gcnew SqlConnection(connectionString);
				connection->Open();
				transaction = connection->BeginTransaction();

				for each (DataGridViewRow ^ selectedRow in dataGridView2->SelectedRows) {
					int idDetailCommande = Convert::ToInt32(selectedRow->Cells["ID_DETAIL_COMMANDE"]->Value);
					int quantite = Convert::ToInt32(selectedRow->Cells["QUANTITE"]->Value);
					int idProduit = Convert::ToInt32(selectedRow->Cells["ID_PRODUIT"]->Value);

					String^ queryUpdateStock = "UPDATE PROVIENT2 SET QUANTITE_PRODUIT_STOCK = QUANTITE_PRODUIT_STOCK + @quantite WHERE ID_PRODUIT = @idProduit";
					SqlCommand^ commandUpdateStock = gcnew SqlCommand(queryUpdateStock, connection, transaction);
					commandUpdateStock->Parameters->AddWithValue("@quantite", quantite);
					commandUpdateStock->Parameters->AddWithValue("@idProduit", idProduit);
					commandUpdateStock->ExecuteNonQuery();

					String^ queryDeleteArticle = "DELETE FROM [Projet].[dbo].[DETAIL_COMMANDE] WHERE [ID_DETAIL_COMMANDE] = @idDetailCommande";
					SqlCommand^ commandDeleteArticle = gcnew SqlCommand(queryDeleteArticle, connection, transaction);
					commandDeleteArticle->Parameters->AddWithValue("@idDetailCommande", idDetailCommande);
					commandDeleteArticle->ExecuteNonQuery();

					dataGridView2->Rows->Remove(selectedRow);

				}

				transaction->Commit();
				MessageBox::Show("Article(s) supprimé(s) de la commande.");
			}
			catch (Exception^ ex) {
				if (transaction != nullptr) transaction->Rollback();
				MessageBox::Show("Erreur lors de la suppression de l'article : " + ex->Message);
			}
			finally {
				if (connection != nullptr) {
					connection->Close();
				}
			}

			if (connection->State == ConnectionState::Closed) {
				connection->Open();
			}

			String^ queryCheckDetail = "SELECT COUNT(*) FROM [Projet].[dbo].[DETAIL_COMMANDE] WHERE ID_COMMANDE = @idCommande";
			SqlCommand^ commandCheckDetail = gcnew SqlCommand(queryCheckDetail, connection, transaction);
			commandCheckDetail->Parameters->AddWithValue("@idCommande", idCommande);
			int count = Convert::ToInt32(commandCheckDetail->ExecuteScalar());

			if (count == 0) {
				String^ queryDeleteCommande = "DELETE FROM [Projet].[dbo].[COMMANDE] WHERE ID_COMMANDE = @idCommande";
				SqlCommand^ commandDeleteCommande = gcnew SqlCommand(queryDeleteCommande, connection, transaction);
				commandDeleteCommande->Parameters->AddWithValue("@idCommande", idCommande);
				commandDeleteCommande->ExecuteNonQuery();

				MessageBox::Show("La commande a été supprimée car elle ne contenait plus d'articles.");

			}
			RafraichirDetailCommande(idCommande);

		}
	}

	private: System::Void ModifierCommande_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ connectionString = "Data Source=Martin_GOA;Initial Catalog=Projet;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);
		try {
			connection->Open();

			String^ query = "SELECT TOP (1000) [ID_COMMANDE], "
				"[DATE_EMISSION], "
				"[DATE_LIVRAISON], "
				"[DATE_REGLEMENT], "
				"[ID_CLIENT], "
				"[MOYEN_PAIEMENT], "
				"[TOTAL_ARTICLES_HT], "
				"[TOTAL_TVA], "
				"[TOTAL_TTC] "
				"FROM [Projet].[dbo].[COMMANDE]";

			SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(query, connection);
			DataSet^ dataSet = gcnew DataSet();
			dataAdapter->Fill(dataSet, "Commande");

			dataGridView1->DataSource = dataSet;
			dataGridView1->DataMember = "Commande";
		}
		catch (Exception^ ex) {
			MessageBox::Show("Erreur lors du chargement des données : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			if (connection != nullptr) {
				connection->Close();
			}

		}
	}
	};
}