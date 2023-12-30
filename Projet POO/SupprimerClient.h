#pragma once

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Description résumée de SupprimerClient
	/// </summary>
	public ref class SupprimerClient : public System::Windows::Forms::Form
	{
	public:
		SupprimerClient(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~SupprimerClient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	protected:


	private: System::Windows::Forms::NumericUpDown^ numUpDownSuppr;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;


	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SupprimerClient::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->numUpDownSuppr = (gcnew System::Windows::Forms::NumericUpDown());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numUpDownSuppr))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(31, 25);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->Size = System::Drawing::Size(1109, 551);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &SupprimerClient::dataGridView1_CellContentClick);
			// 
			// numUpDownSuppr
			// 
			this->numUpDownSuppr->BackColor = System::Drawing::Color::Gainsboro;
			this->numUpDownSuppr->Location = System::Drawing::Point(319, 621);
			this->numUpDownSuppr->Name = L"numUpDownSuppr";
			this->numUpDownSuppr->Size = System::Drawing::Size(68, 26);
			this->numUpDownSuppr->TabIndex = 3;
			this->numUpDownSuppr->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numUpDownSuppr->ValueChanged += gcnew System::EventHandler(this, &SupprimerClient::numUpDownSuppr_ValueChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label13->Location = System::Drawing::Point(59, 618);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(255, 36);
			this->label13->TabIndex = 74;
			this->label13->Text = L"ID du client à supprimer :";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(499, 656);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(183, 117);
			this->pictureBox1->TabIndex = 75;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &SupprimerClient::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(1051, 591);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(67, 94);
			this->pictureBox2->TabIndex = 76;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &SupprimerClient::pictureBox2_Click);
			// 
			// SupprimerClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1169, 775);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->numUpDownSuppr);
			this->Controls->Add(this->dataGridView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"SupprimerClient";
			this->Text = L"SupprimerClient";
			this->Load += gcnew System::EventHandler(this, &SupprimerClient::SupprimerClient_Load_1);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numUpDownSuppr))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}

	private: System::Void SupprimerClient_Load_1(System::Object^ sender, System::EventArgs^ e) {
		String^ connectionString = "Data Source=MARTIN_GOA;Initial Catalog=Projet;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try
		{
			connection->Open();

			// Requête pour sélectionner les informations du client et de son adresse associée
			String^ query = "SELECT dbo.Client.ID_CLIENT, dbo.Client.NOM, dbo.Client.PRENOM, dbo.Client.DATE_NAISSANCE, ADRESSE.NUMERO, ADRESSE.NOM_RUE, ADRESSE.NOM_VILLE, ADRESSE.CODE_POSTAL, ADRESSE.TYPE_ADRESSE "
				"FROM dbo.Client "
				"LEFT JOIN Possede1 ON dbo.Client.ID_CLIENT = Possede1.ID_CLIENT "
				"LEFT JOIN ADRESSE ON Possede1.ID_ADRESSE = ADRESSE.ID_ADRESSE";

			SqlDataAdapter^ dataAdapter;
			dataAdapter = gcnew SqlDataAdapter(query, connection);

			// Création d'un DataSet pour stocker les données
			DataSet^ dataSet = gcnew DataSet();

			// Remplissage du DataSet avec les données de la requête
			dataAdapter->Fill(dataSet, "ClientAdresse");

			// Liaison du DataSet à la DataGridView
			dataGridView1->DataSource = dataSet;
			dataGridView1->DataMember = "ClientAdresse";


		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Erreur lors du chargement des données : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally
		{
			connection->Close();
		}
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {

}

private: System::Void numUpDownSuppr_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void buttonActualiser_Click(System::Object^ sender, System::EventArgs^ e) {
		
		}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	int clientId = static_cast<int>(numUpDownSuppr->Value); // Remplacer UpDownClientId par le nom réel de votre contrôle NumericUpDown
	String^ connectionString = "Data Source=MARTIN_GOA;Initial Catalog=Projet;Integrated Security=True";
	SqlConnection^ connection = gcnew SqlConnection(connectionString);

	try {
		connection->Open();

		// Commencer une transaction
		SqlTransaction^ transaction = connection->BeginTransaction();

		SqlCommand^ command = connection->CreateCommand();
		command->Transaction = transaction;

		try {
			// Supprimer les enregistrements de la table POSSEDE1 pour ce client
			SqlCommand^ commandPossede = gcnew SqlCommand("DELETE FROM POSSEDE1 WHERE ID_CLIENT = @ClientId", connection, transaction);
			commandPossede->Parameters->AddWithValue("@ClientId", clientId);
			commandPossede->ExecuteNonQuery();

			// Supprimer les enregistrements de la table ADRESSE pour ce client
			SqlCommand^ commandAdresse = gcnew SqlCommand("DELETE FROM ADRESSE WHERE ID_ADRESSE IN (SELECT ID_ADRESSE FROM POSSEDE1 WHERE ID_CLIENT = @ClientId)", connection, transaction);
			commandAdresse->Parameters->AddWithValue("@ClientId", clientId);
			commandAdresse->ExecuteNonQuery();

			// Supprimer le client de la table CLIENT
			SqlCommand^ commandClient = gcnew SqlCommand("DELETE FROM CLIENT WHERE ID_CLIENT = @ClientId", connection, transaction);
			commandClient->Parameters->AddWithValue("@ClientId", clientId);
			commandClient->ExecuteNonQuery();
			// Valider la transaction
			transaction->Commit();
			MessageBox::Show("Client supprimé.", "Information");
		}
		catch (Exception^ ex) {
			// En cas d'erreur, annuler la transaction
			transaction->Rollback();
			MessageBox::Show("Erreur lors de la suppression du client : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Erreur lors de la connexion à la base de données : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		if (connection->State == ConnectionState::Open) {
			connection->Close();
		}
	}
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ connectionString = "Data Source=MARTIN_GOA;Initial Catalog=Projet;Integrated Security=True";
	SqlConnection^ connection = gcnew SqlConnection(connectionString);

	try
	{
		connection->Open();

		// Requête pour sélectionner les informations du client et de son adresse associée
		String^ query = "SELECT dbo.Client.ID_CLIENT, dbo.Client.NOM, dbo.Client.PRENOM, dbo.Client.DATE_NAISSANCE, ADRESSE.NUMERO, ADRESSE.NOM_RUE, ADRESSE.NOM_VILLE, ADRESSE.CODE_POSTAL, ADRESSE.TYPE_ADRESSE "
			"FROM dbo.Client "
			"LEFT JOIN Possede1 ON dbo.Client.ID_CLIENT = Possede1.ID_CLIENT "
			"LEFT JOIN ADRESSE ON Possede1.ID_ADRESSE = ADRESSE.ID_ADRESSE";

		SqlDataAdapter^ dataAdapter;
		dataAdapter = gcnew SqlDataAdapter(query, connection);

		// Création d'un DataSet pour stocker les données
		DataSet^ dataSet = gcnew DataSet();

		// Remplissage du DataSet avec les données de la requête
		dataAdapter->Fill(dataSet, "ClientAdresse");

		// Liaison du DataSet à la DataGridView
		dataGridView1->DataSource = dataSet;
		dataGridView1->DataMember = "ClientAdresse";
	}

	catch (Exception^ ex)
	{
		MessageBox::Show("Erreur lors du chargement des données : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally
	{
		connection->Close();
	}
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}



	