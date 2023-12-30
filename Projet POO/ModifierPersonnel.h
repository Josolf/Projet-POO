#pragma once

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	public ref class ModifierPersonnel : public System::Windows::Forms::Form
	{
	public:
		ModifierPersonnel(void)
		{
			InitializeComponent();

		}

	protected:

		~ModifierPersonnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBoxDateEmbauche;
	protected:

	protected:
	private: System::Windows::Forms::Label^ labelCurrentID;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Button^ buttonAvancer;
	private: System::Windows::Forms::Button^ buttonReculer;
	private: System::Windows::Forms::Button^ buttonChargerBDD;
	private: System::Windows::Forms::NumericUpDown^ UpDownNumAdr;
	private: System::Windows::Forms::TextBox^ textBoxCodePostal;
	private: System::Windows::Forms::TextBox^ textBoxNomRue;
	private: System::Windows::Forms::TextBox^ textBoxNomVille;
	private: System::Windows::Forms::TextBox^ textBoxPrenom;
	private: System::Windows::Forms::TextBox^ textBoxNom;

	private: System::Windows::Forms::DataGridView^ dataGridViewPersonnel;
	private: System::Windows::Forms::TextBox^ textBoxSupHier;

	private: System::Windows::Forms::ComboBox^ comboBoxIDPoste;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label2;

	private:

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ModifierPersonnel::typeid));
			this->textBoxDateEmbauche = (gcnew System::Windows::Forms::TextBox());
			this->labelCurrentID = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->buttonAvancer = (gcnew System::Windows::Forms::Button());
			this->buttonReculer = (gcnew System::Windows::Forms::Button());
			this->buttonChargerBDD = (gcnew System::Windows::Forms::Button());
			this->UpDownNumAdr = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBoxCodePostal = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNomRue = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNomVille = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNom = (gcnew System::Windows::Forms::TextBox());
			this->dataGridViewPersonnel = (gcnew System::Windows::Forms::DataGridView());
			this->textBoxSupHier = (gcnew System::Windows::Forms::TextBox());
			this->comboBoxIDPoste = (gcnew System::Windows::Forms::ComboBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpDownNumAdr))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewPersonnel))->BeginInit();
			this->SuspendLayout();

			this->textBoxDateEmbauche->BackColor = System::Drawing::Color::Gainsboro;
			this->textBoxDateEmbauche->Location = System::Drawing::Point(208, 484);
			this->textBoxDateEmbauche->Margin = System::Windows::Forms::Padding(2);
			this->textBoxDateEmbauche->Name = L"textBoxDateEmbauche";
			this->textBoxDateEmbauche->Size = System::Drawing::Size(241, 26);
			this->textBoxDateEmbauche->TabIndex = 120;
			this->textBoxDateEmbauche->TextChanged += gcnew System::EventHandler(this, &ModifierPersonnel::textBoxDateEmbauche_TextChanged);

			this->labelCurrentID->AutoSize = true;
			this->labelCurrentID->Location = System::Drawing::Point(193, 337);
			this->labelCurrentID->Name = L"labelCurrentID";
			this->labelCurrentID->Size = System::Drawing::Size(0, 20);
			this->labelCurrentID->TabIndex = 119;

			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(164, 337);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 20);
			this->label9->TabIndex = 118;

			this->buttonAvancer->BackColor = System::Drawing::Color::Transparent;
			this->buttonAvancer->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16, System::Drawing::FontStyle::Bold));
			this->buttonAvancer->Location = System::Drawing::Point(314, 756);
			this->buttonAvancer->Name = L"buttonAvancer";
			this->buttonAvancer->Size = System::Drawing::Size(135, 78);
			this->buttonAvancer->TabIndex = 116;
			this->buttonAvancer->Text = L">";
			this->buttonAvancer->UseVisualStyleBackColor = false;
			this->buttonAvancer->Click += gcnew System::EventHandler(this, &ModifierPersonnel::buttonAvancer_Click);

			this->buttonReculer->BackColor = System::Drawing::Color::Transparent;
			this->buttonReculer->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonReculer->Location = System::Drawing::Point(152, 756);
			this->buttonReculer->Name = L"buttonReculer";
			this->buttonReculer->Size = System::Drawing::Size(135, 78);
			this->buttonReculer->TabIndex = 115;
			this->buttonReculer->Text = L"<";
			this->buttonReculer->UseVisualStyleBackColor = false;
			this->buttonReculer->Click += gcnew System::EventHandler(this, &ModifierPersonnel::buttonReculer_Click);

			this->buttonChargerBDD->BackColor = System::Drawing::Color::Gainsboro;
			this->buttonChargerBDD->Location = System::Drawing::Point(1276, 322);
			this->buttonChargerBDD->Name = L"buttonChargerBDD";
			this->buttonChargerBDD->Size = System::Drawing::Size(136, 35);
			this->buttonChargerBDD->TabIndex = 114;
			this->buttonChargerBDD->Text = L"Actualiser";
			this->buttonChargerBDD->UseVisualStyleBackColor = false;
			this->buttonChargerBDD->Click += gcnew System::EventHandler(this, &ModifierPersonnel::buttonChargerBDD_Click);

			this->UpDownNumAdr->BackColor = System::Drawing::Color::Gainsboro;
			this->UpDownNumAdr->Location = System::Drawing::Point(208, 577);
			this->UpDownNumAdr->Name = L"UpDownNumAdr";
			this->UpDownNumAdr->Size = System::Drawing::Size(79, 26);
			this->UpDownNumAdr->TabIndex = 113;
			this->UpDownNumAdr->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->UpDownNumAdr->ValueChanged += gcnew System::EventHandler(this, &ModifierPersonnel::UpDownNumAdr_ValueChanged);

			this->textBoxCodePostal->BackColor = System::Drawing::Color::Gainsboro;
			this->textBoxCodePostal->Location = System::Drawing::Point(208, 676);
			this->textBoxCodePostal->Margin = System::Windows::Forms::Padding(2);
			this->textBoxCodePostal->Name = L"textBoxCodePostal";
			this->textBoxCodePostal->Size = System::Drawing::Size(122, 26);
			this->textBoxCodePostal->TabIndex = 112;
			this->textBoxCodePostal->TextChanged += gcnew System::EventHandler(this, &ModifierPersonnel::textBoxCodePostal_TextChanged);

			this->textBoxNomRue->BackColor = System::Drawing::Color::Gainsboro;
			this->textBoxNomRue->Location = System::Drawing::Point(208, 624);
			this->textBoxNomRue->Margin = System::Windows::Forms::Padding(2);
			this->textBoxNomRue->Name = L"textBoxNomRue";
			this->textBoxNomRue->Size = System::Drawing::Size(422, 26);
			this->textBoxNomRue->TabIndex = 111;
			this->textBoxNomRue->TextChanged += gcnew System::EventHandler(this, &ModifierPersonnel::textBoxNomRue_TextChanged);

			this->textBoxNomVille->BackColor = System::Drawing::Color::Gainsboro;
			this->textBoxNomVille->Location = System::Drawing::Point(351, 579);
			this->textBoxNomVille->Margin = System::Windows::Forms::Padding(2);
			this->textBoxNomVille->Name = L"textBoxNomVille";
			this->textBoxNomVille->Size = System::Drawing::Size(241, 26);
			this->textBoxNomVille->TabIndex = 110;
			this->textBoxNomVille->TextChanged += gcnew System::EventHandler(this, &ModifierPersonnel::textBoxNomVille_TextChanged);

			this->textBoxPrenom->BackColor = System::Drawing::Color::Gainsboro;
			this->textBoxPrenom->ForeColor = System::Drawing::SystemColors::Desktop;
			this->textBoxPrenom->Location = System::Drawing::Point(111, 439);
			this->textBoxPrenom->Margin = System::Windows::Forms::Padding(2);
			this->textBoxPrenom->Name = L"textBoxPrenom";
			this->textBoxPrenom->Size = System::Drawing::Size(468, 26);
			this->textBoxPrenom->TabIndex = 109;
			this->textBoxPrenom->TextChanged += gcnew System::EventHandler(this, &ModifierPersonnel::textBoxPrenom_TextChanged);

			this->textBoxNom->BackColor = System::Drawing::Color::Gainsboro;
			this->textBoxNom->Location = System::Drawing::Point(111, 395);
			this->textBoxNom->Margin = System::Windows::Forms::Padding(2);
			this->textBoxNom->Name = L"textBoxNom";
			this->textBoxNom->Size = System::Drawing::Size(481, 26);
			this->textBoxNom->TabIndex = 108;
			this->textBoxNom->TextChanged += gcnew System::EventHandler(this, &ModifierPersonnel::textBoxNom_TextChanged);

			this->dataGridViewPersonnel->BackgroundColor = System::Drawing::Color::Gainsboro;
			this->dataGridViewPersonnel->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewPersonnel->Location = System::Drawing::Point(23, 30);
			this->dataGridViewPersonnel->Margin = System::Windows::Forms::Padding(2);
			this->dataGridViewPersonnel->Name = L"dataGridViewPersonnel";
			this->dataGridViewPersonnel->RowHeadersWidth = 82;
			this->dataGridViewPersonnel->Size = System::Drawing::Size(1389, 260);
			this->dataGridViewPersonnel->TabIndex = 99;

			this->textBoxSupHier->BackColor = System::Drawing::Color::Gainsboro;
			this->textBoxSupHier->Location = System::Drawing::Point(931, 603);
			this->textBoxSupHier->Margin = System::Windows::Forms::Padding(2);
			this->textBoxSupHier->Name = L"textBoxSupHier";
			this->textBoxSupHier->Size = System::Drawing::Size(422, 26);
			this->textBoxSupHier->TabIndex = 122;
			this->textBoxSupHier->TextChanged += gcnew System::EventHandler(this, &ModifierPersonnel::textBoxSupHier_TextChanged);

			this->comboBoxIDPoste->BackColor = System::Drawing::Color::Gainsboro;
			this->comboBoxIDPoste->FormattingEnabled = true;
			this->comboBoxIDPoste->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"Directeur Général", L"Responsable des Achats de Composants",
					L"Chef de Projet R&D ", L"Directeur des Opérations", L"Responsable Marketing et Ventes", L" Ingénieur/Chercheur en Électronique",
					L"Analyste de Marché", L"Gestionnaire de la Chaîne Logistique", L"Spécialiste Support Technique", L"Contrôleur de Qualité"
			});
			this->comboBoxIDPoste->Location = System::Drawing::Point(931, 552);
			this->comboBoxIDPoste->Margin = System::Windows::Forms::Padding(2);
			this->comboBoxIDPoste->Name = L"comboBoxIDPoste";
			this->comboBoxIDPoste->Size = System::Drawing::Size(409, 28);
			this->comboBoxIDPoste->TabIndex = 125;
			this->comboBoxIDPoste->SelectedIndexChanged += gcnew System::EventHandler(this, &ModifierPersonnel::comboBoxIDPoste_SelectedIndexChanged);

			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Cursor = System::Windows::Forms::Cursors::No;
			this->label12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label12->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label12->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label12->Location = System::Drawing::Point(716, 603);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(199, 21);
			this->label12->TabIndex = 136;
			this->label12->Text = L"Supérieur Hierarchique : ";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Cursor = System::Windows::Forms::Cursors::No;
			this->label13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label13->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label13->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label13->Location = System::Drawing::Point(790, 554);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(110, 21);
			this->label13->TabIndex = 135;
			this->label13->Text = L"Poste actuel :";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label14->Location = System::Drawing::Point(729, 482);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(297, 36);
			this->label14->TabIndex = 134;
			this->label14->Text = L"Informations Professionnelles";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label15->Location = System::Drawing::Point(17, 332);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(165, 36);
			this->label15->TabIndex = 133;
			this->label15->Text = L"ID du personnel";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label15->Click += gcnew System::EventHandler(this, &ModifierPersonnel::label15_Click);

			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Cursor = System::Windows::Forms::Cursors::No;
			this->label16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label16->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label16->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label16->Location = System::Drawing::Point(55, 681);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(100, 21);
			this->label16->TabIndex = 132;
			this->label16->Text = L"Code postal";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Cursor = System::Windows::Forms::Cursors::No;
			this->label17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label17->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label17->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label17->Location = System::Drawing::Point(55, 624);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(118, 21);
			this->label17->TabIndex = 131;
			this->label17->Text = L"Nom de la rue";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Cursor = System::Windows::Forms::Cursors::No;
			this->label18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label18->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label18->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label18->Location = System::Drawing::Point(44, 578);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(149, 21);
			this->label18->TabIndex = 130;
			this->label18->Text = L"Numéro d\'adresse";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label19->Location = System::Drawing::Point(17, 538);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(219, 36);
			this->label19->TabIndex = 129;
			this->label19->Text = L"Adresse de Résidence";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Transparent;
			this->label20->Cursor = System::Windows::Forms::Cursors::No;
			this->label20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label20->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label20->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label20->Location = System::Drawing::Point(35, 489);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(145, 21);
			this->label20->TabIndex = 128;
			this->label20->Text = L"Date d\'embauche";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Transparent;
			this->label21->Cursor = System::Windows::Forms::Cursors::No;
			this->label21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label21->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label21->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label21->Location = System::Drawing::Point(30, 441);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(70, 21);
			this->label21->TabIndex = 127;
			this->label21->Text = L"Prénom";
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::Transparent;
			this->label22->Cursor = System::Windows::Forms::Cursors::No;
			this->label22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label22->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label22->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label22->Location = System::Drawing::Point(55, 395);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(48, 21);
			this->label22->TabIndex = 126;
			this->label22->Text = L"Nom";
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Cursor = System::Windows::Forms::Cursors::No;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(302, 577);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 21);
			this->label2->TabIndex = 150;
			this->label2->Text = L"Ville";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1428, 874);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->comboBoxIDPoste);
			this->Controls->Add(this->textBoxSupHier);
			this->Controls->Add(this->textBoxDateEmbauche);
			this->Controls->Add(this->labelCurrentID);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->buttonAvancer);
			this->Controls->Add(this->buttonReculer);
			this->Controls->Add(this->buttonChargerBDD);
			this->Controls->Add(this->UpDownNumAdr);
			this->Controls->Add(this->textBoxCodePostal);
			this->Controls->Add(this->textBoxNomRue);
			this->Controls->Add(this->textBoxNomVille);
			this->Controls->Add(this->textBoxPrenom);
			this->Controls->Add(this->textBoxNom);
			this->Controls->Add(this->dataGridViewPersonnel);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ModifierPersonnel";
			this->Text = L"ModifierPersonnel";
			this->Load += gcnew System::EventHandler(this, &ModifierPersonnel::ModifierPersonnel_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpDownNumAdr))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewPersonnel))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void ChargerInformationsPersonnel(int personnelId) {
		String^ connectionString = "Data Source=MARTIN_GOA;Initial Catalog=Projet;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try {
			connection->Open();

			String^ query = "SELECT * FROM dbo.Personnel WHERE ID_PERSONNEL = @PersonnelId";
			SqlCommand^ command = gcnew SqlCommand(query, connection);
			command->Parameters->AddWithValue("@PersonnelId", personnelId);
			SqlDataReader^ reader = command->ExecuteReader();

			if (reader->Read()) {
				DateTime dateEmbauche;

				textBoxNom->Text = reader["NOM"]->ToString();
				textBoxPrenom->Text = reader["PRENOM"]->ToString();
				dateEmbauche = safe_cast<DateTime>(reader["DATE_EMBAUCHE"]);
				textBoxDateEmbauche->Text = dateEmbauche.ToShortDateString();
				textBoxSupHier->Text = reader["SUPERIEUR_HIERARCHIQUE"]->ToString();

				if (DBNull::Value != reader["ID_POSTE"]) {

					int idPoste = Convert::ToInt32(reader["ID_POSTE"]);
					comboBoxIDPoste->SelectedIndex = idPoste;
				}
				else {

					comboBoxIDPoste->SelectedIndex = -1;
				}

				reader->Close();
			}
			else {
				textBoxNom->Text = "";
				textBoxPrenom->Text = "";
				textBoxDateEmbauche->Text = "";
				textBoxSupHier->Text = "";

				reader->Close();

				MessageBox::Show("Aucun personnel trouvé avec l'ID : " + personnelId, "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Erreur lors du chargement des informations du personnel : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			connection->Close();
		}
	}
		   int adresseResidenceId;
	private: void ChargerAdresseResidence(int personnelId) {
		String^ connectionString = "Data Source=MARTIN_GOA;Initial Catalog=Projet;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);
		try {
			connection->Open();

			String^ query = "SELECT ADRESSE.* FROM ADRESSE "
				"JOIN POSSEDE2 ON ADRESSE.ID_ADRESSE = POSSEDE2.ID_ADRESSE "
				"WHERE POSSEDE2.ID_PERSONNEL = @PersonnelId";

			SqlCommand^ command = gcnew SqlCommand(query, connection);
			command->Parameters->AddWithValue("@PersonnelId", personnelId);

			SqlDataReader^ reader = command->ExecuteReader();

			if (reader->Read()) {
				adresseResidenceId = Convert::ToInt32(reader["ID_ADRESSE"]);
				UpDownNumAdr->Value = Convert::ToInt32(reader["NUMERO"]);
				textBoxNomRue->Text = reader["NOM_RUE"]->ToString();
				textBoxNomVille->Text = reader["NOM_VILLE"]->ToString();
				textBoxCodePostal->Text = reader["CODE_POSTAL"]->ToString();
			}
			else {

				UpDownNumAdr->Value = 0;
				textBoxNomRue->Text = "";
				textBoxNomVille->Text = "";
				textBoxCodePostal->Text = "";
				adresseResidenceId = -1;
			}
			reader->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Erreur lors du chargement de l'adresse de résidence : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			if (connection->State == ConnectionState::Open) {
				connection->Close();
			}
		}
	}
	private: void MettreAJourPersonnel(int personnelId, String^ champ, String^ valeur) {
		String^ connectionString = "Data Source=MARTIN_GOA;Initial Catalog=Projet;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try {
			connection->Open();
			String^ query = "UPDATE dbo.Personnel SET " + champ + " = @Valeur WHERE ID_PERSONNEL = @PersonnelID";
			SqlCommand^ command = gcnew SqlCommand(query, connection);

			command->Parameters->AddWithValue("@Valeur", valeur);
			command->Parameters->AddWithValue("@PersonnelID", personnelId);
			command->ExecuteNonQuery();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Erreur lors de la mise à jour : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			connection->Close();
		}
	}

	private: System::Void buttonChargerBDD_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connectionString = "Data Source=MARTIN_GOA;Initial Catalog=Projet;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try {
			connection->Open();

			String^ query = "SELECT P.ID_PERSONNEL, P.NOM, P.PRENOM, P.DATE_EMBAUCHE, P.ID_POSTE, "
				"A.NUMERO, A.NOM_RUE, A.NOM_VILLE, A.CODE_POSTAL, P.SUPERIEUR_HIERARCHIQUE "
				"FROM PERSONNEL AS P "
				"LEFT JOIN POSSEDE2 ON P.ID_PERSONNEL = POSSEDE2.ID_PERSONNEL "
				"LEFT JOIN ADRESSE AS A ON POSSEDE2.ID_ADRESSE = A.ID_ADRESSE";
			SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(query, connection);

			DataSet^ dataSet = gcnew DataSet();

			dataAdapter->Fill(dataSet, "PersonnelAdresse");

			dataGridViewPersonnel->DataSource = dataSet;
			dataGridViewPersonnel->DataMember = "PersonnelAdresse";

		}
		catch (Exception^ ex) {
			MessageBox::Show("Erreur lors du chargement des données : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			connection->Close();
		}
	}
	private: System::Void ModifierPersonnel_Load(System::Object^ sender, System::EventArgs^ e) {
		labelCurrentID->Text = "4";
		ChargerAdresseResidence(4);
		ChargerInformationsPersonnel(4);
		String^ connectionString = "Data Source=MARTIN_GOA;Initial Catalog=Projet;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try {
			connection->Open();

			String^ query = "SELECT P.ID_PERSONNEL, P.NOM, P.PRENOM, P.DATE_EMBAUCHE, P.ID_POSTE, "
				"A.NUMERO, A.NOM_RUE, A.NOM_VILLE, A.CODE_POSTAL, P.SUPERIEUR_HIERARCHIQUE "
				"FROM PERSONNEL AS P "
				"LEFT JOIN POSSEDE2 ON P.ID_PERSONNEL = POSSEDE2.ID_PERSONNEL "
				"LEFT JOIN ADRESSE AS A ON POSSEDE2.ID_ADRESSE = A.ID_ADRESSE";
			SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(query, connection);

			DataSet^ dataSet = gcnew DataSet();

			dataAdapter->Fill(dataSet, "PersonnelAdresse");

			dataGridViewPersonnel->DataSource = dataSet;
			dataGridViewPersonnel->DataMember = "PersonnelAdresse";

		}
		catch (Exception^ ex) {
			MessageBox::Show("Erreur lors du chargement des données : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			connection->Close();
		}

	}
	private: System::Void buttonAvancer_Click(System::Object^ sender, System::EventArgs^ e) {
		int currentId;
		if (Int32::TryParse(labelCurrentID->Text, currentId)) {
			int nextId = currentId + 1;

			labelCurrentID->Text = nextId.ToString();
			textBoxNom->TextChanged -= gcnew System::EventHandler(this, &ModifierPersonnel::textBoxNom_TextChanged);
			textBoxPrenom->TextChanged -= gcnew System::EventHandler(this, &ModifierPersonnel::textBoxPrenom_TextChanged);
			UpDownNumAdr->ValueChanged -= gcnew System::EventHandler(this, &ModifierPersonnel::UpDownNumAdr_ValueChanged);
			textBoxNomVille->TextChanged -= gcnew System::EventHandler(this, &ModifierPersonnel::textBoxNomVille_TextChanged);
			textBoxNomRue->TextChanged -= gcnew System::EventHandler(this, &ModifierPersonnel::textBoxNomRue_TextChanged);
			textBoxCodePostal->TextChanged -= gcnew System::EventHandler(this, &ModifierPersonnel::textBoxCodePostal_TextChanged);
			textBoxDateEmbauche->TextChanged -= gcnew System::EventHandler(this, &ModifierPersonnel::textBoxDateEmbauche_TextChanged);

			ChargerInformationsPersonnel(nextId);
			ChargerAdresseResidence(nextId);
			textBoxNom->TextChanged += gcnew System::EventHandler(this, &ModifierPersonnel::textBoxNom_TextChanged);
			textBoxPrenom->TextChanged += gcnew System::EventHandler(this, &ModifierPersonnel::textBoxPrenom_TextChanged);
			textBoxDateEmbauche->TextChanged += gcnew System::EventHandler(this, &ModifierPersonnel::textBoxDateEmbauche_TextChanged);
			UpDownNumAdr->ValueChanged += gcnew System::EventHandler(this, &ModifierPersonnel::UpDownNumAdr_ValueChanged);
			textBoxNomVille->TextChanged += gcnew System::EventHandler(this, &ModifierPersonnel::textBoxNomVille_TextChanged);
			textBoxNomRue->TextChanged += gcnew System::EventHandler(this, &ModifierPersonnel::textBoxNomRue_TextChanged);
			textBoxCodePostal->TextChanged += gcnew System::EventHandler(this, &ModifierPersonnel::textBoxCodePostal_TextChanged);
		}
		else {

			MessageBox::Show("L'ID du client actuel n'est pas valide.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void buttonReculer_Click(System::Object^ sender, System::EventArgs^ e) {

		int currentId = Convert::ToInt32(labelCurrentID->Text);
		int previousId = currentId - 1;
		textBoxNom->TextChanged -= gcnew System::EventHandler(this, &ModifierPersonnel::textBoxNom_TextChanged);
		textBoxPrenom->TextChanged -= gcnew System::EventHandler(this, &ModifierPersonnel::textBoxPrenom_TextChanged);
		UpDownNumAdr->ValueChanged -= gcnew System::EventHandler(this, &ModifierPersonnel::UpDownNumAdr_ValueChanged);
		textBoxNomVille->TextChanged -= gcnew System::EventHandler(this, &ModifierPersonnel::textBoxNomVille_TextChanged);
		textBoxNomRue->TextChanged -= gcnew System::EventHandler(this, &ModifierPersonnel::textBoxNomRue_TextChanged);
		textBoxCodePostal->TextChanged -= gcnew System::EventHandler(this, &ModifierPersonnel::textBoxCodePostal_TextChanged);
		textBoxDateEmbauche->TextChanged -= gcnew System::EventHandler(this, &ModifierPersonnel::textBoxDateEmbauche_TextChanged);

		labelCurrentID->Text = previousId.ToString();

		ChargerInformationsPersonnel(previousId);
		ChargerAdresseResidence(previousId);
		textBoxNom->TextChanged += gcnew System::EventHandler(this, &ModifierPersonnel::textBoxNom_TextChanged);
		textBoxPrenom->TextChanged += gcnew System::EventHandler(this, &ModifierPersonnel::textBoxPrenom_TextChanged);
		textBoxDateEmbauche->TextChanged += gcnew System::EventHandler(this, &ModifierPersonnel::textBoxDateEmbauche_TextChanged);
		UpDownNumAdr->ValueChanged += gcnew System::EventHandler(this, &ModifierPersonnel::UpDownNumAdr_ValueChanged);
		textBoxNomVille->TextChanged += gcnew System::EventHandler(this, &ModifierPersonnel::textBoxNomVille_TextChanged);
		textBoxNomRue->TextChanged += gcnew System::EventHandler(this, &ModifierPersonnel::textBoxNomRue_TextChanged);
		textBoxCodePostal->TextChanged += gcnew System::EventHandler(this, &ModifierPersonnel::textBoxCodePostal_TextChanged);
	}
	private: void MettreAJourAdresse(int adresseId, String^ champ, String^ valeur) {
		String^ connectionString = "Data Source=MARTIN_GOA;Initial Catalog=Projet;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try {
			connection->Open();
			String^ query = "UPDATE dbo.ADRESSE SET " + champ + " = @Valeur WHERE ID_ADRESSE = @AdresseID";
			SqlCommand^ command = gcnew SqlCommand(query, connection);
			command->Parameters->AddWithValue("@Valeur", valeur);
			command->Parameters->AddWithValue("@AdresseID", adresseId);
			command->ExecuteNonQuery();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Erreur lors de la mise à jour de l'adresse : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			connection->Close();
		}
	}
	private: System::Void textBoxNom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		int personnelId = Convert::ToInt32(labelCurrentID->Text);
		String^ nouveauNom = textBoxNom->Text;
		MettreAJourPersonnel(personnelId, "NOM", nouveauNom);
	}
	private: System::Void textBoxPrenom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		int clientId = Convert::ToInt32(labelCurrentID->Text);
		String^ nouveauPrenom = textBoxPrenom->Text;
		MettreAJourPersonnel(clientId, "PRENOM", nouveauPrenom);
	}
	private: System::Void textBoxDateEmbauche_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		int clientId = Convert::ToInt32(labelCurrentID->Text);
		String^ nouvelleDateNaissance = textBoxDateEmbauche->Text;

		MettreAJourPersonnel(clientId, "DATE_EMBAUCHE", nouvelleDateNaissance);
	}
	private: System::Void UpDownNumAdr_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		int nouveauNumero = static_cast<int>(UpDownNumAdr->Value);
		MettreAJourAdresse(adresseResidenceId, "NUMERO", nouveauNumero.ToString());
	}
	private: System::Void textBoxNomVille_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ nouveauNomVille = textBoxNomVille->Text;
		MettreAJourAdresse(adresseResidenceId, "NOM_VILLE", nouveauNomVille);
	}
	private: System::Void textBoxNomRue_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ nouveauNomRue = textBoxNomRue->Text;
		MettreAJourAdresse(adresseResidenceId, "NOM_RUE", nouveauNomRue);
	}
	private: System::Void textBoxCodePostal_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ nouveauCodePostal = textBoxCodePostal->Text;
		MettreAJourAdresse(adresseResidenceId, "CODE_POSTAL", nouveauCodePostal);
	}
	private: System::Void comboBoxIDPoste_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (comboBoxIDPoste->SelectedIndex != -1) {
			int personnelId = Convert::ToInt32(labelCurrentID->Text);
			int idPoste = comboBoxIDPoste->SelectedIndex;

			MettreAJourPersonnel(personnelId, "ID_POSTE", idPoste.ToString());
		}
	}
	private: System::Void textBoxSupHier_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		int personnelId = Convert::ToInt32(labelCurrentID->Text);
		String^ supHier = textBoxSupHier->Text;

		MettreAJourPersonnel(personnelId, "SUPERIEUR_HIERARCHIQUE", supHier);
	}
	private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}