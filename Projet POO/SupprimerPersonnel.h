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
	/// Description résumée de SupprimerPersonnel
	/// </summary>
	public ref class SupprimerPersonnel : public System::Windows::Forms::Form
	{
	public:
		SupprimerPersonnel(void)
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
		~SupprimerPersonnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::NumericUpDown^ numUpDownSupprimerPersonnel;

	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SupprimerPersonnel::typeid));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->numUpDownSupprimerPersonnel = (gcnew System::Windows::Forms::NumericUpDown());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numUpDownSupprimerPersonnel))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(1100, 577);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(67, 94);
			this->pictureBox2->TabIndex = 81;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &SupprimerPersonnel::pictureBox2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(548, 642);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(183, 117);
			this->pictureBox1->TabIndex = 80;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &SupprimerPersonnel::pictureBox1_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label13->Location = System::Drawing::Point(55, 604);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(295, 36);
			this->label13->TabIndex = 79;
			this->label13->Text = L"ID du Personnel à supprimer :";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// numUpDownSupprimerPersonnel
			// 
			this->numUpDownSupprimerPersonnel->BackColor = System::Drawing::Color::Gainsboro;
			this->numUpDownSupprimerPersonnel->Location = System::Drawing::Point(368, 607);
			this->numUpDownSupprimerPersonnel->Name = L"numUpDownSupprimerPersonnel";
			this->numUpDownSupprimerPersonnel->Size = System::Drawing::Size(68, 26);
			this->numUpDownSupprimerPersonnel->TabIndex = 78;
			this->numUpDownSupprimerPersonnel->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(80, 11);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->Size = System::Drawing::Size(1109, 551);
			this->dataGridView1->TabIndex = 77;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &SupprimerPersonnel::dataGridView1_CellContentClick);
			// 
			// SupprimerPersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1314, 747);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->numUpDownSupprimerPersonnel);
			this->Controls->Add(this->dataGridView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"SupprimerPersonnel";
			this->Text = L"SupprimerPersonnel";
			this->Load += gcnew System::EventHandler(this, &SupprimerPersonnel::SupprimerPersonnel_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numUpDownSupprimerPersonnel))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		int personnelId = static_cast<int>(numUpDownSupprimerPersonnel->Value);
		String^ connectionString = "Data Source=MARTIN_GOA;Initial Catalog=Projet;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try {
			connection->Open();
			SqlTransaction^ transaction = connection->BeginTransaction();
			SqlCommand^ command = connection->CreateCommand();
			command->Transaction = transaction;

			try {

				String^ queryPossede2 = "DELETE FROM POSSEDE2 WHERE ID_PERSONNEL = @PersonnelId";
				SqlCommand^ commandPossede2 = gcnew SqlCommand(queryPossede2, connection, transaction);
				commandPossede2->Parameters->AddWithValue("@PersonnelId", personnelId);
				commandPossede2->ExecuteNonQuery();


				String^ queryAdresse = "DELETE FROM ADRESSE WHERE ID_ADRESSE IN (SELECT ID_ADRESSE FROM POSSEDE2 WHERE ID_PERSONNEL = @PersonnelId)";
				SqlCommand^ commandAdresse = gcnew SqlCommand(queryAdresse, connection, transaction);
				commandAdresse->Parameters->AddWithValue("@PersonnelId", personnelId);
				commandAdresse->ExecuteNonQuery();


				String^ queryPersonnel = "DELETE FROM PERSONNEL WHERE ID_PERSONNEL = @PersonnelId";
				SqlCommand^ commandPersonnel = gcnew SqlCommand(queryPersonnel, connection, transaction);
				commandPersonnel->Parameters->AddWithValue("@PersonnelId", personnelId);
				commandPersonnel->ExecuteNonQuery();


				transaction->Commit();
				MessageBox::Show("Le personnel et ses informations associées ont été supprimées avec succès.", "Suppression Réussie", MessageBoxButtons::OK, MessageBoxIcon::Information);



			}
			catch (Exception^ ex) {

				transaction->Rollback();
				MessageBox::Show("Erreur lors de la suppression du personnel : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
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

		try {
			connection->Open();


			String^ query = "SELECT P.ID_PERSONNEL, P.NOM, P.PRENOM, P.DATE_EMBAUCHE, P.SUPERIEUR_HIERARCHIQUE, P.ID_POSTE, "
				"A.NUMERO, A.NOM_RUE, A.NOM_VILLE, A.CODE_POSTAL "
				"FROM PERSONNEL AS P "
				"LEFT JOIN POSSEDE2 ON P.ID_PERSONNEL = POSSEDE2.ID_PERSONNEL "
				"LEFT JOIN ADRESSE AS A ON POSSEDE2.ID_ADRESSE = A.ID_ADRESSE";

			SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(query, connection);

			DataSet^ dataSet = gcnew DataSet();


			dataAdapter->Fill(dataSet, "PersonnelAdresse");


			dataGridView1->DataSource = dataSet;
			dataGridView1->DataMember = "PersonnelAdresse";
		}
		catch (Exception^ ex) {
			MessageBox::Show("Erreur lors du chargement des données : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			connection->Close();
		}
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void SupprimerPersonnel_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ connectionString = "Data Source=MARTIN_GOA;Initial Catalog=Projet;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try {
			connection->Open();


			String^ query = "SELECT P.ID_PERSONNEL, P.NOM, P.PRENOM, P.DATE_EMBAUCHE, P.SUPERIEUR_HIERARCHIQUE, P.ID_POSTE, "
				"A.NUMERO, A.NOM_RUE, A.NOM_VILLE, A.CODE_POSTAL "
				"FROM PERSONNEL AS P "
				"LEFT JOIN POSSEDE2 ON P.ID_PERSONNEL = POSSEDE2.ID_PERSONNEL "
				"LEFT JOIN ADRESSE AS A ON POSSEDE2.ID_ADRESSE = A.ID_ADRESSE";

			SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(query, connection);

			DataSet^ dataSet = gcnew DataSet();


			dataAdapter->Fill(dataSet, "PersonnelAdresse");


			dataGridView1->DataSource = dataSet;
			dataGridView1->DataMember = "PersonnelAdresse";
		}
		catch (Exception^ ex) {
			MessageBox::Show("Erreur lors du chargement des données : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			connection->Close();
		}
	}
	};
}