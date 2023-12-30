#pragma once

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	public ref class AfficherCommande : public System::Windows::Forms::Form
	{
	public:
		AfficherCommande(void)
		{
			InitializeComponent();

		}

	protected:

		~AfficherCommande()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;

	protected:

	private:

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AfficherCommande::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();

			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(11, 35);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->Size = System::Drawing::Size(969, 386);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AfficherCommande::dataGridView1_CellContentClick);

			this->button1->BackColor = System::Drawing::Color::Gainsboro;
			this->button1->Location = System::Drawing::Point(360, 425);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(266, 56);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Afficher détails de la commande";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AfficherCommande::button1_Click_1);

			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(11, 518);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 82;
			this->dataGridView2->RowTemplate->Height = 33;
			this->dataGridView2->Size = System::Drawing::Size(969, 348);
			this->dataGridView2->TabIndex = 3;

			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(997, 877);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"AfficherCommande";
			this->Text = L"AfficherCommande";
			this->Load += gcnew System::EventHandler(this, &AfficherCommande::AfficherCommande_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	}

	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (dataGridView1->SelectedRows->Count > 0) {
			int idCommande = Convert::ToInt32(dataGridView1->SelectedRows[0]->Cells["ID_COMMANDE"]->Value);

			String^ connectionString = "Data Source=MARTIN_GOA;Initial Catalog=Projet;Integrated Security=True";
			SqlConnection^ connection = gcnew SqlConnection(connectionString);
			try {
				connection->Open();

				String^ query = "SELECT ID_DETAIL_COMMANDE, ID_COMMANDE, ID_ARTICLE as ID_PRODUIT, QUANTITE, PRIX_UNITAIRE FROM [Projet].[dbo].[DETAIL_COMMANDE] WHERE ID_COMMANDE = " + idCommande;

				SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(query, connection);
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

	private: System::Void AfficherCommande_Load(System::Object^ sender, System::EventArgs^ e) {
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