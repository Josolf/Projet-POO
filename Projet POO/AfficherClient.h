#pragma once

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	public ref class AfficherClient : public System::Windows::Forms::Form
	{
	public:
		AfficherClient(void)
		{
			InitializeComponent();

		}

	protected:

		~AfficherClient()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::NumericUpDown^ UpDownAdr2;
	private: System::Windows::Forms::TextBox^ textBoxCodePostal2;
	private: System::Windows::Forms::TextBox^ textBoxNomRue2;
	private: System::Windows::Forms::TextBox^ textBoxNomVille2;

	private: System::Windows::Forms::TextBox^ textBoxDatedeNaissance;
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	protected:

	private:

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AfficherClient::typeid));
			this->UpDownAdr2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBoxCodePostal2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNomRue2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNomVille2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDatedeNaissance = (gcnew System::Windows::Forms::TextBox());
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpDownAdr2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpDownNumAdr))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// UpDownAdr2
			// 
			this->UpDownAdr2->BackColor = System::Drawing::Color::Gainsboro;
			this->UpDownAdr2->Location = System::Drawing::Point(886, 501);
			this->UpDownAdr2->Name = L"UpDownAdr2";
			this->UpDownAdr2->Size = System::Drawing::Size(79, 26);
			this->UpDownAdr2->TabIndex = 128;
			this->UpDownAdr2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBoxCodePostal2
			// 
			this->textBoxCodePostal2->BackColor = System::Drawing::Color::Gainsboro;
			this->textBoxCodePostal2->Location = System::Drawing::Point(833, 603);
			this->textBoxCodePostal2->Margin = System::Windows::Forms::Padding(2);
			this->textBoxCodePostal2->Name = L"textBoxCodePostal2";
			this->textBoxCodePostal2->Size = System::Drawing::Size(122, 26);
			this->textBoxCodePostal2->TabIndex = 127;
			// 
			// textBoxNomRue2
			// 
			this->textBoxNomRue2->BackColor = System::Drawing::Color::Gainsboro;
			this->textBoxNomRue2->Location = System::Drawing::Point(848, 551);
			this->textBoxNomRue2->Margin = System::Windows::Forms::Padding(2);
			this->textBoxNomRue2->Name = L"textBoxNomRue2";
			this->textBoxNomRue2->Size = System::Drawing::Size(422, 26);
			this->textBoxNomRue2->TabIndex = 126;
			// 
			// textBoxNomVille2
			// 
			this->textBoxNomVille2->BackColor = System::Drawing::Color::Gainsboro;
			this->textBoxNomVille2->Location = System::Drawing::Point(1029, 503);
			this->textBoxNomVille2->Margin = System::Windows::Forms::Padding(2);
			this->textBoxNomVille2->Name = L"textBoxNomVille2";
			this->textBoxNomVille2->Size = System::Drawing::Size(241, 26);
			this->textBoxNomVille2->TabIndex = 125;
			// 
			// textBoxDatedeNaissance
			// 
			this->textBoxDatedeNaissance->BackColor = System::Drawing::Color::Gainsboro;
			this->textBoxDatedeNaissance->Location = System::Drawing::Point(191, 406);
			this->textBoxDatedeNaissance->Margin = System::Windows::Forms::Padding(2);
			this->textBoxDatedeNaissance->Name = L"textBoxDatedeNaissance";
			this->textBoxDatedeNaissance->Size = System::Drawing::Size(241, 26);
			this->textBoxDatedeNaissance->TabIndex = 119;
			// 
			// labelCurrentID
			// 
			this->labelCurrentID->AutoSize = true;
			this->labelCurrentID->Location = System::Drawing::Point(187, 259);
			this->labelCurrentID->Name = L"labelCurrentID";
			this->labelCurrentID->Size = System::Drawing::Size(0, 20);
			this->labelCurrentID->TabIndex = 118;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Gainsboro;
			this->label9->Location = System::Drawing::Point(147, 259);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 20);
			this->label9->TabIndex = 117;
			// 
			// buttonAvancer
			// 
			this->buttonAvancer->BackColor = System::Drawing::Color::Transparent;
			this->buttonAvancer->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16, System::Drawing::FontStyle::Bold));
			this->buttonAvancer->Location = System::Drawing::Point(289, 685);
			this->buttonAvancer->Name = L"buttonAvancer";
			this->buttonAvancer->Size = System::Drawing::Size(105, 60);
			this->buttonAvancer->TabIndex = 115;
			this->buttonAvancer->Text = L">";
			this->buttonAvancer->UseVisualStyleBackColor = false;
			this->buttonAvancer->Click += gcnew System::EventHandler(this, &AfficherClient::buttonAvancer_Click);
			// 
			// buttonReculer
			// 
			this->buttonReculer->BackColor = System::Drawing::Color::Transparent;
			this->buttonReculer->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16, System::Drawing::FontStyle::Bold));
			this->buttonReculer->Location = System::Drawing::Point(160, 685);
			this->buttonReculer->Name = L"buttonReculer";
			this->buttonReculer->Size = System::Drawing::Size(100, 60);
			this->buttonReculer->TabIndex = 114;
			this->buttonReculer->Text = L"<";
			this->buttonReculer->UseVisualStyleBackColor = false;
			this->buttonReculer->Click += gcnew System::EventHandler(this, &AfficherClient::buttonReculer_Click);
			// 
			// buttonChargerBDD
			// 
			this->buttonChargerBDD->BackColor = System::Drawing::Color::Gainsboro;
			this->buttonChargerBDD->Location = System::Drawing::Point(1186, 259);
			this->buttonChargerBDD->Name = L"buttonChargerBDD";
			this->buttonChargerBDD->Size = System::Drawing::Size(136, 35);
			this->buttonChargerBDD->TabIndex = 113;
			this->buttonChargerBDD->Text = L"Actualiser";
			this->buttonChargerBDD->UseVisualStyleBackColor = false;
			// 
			// UpDownNumAdr
			// 
			this->UpDownNumAdr->BackColor = System::Drawing::Color::Gainsboro;
			this->UpDownNumAdr->Location = System::Drawing::Point(191, 499);
			this->UpDownNumAdr->Name = L"UpDownNumAdr";
			this->UpDownNumAdr->Size = System::Drawing::Size(79, 26);
			this->UpDownNumAdr->TabIndex = 112;
			this->UpDownNumAdr->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBoxCodePostal
			// 
			this->textBoxCodePostal->BackColor = System::Drawing::Color::Gainsboro;
			this->textBoxCodePostal->Location = System::Drawing::Point(138, 601);
			this->textBoxCodePostal->Margin = System::Windows::Forms::Padding(2);
			this->textBoxCodePostal->Name = L"textBoxCodePostal";
			this->textBoxCodePostal->Size = System::Drawing::Size(122, 26);
			this->textBoxCodePostal->TabIndex = 111;
			// 
			// textBoxNomRue
			// 
			this->textBoxNomRue->BackColor = System::Drawing::Color::Gainsboro;
			this->textBoxNomRue->Location = System::Drawing::Point(153, 549);
			this->textBoxNomRue->Margin = System::Windows::Forms::Padding(2);
			this->textBoxNomRue->Name = L"textBoxNomRue";
			this->textBoxNomRue->Size = System::Drawing::Size(422, 26);
			this->textBoxNomRue->TabIndex = 110;
			// 
			// textBoxNomVille
			// 
			this->textBoxNomVille->BackColor = System::Drawing::Color::Gainsboro;
			this->textBoxNomVille->Location = System::Drawing::Point(334, 501);
			this->textBoxNomVille->Margin = System::Windows::Forms::Padding(2);
			this->textBoxNomVille->Name = L"textBoxNomVille";
			this->textBoxNomVille->Size = System::Drawing::Size(241, 26);
			this->textBoxNomVille->TabIndex = 109;
			// 
			// textBoxPrenom
			// 
			this->textBoxPrenom->BackColor = System::Drawing::Color::Gainsboro;
			this->textBoxPrenom->ForeColor = System::Drawing::SystemColors::Desktop;
			this->textBoxPrenom->Location = System::Drawing::Point(107, 361);
			this->textBoxPrenom->Margin = System::Windows::Forms::Padding(2);
			this->textBoxPrenom->Name = L"textBoxPrenom";
			this->textBoxPrenom->Size = System::Drawing::Size(468, 26);
			this->textBoxPrenom->TabIndex = 108;
			// 
			// textBoxNom
			// 
			this->textBoxNom->BackColor = System::Drawing::Color::Gainsboro;
			this->textBoxNom->Location = System::Drawing::Point(94, 317);
			this->textBoxNom->Margin = System::Windows::Forms::Padding(2);
			this->textBoxNom->Name = L"textBoxNom";
			this->textBoxNom->Size = System::Drawing::Size(481, 26);
			this->textBoxNom->TabIndex = 107;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(45, 254);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 36);
			this->label1->TabIndex = 141;
			this->label1->Text = L"ID Client";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Cursor = System::Windows::Forms::Cursors::No;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(729, 603);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 21);
			this->label2->TabIndex = 140;
			this->label2->Text = L"Code postal";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Cursor = System::Windows::Forms::Cursors::No;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(726, 549);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(118, 21);
			this->label3->TabIndex = 139;
			this->label3->Text = L"Nom de la rue";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Cursor = System::Windows::Forms::Cursors::No;
			this->label15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label15->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label15->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label15->Location = System::Drawing::Point(980, 506);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(45, 21);
			this->label15->TabIndex = 138;
			this->label15->Text = L"Ville";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Cursor = System::Windows::Forms::Cursors::No;
			this->label16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label16->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label16->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label16->Location = System::Drawing::Point(723, 499);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(149, 21);
			this->label16->TabIndex = 137;
			this->label16->Text = L"Numéro d\'adresse";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label17->Location = System::Drawing::Point(646, 444);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(241, 36);
			this->label17->TabIndex = 136;
			this->label17->Text = L"Adresse de facturation :";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Cursor = System::Windows::Forms::Cursors::No;
			this->label18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label18->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label18->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label18->Location = System::Drawing::Point(27, 605);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(100, 21);
			this->label18->TabIndex = 135;
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
			this->label19->Location = System::Drawing::Point(27, 549);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(118, 21);
			this->label19->TabIndex = 134;
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
			this->label20->Location = System::Drawing::Point(27, 504);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(149, 21);
			this->label20->TabIndex = 133;
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
			this->label21->Location = System::Drawing::Point(27, 457);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(216, 36);
			this->label21->TabIndex = 132;
			this->label21->Text = L"Adresse de livraison :";
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
			this->label22->Location = System::Drawing::Point(29, 411);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(147, 21);
			this->label22->TabIndex = 131;
			this->label22->Text = L"Date de naissance";
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
			this->label23->Location = System::Drawing::Point(18, 363);
			this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(70, 21);
			this->label23->TabIndex = 130;
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
			this->label25->Location = System::Drawing::Point(38, 317);
			this->label25->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(48, 21);
			this->label25->TabIndex = 129;
			this->label25->Text = L"Nom";
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Cursor = System::Windows::Forms::Cursors::No;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(285, 503);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 21);
			this->label4->TabIndex = 142;
			this->label4->Text = L"Ville";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(42, 23);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(1248, 209);
			this->dataGridView1->TabIndex = 143;
			// 
			// AfficherClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1344, 783);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->UpDownAdr2);
			this->Controls->Add(this->textBoxCodePostal2);
			this->Controls->Add(this->textBoxNomRue2);
			this->Controls->Add(this->textBoxNomVille2);
			this->Controls->Add(this->textBoxDatedeNaissance);
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
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"AfficherClient";
			this->Text = L"AfficherClient";
			this->TransparencyKey = System::Drawing::Color::Transparent;
			this->Load += gcnew System::EventHandler(this, &AfficherClient::AfficherClient_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpDownAdr2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpDownNumAdr))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int adresseLivraisonId;
		int adresseFacturationId;
	private: System::Void buttonChargerBDD_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ connectionString = "Data Source=MARTIN_GOA;Initial Catalog=Projet;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try
		{
			connection->Open();

			String^ query = "SELECT dbo.Client.ID_CLIENT, dbo.Client.NOM, dbo.Client.PRENOM, dbo.Client.DATE_NAISSANCE, ADRESSE.NUMERO, ADRESSE.NOM_RUE, ADRESSE.NOM_VILLE, ADRESSE.CODE_POSTAL, ADRESSE.TYPE_ADRESSE "
				"FROM dbo.Client "
				"LEFT JOIN Possede1 ON dbo.Client.ID_CLIENT = Possede1.ID_CLIENT "
				"LEFT JOIN ADRESSE ON Possede1.ID_ADRESSE = ADRESSE.ID_ADRESSE";

			SqlDataAdapter^ dataAdapter;
			dataAdapter = gcnew SqlDataAdapter(query, connection);

			DataSet^ dataSet = gcnew DataSet();

			dataAdapter->Fill(dataSet, "ClientAdresse");

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
	private: void ChargerAdresseFacturation(int clientId) {
		String^ connectionString = "Data Source=MARTIN_GOA;Initial Catalog=Projet;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);
		SqlDataReader^ reader = nullptr;
		try {
			connection->Open();

			String^ query = "SELECT ADRESSE.* FROM ADRESSE "
				"JOIN POSSEDE1 ON ADRESSE.ID_ADRESSE = POSSEDE1.ID_ADRESSE "
				"WHERE POSSEDE1.ID_CLIENT = @ClientId AND ADRESSE.TYPE_ADRESSE = 1";

			SqlCommand^ command = gcnew SqlCommand(query, connection);

			command->Parameters->AddWithValue("@ClientId", clientId);

			SqlDataReader^ reader = command->ExecuteReader();

			if (reader->Read()) {

				adresseFacturationId = Convert::ToInt32(reader["ID_Adresse"]);

				reader->Close();

				query = "SELECT * FROM Adresse WHERE ID_Adresse = " + adresseFacturationId;
				command = gcnew SqlCommand(query, connection);
				reader = command->ExecuteReader();

				if (reader->Read()) {

					UpDownAdr2->Value = Convert::ToInt32(reader["NUMERO"]);
					textBoxNomRue2->Text = reader["NOM_RUE"]->ToString();
					textBoxNomVille2->Text = reader["NOM_VILLE"]->ToString();
					textBoxCodePostal2->Text = reader["CODE_POSTAL"]->ToString();

				}
			}
			else {

				UpDownAdr2->Value = 0;
				textBoxNomRue2->Text = "";
				textBoxNomVille2->Text = "";
				textBoxCodePostal2->Text = "";

			}
		}
		catch (Exception^ ex) {
		}

		if (connection->State == ConnectionState::Open) {
			connection->Close();

		}
	}

	private: void ChargerAdresseLivraison(int clientId) {
		String^ connectionString = "Data Source=MARTIN_GOA;Initial Catalog=Projet;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);
		try {
			connection->Open();

			String^ query = "SELECT ADRESSE.* FROM dbo.Adresse "
				"JOIN Possede1 ON Adresse.ID_ADRESSE = Possede1.ID_ADRESSE "
				"WHERE Possede1.ID_CLIENT = @ClientId AND Adresse.TYPE_ADRESSE = 0";

			SqlCommand^ command = gcnew SqlCommand(query, connection);

			command->Parameters->AddWithValue("@ClientId", clientId);

			SqlDataReader^ reader = command->ExecuteReader();

			if (reader->Read()) {

				adresseLivraisonId = Convert::ToInt32(reader["ID_ADRESSE"]);

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
				adresseLivraisonId = -1;

			}
		}
		catch (Exception^ ex) {

		}
		finally {

			if (connection->State == ConnectionState::Open) {
				connection->Close();
			}
		}
	}
	private: void ChargerInformationsClient(int clientId) {
		String^ connectionString = "Data Source=MARTIN_GOA;Initial Catalog=Projet;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try {
			connection->Open();

			String^ query = "SELECT * FROM dbo.Client WHERE ID_CLIENT = " + clientId;
			SqlCommand^ command = gcnew SqlCommand(query, connection);
			SqlDataReader^ reader = command->ExecuteReader();

			if (reader->Read()) {

				textBoxNom->Text = reader["NOM"]->ToString();
				textBoxPrenom->Text = reader["PRENOM"]->ToString();
				String^ dateNaissanceStr = reader["DATE_NAISSANCE"]->ToString();
				DateTime dateNaissance = Convert::ToDateTime(dateNaissanceStr);
				textBoxDatedeNaissance->Text = dateNaissance.ToShortDateString();

				reader->Close();
			}
			else {

				textBoxNom->Text = "";
				textBoxPrenom->Text = "";
				textBoxDatedeNaissance->Text = "";

				reader->Close();

				MessageBox::Show("Aucun client trouvé avec l'ID : " + clientId, "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Erreur lors du chargement des données : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			connection->Close();
		}
	}
	private: System::Void buttonReculer_Click(System::Object^ sender, System::EventArgs^ e) {

		int currentId = Convert::ToInt32(labelCurrentID->Text);
		int previousId = currentId - 1;

		labelCurrentID->Text = previousId.ToString();

		ChargerInformationsClient(previousId);
		ChargerAdresseLivraison(previousId);
		ChargerAdresseFacturation(previousId);

	}
	private: System::Void buttonAvancer_Click(System::Object^ sender, System::EventArgs^ e) {
		int currentId;
		if (Int32::TryParse(labelCurrentID->Text, currentId)) {
			int nextId = currentId + 1;

			labelCurrentID->Text = nextId.ToString();

			ChargerInformationsClient(nextId);
			ChargerAdresseLivraison(nextId);
			ChargerAdresseFacturation(nextId);
		}
		else {

			MessageBox::Show("L'ID du client actuel n'est pas valide.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void AfficherClient_Load(System::Object^ sender, System::EventArgs^ e) {
		labelCurrentID->Text = "1";
		ChargerInformationsClient(1);

		ChargerAdresseFacturation(1);
		ChargerAdresseLivraison(1);
		String^ connectionString = "Data Source=MARTIN_GOA;Initial Catalog=Projet;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try
		{
			connection->Open();

			String^ query = "SELECT dbo.Client.ID_CLIENT, dbo.Client.NOM, dbo.Client.PRENOM, dbo.Client.DATE_NAISSANCE, ADRESSE.NUMERO, ADRESSE.NOM_RUE, ADRESSE.NOM_VILLE, ADRESSE.CODE_POSTAL, ADRESSE.TYPE_ADRESSE "
				"FROM dbo.Client "
				"LEFT JOIN Possede1 ON dbo.Client.ID_CLIENT = Possede1.ID_CLIENT "
				"LEFT JOIN ADRESSE ON Possede1.ID_ADRESSE = ADRESSE.ID_ADRESSE";

			SqlDataAdapter^ dataAdapter;
			dataAdapter = gcnew SqlDataAdapter(query, connection);

			DataSet^ dataSet = gcnew DataSet();

			dataAdapter->Fill(dataSet, "ClientAdresse");

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