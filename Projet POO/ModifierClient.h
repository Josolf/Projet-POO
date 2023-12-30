#pragma once
#include <Windows.h>
#include <sqlext.h>
#include <sqltypes.h>
#include <sql.h>
namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	public ref class ModifierClient : public System::Windows::Forms::Form
	{
	public:
		ModifierClient(void)
		{
			InitializeComponent();

		}

	protected:

		~ModifierClient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::NumericUpDown^ UpDownNumAdr;
	private: System::Windows::Forms::TextBox^ textBoxCodePostal;
	private: System::Windows::Forms::TextBox^ textBoxNomRue;
	private: System::Windows::Forms::TextBox^ textBoxNomVille;

	private: System::Windows::Forms::TextBox^ textBoxPrenom;
	private: System::Windows::Forms::TextBox^ textBoxNom;

	private: System::Windows::Forms::Button^ buttonChargerBDD;
	private: System::Windows::Forms::Button^ buttonReculer;
	private: System::Windows::Forms::Button^ buttonAvancer;

	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::TextBox^ textBoxDatedeNaissance;
	private: System::Windows::Forms::NumericUpDown^ UpDownAdr2;
	private: System::Windows::Forms::TextBox^ textBoxCodePostal2;

	private: System::Windows::Forms::TextBox^ textBoxNomRue2;

	private: System::Windows::Forms::TextBox^ textBoxNomVille2;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBoxCurrentID;

	protected:

	private:

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ModifierClient::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->UpDownNumAdr = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBoxCodePostal = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNomRue = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNomVille = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNom = (gcnew System::Windows::Forms::TextBox());
			this->buttonChargerBDD = (gcnew System::Windows::Forms::Button());
			this->buttonReculer = (gcnew System::Windows::Forms::Button());
			this->buttonAvancer = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBoxDatedeNaissance = (gcnew System::Windows::Forms::TextBox());
			this->UpDownAdr2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBoxCodePostal2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNomRue2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNomVille2 = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxCurrentID = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpDownNumAdr))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpDownAdr2))->BeginInit();
			this->SuspendLayout();

			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(26, 34);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->Size = System::Drawing::Size(1561, 288);
			this->dataGridView1->TabIndex = 0;

			this->UpDownNumAdr->BackColor = System::Drawing::Color::Gainsboro;
			this->UpDownNumAdr->Location = System::Drawing::Point(224, 618);
			this->UpDownNumAdr->Name = L"UpDownNumAdr";
			this->UpDownNumAdr->Size = System::Drawing::Size(79, 26);
			this->UpDownNumAdr->TabIndex = 81;
			this->UpDownNumAdr->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->UpDownNumAdr->ValueChanged += gcnew System::EventHandler(this, &ModifierClient::UpDownNumAdr_ValueChanged);

			this->textBoxCodePostal->BackColor = System::Drawing::Color::Gainsboro;
			this->textBoxCodePostal->Location = System::Drawing::Point(171, 720);
			this->textBoxCodePostal->Margin = System::Windows::Forms::Padding(2);
			this->textBoxCodePostal->Name = L"textBoxCodePostal";
			this->textBoxCodePostal->Size = System::Drawing::Size(122, 26);
			this->textBoxCodePostal->TabIndex = 80;
			this->textBoxCodePostal->TextChanged += gcnew System::EventHandler(this, &ModifierClient::textBoxCodePostal_TextChanged);

			this->textBoxNomRue->BackColor = System::Drawing::Color::Gainsboro;
			this->textBoxNomRue->Location = System::Drawing::Point(186, 668);
			this->textBoxNomRue->Margin = System::Windows::Forms::Padding(2);
			this->textBoxNomRue->Name = L"textBoxNomRue";
			this->textBoxNomRue->Size = System::Drawing::Size(422, 26);
			this->textBoxNomRue->TabIndex = 79;
			this->textBoxNomRue->TextChanged += gcnew System::EventHandler(this, &ModifierClient::textBoxNomRue_TextChanged);

			this->textBoxNomVille->BackColor = System::Drawing::Color::Gainsboro;
			this->textBoxNomVille->Location = System::Drawing::Point(367, 620);
			this->textBoxNomVille->Margin = System::Windows::Forms::Padding(2);
			this->textBoxNomVille->Name = L"textBoxNomVille";
			this->textBoxNomVille->Size = System::Drawing::Size(241, 26);
			this->textBoxNomVille->TabIndex = 78;
			this->textBoxNomVille->TextChanged += gcnew System::EventHandler(this, &ModifierClient::textBoxNomVille_TextChanged_1);

			this->textBoxPrenom->BackColor = System::Drawing::Color::Gainsboro;
			this->textBoxPrenom->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBoxPrenom->Location = System::Drawing::Point(140, 480);
			this->textBoxPrenom->Margin = System::Windows::Forms::Padding(2);
			this->textBoxPrenom->Name = L"textBoxPrenom";
			this->textBoxPrenom->Size = System::Drawing::Size(468, 26);
			this->textBoxPrenom->TabIndex = 77;
			this->textBoxPrenom->TextChanged += gcnew System::EventHandler(this, &ModifierClient::textBoxPrenom_TextChanged);

			this->textBoxNom->BackColor = System::Drawing::Color::Gainsboro;
			this->textBoxNom->Location = System::Drawing::Point(127, 436);
			this->textBoxNom->Margin = System::Windows::Forms::Padding(2);
			this->textBoxNom->Name = L"textBoxNom";
			this->textBoxNom->Size = System::Drawing::Size(481, 26);
			this->textBoxNom->TabIndex = 76;
			this->textBoxNom->TextChanged += gcnew System::EventHandler(this, &ModifierClient::textBoxNom_TextChanged);

			this->buttonChargerBDD->BackColor = System::Drawing::Color::Gainsboro;
			this->buttonChargerBDD->Location = System::Drawing::Point(1398, 344);
			this->buttonChargerBDD->Name = L"buttonChargerBDD";
			this->buttonChargerBDD->Size = System::Drawing::Size(147, 45);
			this->buttonChargerBDD->TabIndex = 83;
			this->buttonChargerBDD->Text = L"Actualiser";
			this->buttonChargerBDD->UseVisualStyleBackColor = false;
			this->buttonChargerBDD->Click += gcnew System::EventHandler(this, &ModifierClient::buttonChargerBDD_Click);

			this->buttonReculer->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16, System::Drawing::FontStyle::Bold));
			this->buttonReculer->Location = System::Drawing::Point(184, 790);
			this->buttonReculer->Name = L"buttonReculer";
			this->buttonReculer->Size = System::Drawing::Size(132, 75);
			this->buttonReculer->TabIndex = 84;
			this->buttonReculer->Text = L"<";
			this->buttonReculer->UseVisualStyleBackColor = true;
			this->buttonReculer->Click += gcnew System::EventHandler(this, &ModifierClient::buttonReculer_Click);

			this->buttonAvancer->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 16, System::Drawing::FontStyle::Bold));
			this->buttonAvancer->Location = System::Drawing::Point(333, 790);
			this->buttonAvancer->Name = L"buttonAvancer";
			this->buttonAvancer->Size = System::Drawing::Size(132, 75);
			this->buttonAvancer->TabIndex = 85;
			this->buttonAvancer->Text = L">";
			this->buttonAvancer->UseVisualStyleBackColor = true;
			this->buttonAvancer->Click += gcnew System::EventHandler(this, &ModifierClient::button2_Click);

			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(180, 378);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 20);
			this->label9->TabIndex = 87;
			this->label9->Click += gcnew System::EventHandler(this, &ModifierClient::label9_Click);

			this->textBoxDatedeNaissance->BackColor = System::Drawing::Color::Gainsboro;
			this->textBoxDatedeNaissance->Location = System::Drawing::Point(224, 525);
			this->textBoxDatedeNaissance->Margin = System::Windows::Forms::Padding(2);
			this->textBoxDatedeNaissance->Name = L"textBoxDatedeNaissance";
			this->textBoxDatedeNaissance->Size = System::Drawing::Size(241, 26);
			this->textBoxDatedeNaissance->TabIndex = 89;
			this->textBoxDatedeNaissance->TextChanged += gcnew System::EventHandler(this, &ModifierClient::textBoxDatedeNaissance_TextChanged);

			this->UpDownAdr2->BackColor = System::Drawing::Color::Gainsboro;
			this->UpDownAdr2->Location = System::Drawing::Point(919, 620);
			this->UpDownAdr2->Name = L"UpDownAdr2";
			this->UpDownAdr2->Size = System::Drawing::Size(79, 26);
			this->UpDownAdr2->TabIndex = 98;
			this->UpDownAdr2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->UpDownAdr2->ValueChanged += gcnew System::EventHandler(this, &ModifierClient::numericUpDown1_ValueChanged);

			this->textBoxCodePostal2->BackColor = System::Drawing::Color::Gainsboro;
			this->textBoxCodePostal2->Location = System::Drawing::Point(866, 722);
			this->textBoxCodePostal2->Margin = System::Windows::Forms::Padding(2);
			this->textBoxCodePostal2->Name = L"textBoxCodePostal2";
			this->textBoxCodePostal2->Size = System::Drawing::Size(122, 26);
			this->textBoxCodePostal2->TabIndex = 97;
			this->textBoxCodePostal2->TextChanged += gcnew System::EventHandler(this, &ModifierClient::textBox1_TextChanged);

			this->textBoxNomRue2->BackColor = System::Drawing::Color::Gainsboro;
			this->textBoxNomRue2->Location = System::Drawing::Point(881, 670);
			this->textBoxNomRue2->Margin = System::Windows::Forms::Padding(2);
			this->textBoxNomRue2->Name = L"textBoxNomRue2";
			this->textBoxNomRue2->Size = System::Drawing::Size(422, 26);
			this->textBoxNomRue2->TabIndex = 96;
			this->textBoxNomRue2->TextChanged += gcnew System::EventHandler(this, &ModifierClient::textBox2_TextChanged);

			this->textBoxNomVille2->BackColor = System::Drawing::Color::Gainsboro;
			this->textBoxNomVille2->Location = System::Drawing::Point(1062, 622);
			this->textBoxNomVille2->Margin = System::Windows::Forms::Padding(2);
			this->textBoxNomVille2->Name = L"textBoxNomVille2";
			this->textBoxNomVille2->Size = System::Drawing::Size(241, 26);
			this->textBoxNomVille2->TabIndex = 95;
			this->textBoxNomVille2->TextChanged += gcnew System::EventHandler(this, &ModifierClient::textBox3_TextChanged);

			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::Transparent;
			this->label26->Cursor = System::Windows::Forms::Cursors::No;
			this->label26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label26->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label26->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label26->Location = System::Drawing::Point(71, 436);
			this->label26->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(48, 21);
			this->label26->TabIndex = 137;
			this->label26->Text = L"Nom";
			this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::Transparent;
			this->label25->Cursor = System::Windows::Forms::Cursors::No;
			this->label25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label25->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label25->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label25->Location = System::Drawing::Point(66, 482);
			this->label25->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(70, 21);
			this->label25->TabIndex = 138;
			this->label25->Text = L"Prénom";
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Transparent;
			this->label23->Cursor = System::Windows::Forms::Cursors::No;
			this->label23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label23->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label23->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label23->Location = System::Drawing::Point(64, 530);
			this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(147, 21);
			this->label23->TabIndex = 139;
			this->label23->Text = L"Date de naissance";
			this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::Transparent;
			this->label22->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label22->Location = System::Drawing::Point(37, 576);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(209, 36);
			this->label22->TabIndex = 140;
			this->label22->Text = L"Adresse de Livraison";
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Transparent;
			this->label21->Cursor = System::Windows::Forms::Cursors::No;
			this->label21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label21->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label21->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label21->Location = System::Drawing::Point(62, 621);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(149, 21);
			this->label21->TabIndex = 141;
			this->label21->Text = L"Numéro d\'adresse";
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Transparent;
			this->label20->Cursor = System::Windows::Forms::Cursors::No;
			this->label20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label20->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label20->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label20->Location = System::Drawing::Point(64, 668);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(118, 21);
			this->label20->TabIndex = 142;
			this->label20->Text = L"Nom de la rue";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Cursor = System::Windows::Forms::Cursors::No;
			this->label19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label19->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label19->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label19->Location = System::Drawing::Point(62, 720);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(100, 21);
			this->label19->TabIndex = 143;
			this->label19->Text = L"Code postal";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label18->Location = System::Drawing::Point(69, 370);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(127, 36);
			this->label18->TabIndex = 144;
			this->label18->Text = L"ID du Client";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Cursor = System::Windows::Forms::Cursors::No;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(318, 620);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 21);
			this->label1->TabIndex = 145;
			this->label1->Text = L"Ville";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Cursor = System::Windows::Forms::Cursors::No;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(1011, 623);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 21);
			this->label2->TabIndex = 149;
			this->label2->Text = L"Ville";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Cursor = System::Windows::Forms::Cursors::No;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(755, 723);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 21);
			this->label3->TabIndex = 148;
			this->label3->Text = L"Code postal";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Cursor = System::Windows::Forms::Cursors::No;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(757, 671);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(118, 21);
			this->label4->TabIndex = 147;
			this->label4->Text = L"Nom de la rue";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Cursor = System::Windows::Forms::Cursors::No;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Location = System::Drawing::Point(755, 624);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(149, 21);
			this->label5->TabIndex = 146;
			this->label5->Text = L"Numéro d\'adresse";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Location = System::Drawing::Point(753, 576);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(232, 36);
			this->label6->TabIndex = 150;
			this->label6->Text = L"Adresse de Facturation";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->textBoxCurrentID->BackColor = System::Drawing::Color::Gainsboro;
			this->textBoxCurrentID->Location = System::Drawing::Point(200, 372);
			this->textBoxCurrentID->Margin = System::Windows::Forms::Padding(2);
			this->textBoxCurrentID->Name = L"textBoxCurrentID";
			this->textBoxCurrentID->Size = System::Drawing::Size(58, 26);
			this->textBoxCurrentID->TabIndex = 151;

			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1598, 900);
			this->Controls->Add(this->textBoxCurrentID);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->UpDownAdr2);
			this->Controls->Add(this->textBoxCodePostal2);
			this->Controls->Add(this->textBoxNomRue2);
			this->Controls->Add(this->textBoxNomVille2);
			this->Controls->Add(this->textBoxDatedeNaissance);
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
			this->Controls->Add(this->dataGridView1);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"ModifierClient";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->Text = L"ModifierClient";
			this->Load += gcnew System::EventHandler(this, &ModifierClient::ModifierClient_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpDownNumAdr))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpDownAdr2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void ModifierClient_Load(System::Object^ sender, System::EventArgs^ e) {
		textBoxCurrentID->Text = "1";
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

		   int adresseLivraisonId;
		   int adresseFacturationId;
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

	private: void MettreAJourClient(int clientId, String^ champ, String^ valeur) {
		String^ connectionString = "Data Source=MARTIN_GOA;Initial Catalog=Projet;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try {
			connection->Open();
			String^ query = "UPDATE dbo.Client SET " + champ + " = @Valeur WHERE ID_CLIENT = @ClientID";
			SqlCommand^ command = gcnew SqlCommand(query, connection);
			command->Parameters->AddWithValue("@Valeur", valeur);
			command->Parameters->AddWithValue("@ClientID", clientId);
			command->ExecuteNonQuery();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Erreur lors de la mise à jour : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			connection->Close();
		}
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

		}
		finally {
			connection->Close();
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		int currentId;
		if (Int32::TryParse(textBoxCurrentID->Text, currentId)) {
			int nextId = currentId + 1;

			textBoxCurrentID->Text = nextId.ToString();

			ChargerInformationsClient(nextId);
			ChargerAdresseLivraison(nextId);
			ChargerAdresseFacturation(nextId);
		}
		else {

			MessageBox::Show("L'ID du client actuel n'est pas valide.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonReculer_Click(System::Object^ sender, System::EventArgs^ e) {

		int currentId = Convert::ToInt32(textBoxCurrentID->Text);
		int previousId = currentId - 1;

		textBoxCurrentID->Text = previousId.ToString();

		ChargerInformationsClient(previousId);
		ChargerAdresseLivraison(previousId);
		ChargerAdresseFacturation(previousId);
	}

	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBoxNom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		int clientId = Convert::ToInt32(textBoxCurrentID->Text);
		String^ nouveauNom = textBoxNom->Text;
		MettreAJourClient(clientId, "NOM", nouveauNom);
	}
	private: System::Void textBoxPrenom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		int clientId = Convert::ToInt32(textBoxCurrentID->Text);
		String^ nouveauPrenom = textBoxPrenom->Text;
		MettreAJourClient(clientId, "PRENOM", nouveauPrenom);
	}

	private: System::Void textBoxDatedeNaissance_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		int clientId = Convert::ToInt32(textBoxCurrentID->Text);
		String^ nouvelleDateNaissance = textBoxDatedeNaissance->Text;

		MettreAJourClient(clientId, "DATE_NAISSANCE", nouvelleDateNaissance);
	}

	private: System::Void textBoxNomVille_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
		String^ nouveauNomVille = textBoxNomVille->Text;
		MettreAJourAdresse(adresseLivraisonId, "NOM_VILLE", nouveauNomVille);
	}
	private: System::Void UpDownNumAdr_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		int nouveauNumero = static_cast<int>(UpDownNumAdr->Value);
		MettreAJourAdresse(adresseLivraisonId, "NUMERO", nouveauNumero.ToString());
	}
	private: System::Void textBoxNomRue_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ nouveauNomRue = textBoxNomRue->Text;
		MettreAJourAdresse(adresseLivraisonId, "NOM_RUE", nouveauNomRue);
	}
	private: System::Void textBoxCodePostal_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ nouveauCodePostal = textBoxCodePostal->Text;
		MettreAJourAdresse(adresseLivraisonId, "CODE_POSTAL", nouveauCodePostal);
	}

	private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ nouveauCodePostal = textBoxCodePostal2->Text;
		MettreAJourAdresse(adresseFacturationId, "CODE_POSTAL", nouveauCodePostal);
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ nouveauNomRue = textBoxNomRue2->Text;
		MettreAJourAdresse(adresseFacturationId, "NOM_RUE", nouveauNomRue);
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ nouveauNomVille = textBoxNomVille2->Text;
		MettreAJourAdresse(adresseFacturationId, "NOM_VILLE", nouveauNomVille);

	}
	private: System::Void label10_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		int nouveauNumero = static_cast<int>(UpDownAdr2->Value);
		MettreAJourAdresse(adresseFacturationId, "NUMERO", nouveauNumero.ToString());
	}
	};
}