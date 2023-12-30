#pragma once

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	public ref class AfficherPersonnel : public System::Windows::Forms::Form
	{
	public:
		AfficherPersonnel(void)
		{
			InitializeComponent();

		}

	protected:

		~AfficherPersonnel()
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

	private: System::Windows::Forms::Label^ label11;

	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::ComboBox^ comboBoxIDPoste;
	private: System::Windows::Forms::TextBox^ textBoxSupHier;

	private:

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AfficherPersonnel::typeid));
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
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->comboBoxIDPoste = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxSupHier = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpDownNumAdr))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewPersonnel))->BeginInit();
			this->SuspendLayout();
			// 
			// textBoxDateEmbauche
			// 
			this->textBoxDateEmbauche->BackColor = System::Drawing::Color::Gainsboro;
			this->textBoxDateEmbauche->Location = System::Drawing::Point(211, 413);
			this->textBoxDateEmbauche->Margin = System::Windows::Forms::Padding(2);
			this->textBoxDateEmbauche->Name = L"textBoxDateEmbauche";
			this->textBoxDateEmbauche->ReadOnly = true;
			this->textBoxDateEmbauche->Size = System::Drawing::Size(241, 26);
			this->textBoxDateEmbauche->TabIndex = 150;
			// 
			// labelCurrentID
			// 
			this->labelCurrentID->AutoSize = true;
			this->labelCurrentID->Location = System::Drawing::Point(207, 266);
			this->labelCurrentID->Name = L"labelCurrentID";
			this->labelCurrentID->Size = System::Drawing::Size(0, 20);
			this->labelCurrentID->TabIndex = 149;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(167, 266);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 20);
			this->label9->TabIndex = 148;
			// 
			// buttonAvancer
			// 
			this->buttonAvancer->BackColor = System::Drawing::Color::Transparent;
			this->buttonAvancer->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16, System::Drawing::FontStyle::Bold));
			this->buttonAvancer->Location = System::Drawing::Point(354, 692);
			this->buttonAvancer->Name = L"buttonAvancer";
			this->buttonAvancer->Size = System::Drawing::Size(191, 83);
			this->buttonAvancer->TabIndex = 146;
			this->buttonAvancer->Text = L">";
			this->buttonAvancer->UseVisualStyleBackColor = false;
			this->buttonAvancer->Click += gcnew System::EventHandler(this, &AfficherPersonnel::buttonAvancer_Click);
			// 
			// buttonReculer
			// 
			this->buttonReculer->BackColor = System::Drawing::Color::Transparent;
			this->buttonReculer->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16, System::Drawing::FontStyle::Bold));
			this->buttonReculer->Location = System::Drawing::Point(140, 692);
			this->buttonReculer->Name = L"buttonReculer";
			this->buttonReculer->Size = System::Drawing::Size(191, 83);
			this->buttonReculer->TabIndex = 145;
			this->buttonReculer->Text = L"<";
			this->buttonReculer->UseVisualStyleBackColor = false;
			this->buttonReculer->Click += gcnew System::EventHandler(this, &AfficherPersonnel::buttonReculer_Click);
			// 
			// buttonChargerBDD
			// 
			this->buttonChargerBDD->BackColor = System::Drawing::Color::Gainsboro;
			this->buttonChargerBDD->Location = System::Drawing::Point(1198, 263);
			this->buttonChargerBDD->Name = L"buttonChargerBDD";
			this->buttonChargerBDD->Size = System::Drawing::Size(136, 35);
			this->buttonChargerBDD->TabIndex = 144;
			this->buttonChargerBDD->Text = L"Actualiser";
			this->buttonChargerBDD->UseVisualStyleBackColor = false;
			this->buttonChargerBDD->Click += gcnew System::EventHandler(this, &AfficherPersonnel::buttonChargerBDD_Click);
			// 
			// UpDownNumAdr
			// 
			this->UpDownNumAdr->BackColor = System::Drawing::Color::Gainsboro;
			this->UpDownNumAdr->Location = System::Drawing::Point(211, 506);
			this->UpDownNumAdr->Name = L"UpDownNumAdr";
			this->UpDownNumAdr->ReadOnly = true;
			this->UpDownNumAdr->Size = System::Drawing::Size(79, 26);
			this->UpDownNumAdr->TabIndex = 143;
			this->UpDownNumAdr->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBoxCodePostal
			// 
			this->textBoxCodePostal->BackColor = System::Drawing::Color::Gainsboro;
			this->textBoxCodePostal->Location = System::Drawing::Point(158, 608);
			this->textBoxCodePostal->Margin = System::Windows::Forms::Padding(2);
			this->textBoxCodePostal->Name = L"textBoxCodePostal";
			this->textBoxCodePostal->ReadOnly = true;
			this->textBoxCodePostal->Size = System::Drawing::Size(122, 26);
			this->textBoxCodePostal->TabIndex = 142;
			// 
			// textBoxNomRue
			// 
			this->textBoxNomRue->BackColor = System::Drawing::Color::Gainsboro;
			this->textBoxNomRue->Location = System::Drawing::Point(173, 556);
			this->textBoxNomRue->Margin = System::Windows::Forms::Padding(2);
			this->textBoxNomRue->Name = L"textBoxNomRue";
			this->textBoxNomRue->ReadOnly = true;
			this->textBoxNomRue->Size = System::Drawing::Size(422, 26);
			this->textBoxNomRue->TabIndex = 141;
			// 
			// textBoxNomVille
			// 
			this->textBoxNomVille->BackColor = System::Drawing::Color::Gainsboro;
			this->textBoxNomVille->Location = System::Drawing::Point(354, 508);
			this->textBoxNomVille->Margin = System::Windows::Forms::Padding(2);
			this->textBoxNomVille->Name = L"textBoxNomVille";
			this->textBoxNomVille->ReadOnly = true;
			this->textBoxNomVille->Size = System::Drawing::Size(241, 26);
			this->textBoxNomVille->TabIndex = 140;
			// 
			// textBoxPrenom
			// 
			this->textBoxPrenom->BackColor = System::Drawing::Color::Gainsboro;
			this->textBoxPrenom->ForeColor = System::Drawing::SystemColors::ControlText;
			this->textBoxPrenom->Location = System::Drawing::Point(127, 368);
			this->textBoxPrenom->Margin = System::Windows::Forms::Padding(2);
			this->textBoxPrenom->Name = L"textBoxPrenom";
			this->textBoxPrenom->ReadOnly = true;
			this->textBoxPrenom->Size = System::Drawing::Size(468, 26);
			this->textBoxPrenom->TabIndex = 139;
			// 
			// textBoxNom
			// 
			this->textBoxNom->BackColor = System::Drawing::Color::Gainsboro;
			this->textBoxNom->Location = System::Drawing::Point(114, 324);
			this->textBoxNom->Margin = System::Windows::Forms::Padding(2);
			this->textBoxNom->Name = L"textBoxNom";
			this->textBoxNom->ReadOnly = true;
			this->textBoxNom->Size = System::Drawing::Size(481, 26);
			this->textBoxNom->TabIndex = 138;
			// 
			// dataGridViewPersonnel
			// 
			this->dataGridViewPersonnel->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridViewPersonnel->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewPersonnel->Location = System::Drawing::Point(34, 27);
			this->dataGridViewPersonnel->Margin = System::Windows::Forms::Padding(2);
			this->dataGridViewPersonnel->Name = L"dataGridViewPersonnel";
			this->dataGridViewPersonnel->RowHeadersWidth = 82;
			this->dataGridViewPersonnel->Size = System::Drawing::Size(1311, 210);
			this->dataGridViewPersonnel->TabIndex = 129;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label11->Location = System::Drawing::Point(65, 261);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(135, 36);
			this->label11->TabIndex = 163;
			this->label11->Text = L"ID Personnel";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Cursor = System::Windows::Forms::Cursors::No;
			this->label18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label18->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label18->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label18->Location = System::Drawing::Point(47, 612);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(100, 21);
			this->label18->TabIndex = 157;
			this->label18->Text = L"Code postal";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Cursor = System::Windows::Forms::Cursors::No;
			this->label19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label19->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label19->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label19->Location = System::Drawing::Point(47, 556);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(118, 21);
			this->label19->TabIndex = 156;
			this->label19->Text = L"Nom de la rue";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Transparent;
			this->label20->Cursor = System::Windows::Forms::Cursors::No;
			this->label20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label20->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label20->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label20->Location = System::Drawing::Point(47, 511);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(149, 21);
			this->label20->TabIndex = 155;
			this->label20->Text = L"Numéro d\'adresse";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Transparent;
			this->label21->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label21->Location = System::Drawing::Point(47, 464);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(225, 36);
			this->label21->TabIndex = 154;
			this->label21->Text = L"Adresse de résidence :";
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::Transparent;
			this->label22->Cursor = System::Windows::Forms::Cursors::No;
			this->label22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label22->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label22->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label22->Location = System::Drawing::Point(49, 418);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(145, 21);
			this->label22->TabIndex = 153;
			this->label22->Text = L"Date d\'embauche";
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Transparent;
			this->label23->Cursor = System::Windows::Forms::Cursors::No;
			this->label23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label23->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label23->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label23->Location = System::Drawing::Point(38, 370);
			this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(70, 21);
			this->label23->TabIndex = 152;
			this->label23->Text = L"Prénom";
			this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::Transparent;
			this->label25->Cursor = System::Windows::Forms::Cursors::No;
			this->label25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label25->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label25->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label25->Location = System::Drawing::Point(58, 324);
			this->label25->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(48, 21);
			this->label25->TabIndex = 151;
			this->label25->Text = L"Nom";
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Cursor = System::Windows::Forms::Cursors::No;
			this->label10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label10->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label10->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label10->Location = System::Drawing::Point(305, 510);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(45, 21);
			this->label10->TabIndex = 164;
			this->label10->Text = L"Ville";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Cursor = System::Windows::Forms::Cursors::No;
			this->label12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label12->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label12->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label12->Location = System::Drawing::Point(695, 620);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(199, 21);
			this->label12->TabIndex = 169;
			this->label12->Text = L"Supérieur Hierarchique : ";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Cursor = System::Windows::Forms::Cursors::No;
			this->label13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label13->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label13->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label13->Location = System::Drawing::Point(769, 571);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(110, 21);
			this->label13->TabIndex = 168;
			this->label13->Text = L"Poste actuel :";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label14->Location = System::Drawing::Point(708, 499);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(297, 36);
			this->label14->TabIndex = 167;
			this->label14->Text = L"Informations Professionnelles";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// comboBoxIDPoste
			// 
			this->comboBoxIDPoste->BackColor = System::Drawing::Color::Gainsboro;
			this->comboBoxIDPoste->FormattingEnabled = true;
			this->comboBoxIDPoste->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"Directeur Général", L"Responsable des Achats de Composants",
					L"Chef de Projet R&D ", L"Directeur des Opérations", L"Responsable Marketing et Ventes", L" Ingénieur/Chercheur en Électronique",
					L"Analyste de Marché", L"Gestionnaire de la Chaîne Logistique", L"Spécialiste Support Technique", L"Contrôleur de Qualité"
			});
			this->comboBoxIDPoste->Location = System::Drawing::Point(910, 569);
			this->comboBoxIDPoste->Margin = System::Windows::Forms::Padding(2);
			this->comboBoxIDPoste->Name = L"comboBoxIDPoste";
			this->comboBoxIDPoste->Size = System::Drawing::Size(409, 28);
			this->comboBoxIDPoste->TabIndex = 166;
			// 
			// textBoxSupHier
			// 
			this->textBoxSupHier->BackColor = System::Drawing::Color::Gainsboro;
			this->textBoxSupHier->Location = System::Drawing::Point(910, 620);
			this->textBoxSupHier->Margin = System::Windows::Forms::Padding(2);
			this->textBoxSupHier->Name = L"textBoxSupHier";
			this->textBoxSupHier->ReadOnly = true;
			this->textBoxSupHier->Size = System::Drawing::Size(422, 26);
			this->textBoxSupHier->TabIndex = 165;
			// 
			// AfficherPersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1364, 838);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->comboBoxIDPoste);
			this->Controls->Add(this->textBoxSupHier);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label25);
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
			this->Name = L"AfficherPersonnel";
			this->Text = L"AfficherPersonnel";
			this->Load += gcnew System::EventHandler(this, &AfficherPersonnel::AfficherPersonnel_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpDownNumAdr))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewPersonnel))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void buttonChargerBDD_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connectionString = "Data Source=Martin_GOA;Initial Catalog=Projet;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try {
			connection->Open();
			String^ query = "SELECT Personnel.*, Adresse.* FROM Personnel "
				"JOIN POSSEDE2 ON Personnel.ID_PERSONNEL = POSSEDE2.ID_PERSONNEL "
				"JOIN Adresse ON POSSEDE2.ID_ADRESSE = Adresse.ID_ADRESSE";

			SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(query, connection);
			DataSet^ dataSet = gcnew DataSet();
			dataAdapter->Fill(dataSet, "PersonnelAdresse");

			dataGridViewPersonnel->DataSource = dataSet;
			dataGridViewPersonnel->DataMember = "PersonnelAdresse";
		}
		catch (Exception^ ex) {
			MessageBox::Show("Erreur : " + ex->Message);
		}
		finally {
			connection->Close();
		}
	}

	private: System::Void ChargerAdressePersonnel(int personnelId) {
		String^ connectionString = "Data Source=Martin_GOA;Initial Catalog=Projet;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try {
			connection->Open();

			String^ query = "SELECT Adresse.* FROM POSSEDE2 "
				"JOIN Adresse ON POSSEDE2.ID_ADRESSE = Adresse.ID_ADRESSE "
				"WHERE POSSEDE2.ID_PERSONNEL = @PersonnelId";

			SqlCommand^ command = gcnew SqlCommand(query, connection);
			command->Parameters->AddWithValue("@PersonnelId", personnelId);

			SqlDataReader^ reader = command->ExecuteReader();

			if (reader->Read()) {

				UpDownNumAdr->Text = reader["NUMERO"]->ToString();
				textBoxNomRue->Text = reader["NOM_RUE"]->ToString();
				textBoxNomVille->Text = reader["NOM_VILLE"]->ToString();
				textBoxCodePostal->Text = reader["CODE_POSTAL"]->ToString();
			}
			reader->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Erreur : " + ex->Message);
		}
		finally {
			connection->Close();
		}
	}

	private: System::Void AfficherPersonnel_Load(System::Object^ sender, System::EventArgs^ e) {
		labelCurrentID->Text = "4";
		ChargerInformationsPersonnel(4);
		ChargerAdressePersonnel(4);
		String^ connectionString = "Data Source=Martin_GOA;Initial Catalog=Projet;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try {
			connection->Open();
			String^ query = "SELECT Personnel.*, Adresse.* FROM Personnel "
				"JOIN POSSEDE2 ON Personnel.ID_PERSONNEL = POSSEDE2.ID_PERSONNEL "
				"JOIN Adresse ON POSSEDE2.ID_ADRESSE = Adresse.ID_ADRESSE";

			SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(query, connection);
			DataSet^ dataSet = gcnew DataSet();
			dataAdapter->Fill(dataSet, "PersonnelAdresse");

			dataGridViewPersonnel->DataSource = dataSet;
			dataGridViewPersonnel->DataMember = "PersonnelAdresse";
		}
		catch (Exception^ ex) {
			MessageBox::Show("Erreur : " + ex->Message);
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

			ChargerInformationsPersonnel(nextId);
			ChargerAdressePersonnel(nextId);

		}
		else {

			MessageBox::Show("L'ID du client actuel n'est pas valide.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
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
	private: System::Void buttonReculer_Click(System::Object^ sender, System::EventArgs^ e) {
		int currentId = Convert::ToInt32(labelCurrentID->Text);
		int previousId = currentId - 1;

		labelCurrentID->Text = previousId.ToString();

		ChargerInformationsPersonnel(previousId);
		ChargerAdressePersonnel(previousId);

	}
	};
}