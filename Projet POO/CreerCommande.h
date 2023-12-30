#pragma once

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	public ref class CreerCommande : public System::Windows::Forms::Form
	{
	private: int idClient;
	public:

		CreerCommande()
		{
			InitializeComponent();

			this->idClient = 1;
		}

		CreerCommande(int clientId)
		{
			InitializeComponent();
			this->idClient = clientId;
		}

	protected:

		~CreerCommande()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::DataGridView^ dataGridView2;

	private: System::Windows::Forms::Button^ AjouterAuPanier;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;

	private: System::Windows::Forms::Button^ ValiderCommande;
	private: System::Windows::Forms::Button^ SupprimerArticle;

	private: System::Windows::Forms::ComboBox^ comboBox1;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;

	protected:

	private:

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CreerCommande::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->AjouterAuPanier = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->ValiderCommande = (gcnew System::Windows::Forms::Button());
			this->SupprimerArticle = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();

			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(9, 36);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->Size = System::Drawing::Size(964, 342);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->SelectionChanged += gcnew System::EventHandler(this, &CreerCommande::dataGridView1_SelectionChanged);

			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(13, 508);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 82;
			this->dataGridView2->RowTemplate->Height = 33;
			this->dataGridView2->Size = System::Drawing::Size(962, 398);
			this->dataGridView2->TabIndex = 3;

			this->AjouterAuPanier->BackColor = System::Drawing::Color::Gainsboro;
			this->AjouterAuPanier->Location = System::Drawing::Point(404, 383);
			this->AjouterAuPanier->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->AjouterAuPanier->Name = L"AjouterAuPanier";
			this->AjouterAuPanier->Size = System::Drawing::Size(149, 66);
			this->AjouterAuPanier->TabIndex = 5;
			this->AjouterAuPanier->Text = L"Ajouter au panier";
			this->AjouterAuPanier->UseVisualStyleBackColor = false;
			this->AjouterAuPanier->Click += gcnew System::EventHandler(this, &CreerCommande::AjouterAuPanier_Click);

			this->numericUpDown1->BackColor = System::Drawing::Color::Gainsboro;
			this->numericUpDown1->Location = System::Drawing::Point(304, 394);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(67, 26);
			this->numericUpDown1->TabIndex = 6;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &CreerCommande::numericUpDown1_ValueChanged);

			this->ValiderCommande->Location = System::Drawing::Point(404, 1003);
			this->ValiderCommande->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ValiderCommande->Name = L"ValiderCommande";
			this->ValiderCommande->Size = System::Drawing::Size(164, 67);
			this->ValiderCommande->TabIndex = 8;
			this->ValiderCommande->Text = L"Valider commande";
			this->ValiderCommande->UseVisualStyleBackColor = true;
			this->ValiderCommande->Click += gcnew System::EventHandler(this, &CreerCommande::ValiderCommande_Click);

			this->SupprimerArticle->BackColor = System::Drawing::Color::Gainsboro;
			this->SupprimerArticle->Location = System::Drawing::Point(404, 454);
			this->SupprimerArticle->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->SupprimerArticle->Name = L"SupprimerArticle";
			this->SupprimerArticle->Size = System::Drawing::Size(148, 43);
			this->SupprimerArticle->TabIndex = 9;
			this->SupprimerArticle->Text = L"Supprimer article";
			this->SupprimerArticle->UseVisualStyleBackColor = false;
			this->SupprimerArticle->Click += gcnew System::EventHandler(this, &CreerCommande::SupprimerArticle_Click);

			this->comboBox1->BackColor = System::Drawing::Color::Gainsboro;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Carte Bancaire", L"PayPal" });
			this->comboBox1->Location = System::Drawing::Point(194, 922);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(149, 28);
			this->comboBox1->TabIndex = 11;

			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Gainsboro;
			this->label5->Location = System::Drawing::Point(768, 395);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(18, 20);
			this->label5->TabIndex = 13;
			this->label5->Text = L"0";

			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::Transparent;
			this->label25->Cursor = System::Windows::Forms::Cursors::No;
			this->label25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label25->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label25->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label25->Location = System::Drawing::Point(11, 476);
			this->label25->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(66, 21);
			this->label25->TabIndex = 152;
			this->label25->Text = L"Panier :";
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Cursor = System::Windows::Forms::Cursors::No;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(9, 9);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 21);
			this->label1->TabIndex = 153;
			this->label1->Text = L"Produits :";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Cursor = System::Windows::Forms::Cursors::No;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(211, 395);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 21);
			this->label2->TabIndex = 154;
			this->label2->Text = L"Quantité";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Cursor = System::Windows::Forms::Cursors::No;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(612, 394);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(152, 21);
			this->label4->TabIndex = 155;
			this->label4->Text = L"Quantité en stock :";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Cursor = System::Windows::Forms::Cursors::No;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(11, 924);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(163, 21);
			this->label3->TabIndex = 156;
			this->label3->Text = L"Moyen de paiement";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(983, 1080);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->SupprimerArticle);
			this->Controls->Add(this->ValiderCommande);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->AjouterAuPanier);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"CreerCommande";
			this->Text = L"CreerCommande";
			this->Load += gcnew System::EventHandler(this, &CreerCommande::CreerCommande_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void dataGridView1_SelectionChanged(System::Object^ sender, System::EventArgs^ e) {
		if (dataGridView1->SelectedRows->Count > 0) {
			DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];
			int idProduit = Convert::ToInt32(selectedRow->Cells["ID_PRODUIT"]->Value);

			SqlConnection^ connection = gcnew SqlConnection("Data Source=MARTIN_GOA;Initial Catalog=Projet;Integrated Security=True");

			try {
				connection->Open();
				String^ queryStock = "SELECT QUANTITE_PRODUIT_STOCK FROM PROVIENT2 WHERE ID_PRODUIT = @idProduit";
				SqlCommand^ commandStock = gcnew SqlCommand(queryStock, connection);
				commandStock->Parameters->AddWithValue("@idProduit", idProduit);

				int quantiteEnStock = Convert::ToInt32(commandStock->ExecuteScalar());
				label5->Text = quantiteEnStock.ToString();
			}
			catch (Exception^ ex) {
				MessageBox::Show("Erreur lors de la récupération de la quantité en stock : " + ex->Message);
			}
			finally {
				connection->Close();
			}
		}
	}

	private: System::Void AjouterAuPanier_Click(System::Object^ sender, System::EventArgs^ e) {

		if (dataGridView1->SelectedRows->Count == 0) {
			MessageBox::Show("Veuillez sélectionner un produit.");
			return;
		}

		DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];
		int idProduit = Convert::ToInt32(selectedRow->Cells["ID_PRODUIT"]->Value);
		Decimal prixHT = Convert::ToDecimal(selectedRow->Cells["PRIX_HT_FIXE"]->Value);
		Decimal tauxTVA = Convert::ToDecimal(selectedRow->Cells["TAUX_TVA"]->Value);
		int quantiteDemandee = Convert::ToInt32(numericUpDown1->Value);

		String^ connectionString = "Data Source=MARTIN_GOA;Initial Catalog=Projet;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try {
			connection->Open();

			String^ queryStock = "SELECT QUANTITE_PRODUIT_STOCK FROM PROVIENT2 WHERE ID_PRODUIT = @idProduit";
			SqlCommand^ commandStock = gcnew SqlCommand(queryStock, connection);
			commandStock->Parameters->AddWithValue("@idProduit", idProduit);

			int quantiteEnStock = Convert::ToInt32(commandStock->ExecuteScalar());
			int idArticle = Convert::ToInt32(selectedRow->Cells["ID_ARTICLE"]->Value);
			Object^ result = commandStock->ExecuteScalar();

			if (result != DBNull::Value) {
				quantiteEnStock = Convert::ToInt32(result);
			}
			else {

				MessageBox::Show("La quantité en stock est indisponible.");
				return;
			}

			int nouvelleQuantiteEnStock = quantiteEnStock - quantiteDemandee;
			String^ queryUpdateStock = "UPDATE PROVIENT2 SET QUANTITE_PRODUIT_STOCK = @nouvelleQuantite WHERE ID_PRODUIT = @idProduit";
			SqlCommand^ commandUpdateStock = gcnew SqlCommand(queryUpdateStock, connection);
			commandUpdateStock->Parameters->AddWithValue("@nouvelleQuantite", nouvelleQuantiteEnStock);
			commandUpdateStock->Parameters->AddWithValue("@idProduit", idProduit);
			commandUpdateStock->ExecuteNonQuery();

			label5->Text = nouvelleQuantiteEnStock.ToString();

			if (quantiteDemandee > quantiteEnStock) {
				MessageBox::Show("Quantité demandée non disponible en stock pour le produit ID " + idProduit + ".");
				return;
			}

			String^ query = "INSERT INTO PANIER (ID_CLIENT, ID_PRODUIT, QUANTITE, PRIX_HT_FIXE, TAUX_TVA, DATE_AJOUT, ID_ARTICLE) VALUES (@idClient, @idProduit, @quantite, @prixHT, @tauxTVA, @dateAjout, @idArticle)";

			SqlCommand^ command = gcnew SqlCommand(query, connection);
			command->Parameters->AddWithValue("@idClient", this->idClient);
			command->Parameters->AddWithValue("@idProduit", idProduit);
			command->Parameters->AddWithValue("@idArticle", idArticle);
			command->Parameters->AddWithValue("@quantite", quantiteDemandee);
			command->Parameters->AddWithValue("@prixHT", prixHT);
			command->Parameters->AddWithValue("@tauxTVA", tauxTVA);
			command->Parameters->AddWithValue("@dateAjout", DateTime::Now);

			command->ExecuteNonQuery();
			MessageBox::Show("Produit ajouté au panier avec le taux de TVA.");
			MettreAJourStock();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Erreur lors de l'ajout au panier : " + ex->Message);
		}
		finally {
			connection->Close();
		}

		RafraichirPanier();
	}
	private: System::Void CreerCommande_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ connectionString = "Data Source=MARTIN_GOA;Initial Catalog=Projet;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);
		try {
			connection->Open();

			String^ query = "SELECT ID_PRODUIT as [ID_ARTICLE], ID_PRODUIT, REF_PRODUIT, PRIX_HT_FIXE, DESIGNATION, TAUX_TVA, HISTORIQUE_FACTURATION FROM [Projet].[dbo].[CATALOGUE_PRODUIT]";
			SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(query, connection);
			DataSet^ dataSet = gcnew DataSet();
			dataAdapter->Fill(dataSet, "Produit");

			dataGridView1->DataSource = dataSet;
			dataGridView1->DataMember = "Produit";
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

	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

	}

	private: void MettreAJourStock() {
		SqlConnection^ connection = gcnew SqlConnection("Data Source=MARTIN_GOA;Initial Catalog=Projet;Integrated Security=True");

		try {
			connection->Open();

			for each (DataGridViewRow ^ row in dataGridView2->Rows) {
				if (row->Cells["ID_ARTICLE"]->Value != nullptr && row->Cells["QUANTITE"]->Value != nullptr) {
					int idArticle = Convert::ToInt32(row->Cells["ID_ARTICLE"]->Value);
					int quantite = Convert::ToInt32(row->Cells["QUANTITE"]->Value);

					String^ queryUpdateStock = "UPDATE PROVIENT2 SET QUANTITE_PRODUIT_STOCK = QUANTITE_PRODUIT_STOCK - @quantite WHERE ID_PRODUIT = @idArticle";
					SqlCommand^ commandUpdateStock = gcnew SqlCommand(queryUpdateStock, connection);
					commandUpdateStock->Parameters->AddWithValue("@quantite", quantite);
					commandUpdateStock->Parameters->AddWithValue("@idArticle", idArticle);

					commandUpdateStock->ExecuteNonQuery();
				}
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Erreur lors de la mise à jour du stock : " + ex->Message);
		}
		finally {
			connection->Close();
		}
	}

	private: System::Void ValiderCommande_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connectionString = "Data Source=MARTIN_GOA;Initial Catalog=Projet;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);
		SqlTransaction^ transaction;

		try {
			connection->Open();
			transaction = connection->BeginTransaction();

			if (comboBox1->SelectedItem == nullptr) {
				MessageBox::Show("Veuillez choisir un moyen de paiement avant de valider la commande.");
				return;
			}

			String^ moyenPaiement = comboBox1->SelectedItem->ToString();

			String^ checkPremierAchatQuery = "SELECT DATE_PREMIER_ACHAT FROM CLIENT WHERE ID_CLIENT = @idClient";
			SqlCommand^ checkPremierAchatCommand = gcnew SqlCommand(checkPremierAchatQuery, connection);
			checkPremierAchatCommand->Transaction = transaction;
			checkPremierAchatCommand->Parameters->AddWithValue("@idClient", this->idClient);
			Object^ premierAchatDate = checkPremierAchatCommand->ExecuteScalar();

			if (premierAchatDate == DBNull::Value) {
				String^ updatePremierAchatQuery = "UPDATE CLIENT SET DATE_PREMIER_ACHAT = GETDATE() WHERE ID_CLIENT = @idClient";
				SqlCommand^ updatePremierAchatCommand = gcnew SqlCommand(updatePremierAchatQuery, connection);
				updatePremierAchatCommand->Transaction = transaction;
				updatePremierAchatCommand->Parameters->AddWithValue("@idClient", this->idClient);
				updatePremierAchatCommand->ExecuteNonQuery();
			}

			Decimal totalPanier = Decimal::Zero;
			for each (DataGridViewRow ^ row in dataGridView2->Rows) {
				if (row->Cells["PRIX_HT_FIXE"]->Value != nullptr && row->Cells["QUANTITE"]->Value != nullptr) {
					Decimal prix = Convert::ToDecimal(row->Cells["PRIX_HT_FIXE"]->Value);
					int quantite = Convert::ToInt32(row->Cells["QUANTITE"]->Value);
					Decimal montantLigne = prix * quantite;
					totalPanier = Decimal::Add(totalPanier, montantLigne);
				}
			}
			Decimal totalHT = Decimal::Zero;
			Decimal totalTVA = Decimal::Zero;
			Decimal totalTTC = Decimal::Zero;

			for each (DataGridViewRow ^ row in dataGridView2->Rows) {
				if (row->Cells["PRIX_HT_FIXE"]->Value != nullptr && row->Cells["QUANTITE"]->Value != nullptr && row->Cells["TAUX_TVA"]->Value != nullptr) {
					Decimal prixHT = Convert::ToDecimal(row->Cells["PRIX_HT_FIXE"]->Value);
					Decimal tauxTVA = Decimal::Divide(Convert::ToDecimal(row->Cells["TAUX_TVA"]->Value), 100);
					int quantite = Convert::ToInt32(row->Cells["QUANTITE"]->Value);

					Decimal montantHT = Decimal::Multiply(prixHT, Decimal(quantite));
					Decimal facteurTTC = Decimal::Add(Decimal(1), tauxTVA);

					Decimal montantTTC = Decimal::Multiply(montantHT, facteurTTC);

					totalHT = Decimal::Add(totalHT, montantHT);
					totalTTC = Decimal::Add(totalTTC, montantTTC);

					Decimal montantTVA = Decimal::Subtract(montantTTC, montantHT);
					totalTVA = Decimal::Add(totalTVA, montantTVA);
				}
			}

			DateTime^ dateEmission = DateTime::Now;
			DateTime^ dateLivraison = dateEmission->AddDays(7);

			String^ queryInsertCommande = "INSERT INTO COMMANDE "
				"(DATE_EMISSION, ID_CLIENT, MOYEN_PAIEMENT, DATE_LIVRAISON, DATE_REGLEMENT, TOTAL_ARTICLES_HT, TOTAL_TVA, TOTAL_TTC) "
				"OUTPUT INSERTED.ID_COMMANDE VALUES "
				"(@dateEmission, @idClient, @moyenPaiement, @dateLivraison, @dateEmission, @totalHT, @totalTVA, @totalTTC)";

			SqlCommand^ commandInsertCommande = gcnew SqlCommand(queryInsertCommande, connection, transaction);
			commandInsertCommande->Parameters->AddWithValue("@dateEmission", dateEmission);
			commandInsertCommande->Parameters->AddWithValue("@idClient", this->idClient);
			commandInsertCommande->Parameters->AddWithValue("@moyenPaiement", moyenPaiement);
			commandInsertCommande->Parameters->AddWithValue("@dateLivraison", dateLivraison);
			commandInsertCommande->Parameters->AddWithValue("@totalHT", totalHT);
			commandInsertCommande->Parameters->AddWithValue("@totalTVA", totalTVA);
			commandInsertCommande->Parameters->AddWithValue("@totalTTC", totalTTC);
			int idCommande = Convert::ToInt32(commandInsertCommande->ExecuteScalar());

			for each (DataGridViewRow ^ row in dataGridView2->Rows) {
				if (row->Cells["ID_ARTICLE"]->Value != nullptr && row->Cells["QUANTITE"]->Value != nullptr && row->Cells["PRIX_HT_FIXE"]->Value != nullptr) {
					int idArticle = Convert::ToInt32(row->Cells["ID_ARTICLE"]->Value);
					int quantite = Convert::ToInt32(row->Cells["QUANTITE"]->Value);
					Decimal prix = Convert::ToDecimal(row->Cells["PRIX_HT_FIXE"]->Value);

					String^ queryInsertDetail = "INSERT INTO DETAIL_COMMANDE (ID_COMMANDE, ID_ARTICLE, QUANTITE, PRIX_UNITAIRE) VALUES (@idCommande, @idArticle, @quantite, @prix)";
					SqlCommand^ commandInsertDetail = gcnew SqlCommand(queryInsertDetail, connection, transaction);
					commandInsertDetail->Parameters->AddWithValue("@idCommande", idCommande);
					commandInsertDetail->Parameters->AddWithValue("@idArticle", idArticle);
					commandInsertDetail->Parameters->AddWithValue("@quantite", quantite);
					commandInsertDetail->Parameters->AddWithValue("@prix", prix);
					commandInsertDetail->ExecuteNonQuery();
				}
			}

			transaction->Commit();
			MettreAJourStock();
			MessageBox::Show("Commande validée avec succès. Numéro de commande : " + idCommande);
			String^ queryDeletePanier = "DELETE FROM PANIER WHERE ID_CLIENT = @idClient";
			SqlCommand^ commandDeletePanier = gcnew SqlCommand(queryDeletePanier, connection);
			commandDeletePanier->Transaction = transaction;
			commandDeletePanier->Parameters->AddWithValue("@idClient", this->idClient);
			commandDeletePanier->ExecuteNonQuery();

			RafraichirPanier();
			this->Close();
		}
		catch (Exception^ ex) {
			if (transaction != nullptr) transaction->Rollback();
			MessageBox::Show("Erreur lors de la validation de la commande : " + ex->Message);
		}
		finally {
			if (connection != nullptr && connection->State == ConnectionState::Open)
				connection->Close();
		}
	}

	private: System::Void RafraichirPanier() {

		String^ connectionString = "Data Source=MARTIN_GOA;Initial Catalog=Projet;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try {
			connection->Open();
			String^ query = "SELECT * FROM [Projet].[dbo].[PANIER] WHERE [ID_CLIENT] = @idClient";
			SqlCommand^ command = gcnew SqlCommand(query, connection);
			command->Parameters->AddWithValue("@idClient", this->idClient);

			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);
			DataTable^ dataTable = gcnew DataTable();
			adapter->Fill(dataTable);
			dataGridView2->DataSource = dataTable;
		}
		catch (Exception^ ex) {
			MessageBox::Show("Erreur lors du chargement du panier : " + ex->Message);
		}
		finally {
			connection->Close();
		}
	}
	private: System::Void SupprimerArticle_Click(System::Object^ sender, System::EventArgs^ e) {

		if (dataGridView2->SelectedRows->Count == 0) {
			MessageBox::Show("Veuillez sélectionner un ou plusieurs articles à supprimer du panier.");
			return;
		}

		SqlConnection^ connection = nullptr;
		try {
			String^ connectionString = "Data Source=MARTIN_GOA;Initial Catalog=Projet;Integrated Security=True";
			connection = gcnew SqlConnection(connectionString);
			connection->Open();

			for each (DataGridViewRow ^ selectedRow in dataGridView2->SelectedRows) {
				int idArticle = Convert::ToInt32(selectedRow->Cells["ID_ARTICLE"]->Value);
				int quantite = Convert::ToInt32(selectedRow->Cells["QUANTITE"]->Value);

				String^ queryUpdateStock = "UPDATE PROVIENT2 SET QUANTITE_PRODUIT_STOCK = QUANTITE_PRODUIT_STOCK + @quantite WHERE ID_PRODUIT = @idArticle";
				SqlCommand^ commandUpdateStock = gcnew SqlCommand(queryUpdateStock, connection);
				commandUpdateStock->Parameters->AddWithValue("@quantite", quantite);
				commandUpdateStock->Parameters->AddWithValue("@idArticle", idArticle);
				commandUpdateStock->ExecuteNonQuery();

				String^ queryDeleteArticle = "DELETE FROM [Projet].[dbo].[PANIER] WHERE [ID_ARTICLE] = @idArticle AND [ID_CLIENT] = @idClient";
				SqlCommand^ commandDeleteArticle = gcnew SqlCommand(queryDeleteArticle, connection);
				commandDeleteArticle->Parameters->AddWithValue("@idArticle", idArticle);
				commandDeleteArticle->Parameters->AddWithValue("@idClient", this->idClient);
				commandDeleteArticle->ExecuteNonQuery();

				dataGridView2->Rows->Remove(selectedRow);
			}

			MessageBox::Show("Article(s) supprimé(s) du panier.");
		}
		catch (Exception^ ex) {
			MessageBox::Show("Erreur lors de la suppression de l'article : " + ex->Message);
		}
		finally {
			if (connection != nullptr) {
				connection->Close();
			}
		}

		RafraichirQuantiteEnStock();
	}
	private: void RafraichirQuantiteEnStock() {
		if (dataGridView1->SelectedRows->Count > 0) {
			DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];
			int idProduit = Convert::ToInt32(selectedRow->Cells["ID_PRODUIT"]->Value);

			MettreAJourLabelQuantiteEnStock(idProduit);
		}
	}
	private: void MettreAJourLabelQuantiteEnStock(int idProduit) {
		SqlConnection^ connection = gcnew SqlConnection("Data Source=MARTIN_GOA;Initial Catalog=Projet;Integrated Security=True");

		try {
			connection->Open();
			String^ queryStock = "SELECT QUANTITE_PRODUIT_STOCK FROM PROVIENT2 WHERE ID_PRODUIT = @idProduit";
			SqlCommand^ commandStock = gcnew SqlCommand(queryStock, connection);
			commandStock->Parameters->AddWithValue("@idProduit", idProduit);

			int quantiteEnStock = Convert::ToInt32(commandStock->ExecuteScalar());
			label5->Text = quantiteEnStock.ToString();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Erreur lors de la mise à jour de la quantité en stock : " + ex->Message);
		}
		finally {
			if (connection != nullptr && connection->State == ConnectionState::Open)
				connection->Close();
		}
	}
	};
}