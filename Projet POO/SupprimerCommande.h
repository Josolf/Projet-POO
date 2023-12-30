#pragma once

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	public ref class SupprimerCommande : public System::Windows::Forms::Form
	{
	public:
		SupprimerCommande(void)
		{
			InitializeComponent();

		}

	protected:

		~SupprimerCommande()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Button^ Supprimer;

	private:

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SupprimerCommande::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Supprimer = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();

			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(39, 36);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->Size = System::Drawing::Size(902, 510);
			this->dataGridView1->TabIndex = 0;

			this->Supprimer->BackColor = System::Drawing::Color::Gainsboro;
			this->Supprimer->Location = System::Drawing::Point(392, 609);
			this->Supprimer->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Supprimer->Name = L"Supprimer";
			this->Supprimer->Size = System::Drawing::Size(170, 70);
			this->Supprimer->TabIndex = 1;
			this->Supprimer->Text = L"Supprimer";
			this->Supprimer->UseVisualStyleBackColor = false;
			this->Supprimer->Click += gcnew System::EventHandler(this, &SupprimerCommande::Supprimer_Click);

			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(984, 689);
			this->Controls->Add(this->Supprimer);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"SupprimerCommande";
			this->Text = L"SupprimerCommande";
			this->Load += gcnew System::EventHandler(this, &SupprimerCommande::SupprimerCommande_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void AfficherCommandes_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connectionString = "Data Source=Martin_GOA;Initial Catalog=Projet;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);
		try
		{
			connection->Open();

			String^ query = "SELECT "
				"[ID_COMMANDE], "
				"[DATE_EMISSION], "
				"[DATE_LIVRAISON], "
				"[DATE_REGLEMENT], "
				"[ID_CLIENT] "
				"FROM [Projet].[dbo].[COMMANDE]";

			SqlDataAdapter^ dataAdapter;
			dataAdapter = gcnew SqlDataAdapter(query, connection);

			DataSet^ dataSet = gcnew DataSet();

			dataAdapter->Fill(dataSet, "Commande");

			dataGridView1->DataSource = dataSet;
			dataGridView1->DataMember = "Commande";
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
	private: System::Void Supprimer_Click(System::Object^ sender, System::EventArgs^ e) {

		if (dataGridView1->SelectedRows->Count == 0) {
			MessageBox::Show("Veuillez sélectionner une commande à supprimer.");
			return;
		}

		int selectedRowIdx = dataGridView1->CurrentCell->RowIndex;
		int idCommande = Convert::ToInt32(dataGridView1->Rows[selectedRowIdx]->Cells[0]->Value);

		String^ connectionString = "Data Source=Martin_GOA;Initial Catalog=Projet;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		SqlTransaction^ transaction;

		try {
			connection->Open();
			transaction = connection->BeginTransaction();

			String^ deleteDetailQuery = "DELETE FROM [Projet].[dbo].[DETAIL_COMMANDE] WHERE [ID_COMMANDE] = @idCommande";
			SqlCommand^ deleteDetailCommand = gcnew SqlCommand(deleteDetailQuery, connection, transaction);
			deleteDetailCommand->Parameters->AddWithValue("@idCommande", idCommande);
			deleteDetailCommand->ExecuteNonQuery();

			String^ deleteCommandQuery = "DELETE FROM [Projet].[dbo].[COMMANDE] WHERE [ID_COMMANDE] = @idCommande";
			SqlCommand^ deleteCommand = gcnew SqlCommand(deleteCommandQuery, connection, transaction);
			deleteCommand->Parameters->AddWithValue("@idCommande", idCommande);
			deleteCommand->ExecuteNonQuery();

			transaction->Commit();
			MessageBox::Show("Commande supprimée avec succès.");
		}
		catch (Exception^ ex) {
			if (transaction != nullptr) transaction->Rollback();
			MessageBox::Show("Erreur lors de la suppression de la commande : " + ex->Message);
		}
		finally {
			if (connection != nullptr && connection->State == ConnectionState::Open)
				connection->Close();
		}

		AfficherCommandes_Click(sender, e);
	}
	private: System::Void SupprimerCommande_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ connectionString = "Data Source=Martin_GOA;Initial Catalog=Projet;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);
		try
		{
			connection->Open();

			String^ query = "SELECT "
				"[ID_COMMANDE], "
				"[DATE_EMISSION], "
				"[DATE_LIVRAISON], "
				"[DATE_REGLEMENT], "
				"[ID_CLIENT] "
				"FROM [Projet].[dbo].[COMMANDE]";

			SqlDataAdapter^ dataAdapter;
			dataAdapter = gcnew SqlDataAdapter(query, connection);

			DataSet^ dataSet = gcnew DataSet();

			dataAdapter->Fill(dataSet, "Commande");

			dataGridView1->DataSource = dataSet;
			dataGridView1->DataMember = "Commande";
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
	};
}