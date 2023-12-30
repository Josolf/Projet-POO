#pragma once
#include "Adresse.h"
#include "Client.h"
#include "CreerClient.h"
#include "ModifierClient.h"
#include "SupprimerClient.h"
#include "AfficherClient.h"
#include "DebugAdresse.h"

namespace ProjetPOO {

	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Xml;
	using namespace System;
	namespace P6new {

		using namespace System;
		using namespace System::ComponentModel;
		using namespace System::Collections;
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		public ref class CreerClient : public System::Windows::Forms::Form
		{
		public:
			CreerClient(void)
			{
				InitializeComponent();

			}

		protected:

			~CreerClient()
			{
				if (components)
				{
					delete components;
				}
			}
		private: System::Windows::Forms::Label^ label1;
		protected:
		private: System::Windows::Forms::Label^ label2;
		private: System::Windows::Forms::Label^ label3;
		private: System::Windows::Forms::Label^ label4;
		private: System::Windows::Forms::Label^ label5;
		private: System::Windows::Forms::Label^ label6;
		private: System::Windows::Forms::Label^ label7;
		private: System::Windows::Forms::Label^ label8;

		private: System::Windows::Forms::Label^ label24;

		private: System::Windows::Forms::Button^ button1;
		private: System::Windows::Forms::ComboBox^ comboBoxMois;

		private: System::Windows::Forms::Label^ label27;
		private: System::Windows::Forms::ComboBox^ comboBoxJour;

		private: System::Windows::Forms::Label^ label29;
		private: System::Windows::Forms::ComboBox^ comboBoxAnnee;

		private: System::Windows::Forms::TextBox^ textBoxNom;
		private: System::Windows::Forms::TextBox^ textBoxPrenom;

		private: System::Windows::Forms::TextBox^ textBoxVille;
		private: System::Windows::Forms::TextBox^ textBoxRue;
		private: System::Windows::Forms::TextBox^ textBoxCodePostal;

		private: System::Windows::Forms::NumericUpDown^ UpDownNumAdr;
		private: System::Windows::Forms::Label^ label9;
		private: System::Windows::Forms::NumericUpDown^ UpDownAdr2;
		private: System::Windows::Forms::TextBox^ textBoxVille2;

		private: System::Windows::Forms::Label^ label10;
		private: System::Windows::Forms::Label^ label11;
		private: System::Windows::Forms::TextBox^ textBoxRue2;

		private: System::Windows::Forms::Label^ label12;
		private: System::Windows::Forms::TextBox^ textBoxCP2;
		private: System::Windows::Forms::Label^ label13;

		private:

			System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

			void InitializeComponent(void)
			{
				this->label1 = (gcnew System::Windows::Forms::Label());
				this->label2 = (gcnew System::Windows::Forms::Label());
				this->label3 = (gcnew System::Windows::Forms::Label());
				this->label4 = (gcnew System::Windows::Forms::Label());
				this->label5 = (gcnew System::Windows::Forms::Label());
				this->label6 = (gcnew System::Windows::Forms::Label());
				this->label7 = (gcnew System::Windows::Forms::Label());
				this->label8 = (gcnew System::Windows::Forms::Label());
				this->label24 = (gcnew System::Windows::Forms::Label());
				this->button1 = (gcnew System::Windows::Forms::Button());
				this->comboBoxMois = (gcnew System::Windows::Forms::ComboBox());
				this->label27 = (gcnew System::Windows::Forms::Label());
				this->comboBoxJour = (gcnew System::Windows::Forms::ComboBox());
				this->label29 = (gcnew System::Windows::Forms::Label());
				this->comboBoxAnnee = (gcnew System::Windows::Forms::ComboBox());
				this->textBoxNom = (gcnew System::Windows::Forms::TextBox());
				this->textBoxPrenom = (gcnew System::Windows::Forms::TextBox());
				this->textBoxVille = (gcnew System::Windows::Forms::TextBox());
				this->textBoxRue = (gcnew System::Windows::Forms::TextBox());
				this->textBoxCodePostal = (gcnew System::Windows::Forms::TextBox());
				this->UpDownNumAdr = (gcnew System::Windows::Forms::NumericUpDown());
				this->label9 = (gcnew System::Windows::Forms::Label());
				this->UpDownAdr2 = (gcnew System::Windows::Forms::NumericUpDown());
				this->textBoxVille2 = (gcnew System::Windows::Forms::TextBox());
				this->label10 = (gcnew System::Windows::Forms::Label());
				this->label11 = (gcnew System::Windows::Forms::Label());
				this->textBoxRue2 = (gcnew System::Windows::Forms::TextBox());
				this->label12 = (gcnew System::Windows::Forms::Label());
				this->textBoxCP2 = (gcnew System::Windows::Forms::TextBox());
				this->label13 = (gcnew System::Windows::Forms::Label());
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpDownNumAdr))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpDownAdr2))->BeginInit();
				this->SuspendLayout();

				this->label1->AutoSize = true;
				this->label1->BackColor = System::Drawing::Color::Transparent;
				this->label1->Cursor = System::Windows::Forms::Cursors::No;
				this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
				this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
				this->label1->Location = System::Drawing::Point(60, 68);
				this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label1->Name = L"label1";
				this->label1->Size = System::Drawing::Size(48, 21);
				this->label1->TabIndex = 0;
				this->label1->Text = L"Nom";
				this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				this->label1->Click += gcnew System::EventHandler(this, &CreerClient::label1_Click);

				this->label2->AutoSize = true;
				this->label2->BackColor = System::Drawing::Color::Transparent;
				this->label2->Cursor = System::Windows::Forms::Cursors::No;
				this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
				this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
				this->label2->Location = System::Drawing::Point(34, 112);
				this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label2->Name = L"label2";
				this->label2->Size = System::Drawing::Size(70, 21);
				this->label2->TabIndex = 1;
				this->label2->Text = L"Prénom";
				this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				this->label2->Click += gcnew System::EventHandler(this, &CreerClient::label2_Click);

				this->label3->AutoSize = true;
				this->label3->BackColor = System::Drawing::Color::Transparent;
				this->label3->Cursor = System::Windows::Forms::Cursors::No;
				this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
				this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
				this->label3->Location = System::Drawing::Point(32, 156);
				this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label3->Name = L"label3";
				this->label3->Size = System::Drawing::Size(147, 21);
				this->label3->TabIndex = 2;
				this->label3->Text = L"Date de naissance";
				this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				this->label3->Click += gcnew System::EventHandler(this, &CreerClient::label3_Click);

				this->label4->AutoSize = true;
				this->label4->BackColor = System::Drawing::Color::Transparent;
				this->label4->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
				this->label4->Location = System::Drawing::Point(85, 239);
				this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label4->Name = L"label4";
				this->label4->Size = System::Drawing::Size(216, 36);
				this->label4->TabIndex = 3;
				this->label4->Text = L"Adresse de livraison :";
				this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

				this->label5->AutoSize = true;
				this->label5->BackColor = System::Drawing::Color::Transparent;
				this->label5->Cursor = System::Windows::Forms::Cursors::No;
				this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->label5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
				this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
				this->label5->Location = System::Drawing::Point(32, 294);
				this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label5->Name = L"label5";
				this->label5->Size = System::Drawing::Size(149, 21);
				this->label5->TabIndex = 4;
				this->label5->Text = L"Numéro d\'adresse";
				this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

				this->label6->AutoSize = true;
				this->label6->BackColor = System::Drawing::Color::Transparent;
				this->label6->Cursor = System::Windows::Forms::Cursors::No;
				this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->label6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
				this->label6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
				this->label6->Location = System::Drawing::Point(32, 347);
				this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label6->Name = L"label6";
				this->label6->Size = System::Drawing::Size(118, 21);
				this->label6->TabIndex = 5;
				this->label6->Text = L"Nom de la rue";
				this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

				this->label7->AutoSize = true;
				this->label7->BackColor = System::Drawing::Color::Transparent;
				this->label7->Cursor = System::Windows::Forms::Cursors::No;
				this->label7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->label7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
				this->label7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
				this->label7->Location = System::Drawing::Point(32, 402);
				this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label7->Name = L"label7";
				this->label7->Size = System::Drawing::Size(100, 21);
				this->label7->TabIndex = 6;
				this->label7->Text = L"Code postal";
				this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

				this->label8->AutoSize = true;
				this->label8->BackColor = System::Drawing::Color::Transparent;
				this->label8->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
				this->label8->Location = System::Drawing::Point(85, 475);
				this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label8->Name = L"label8";
				this->label8->Size = System::Drawing::Size(346, 36);
				this->label8->TabIndex = 7;
				this->label8->Text = L"Adresse de facturation différente \?";
				this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				this->label8->Click += gcnew System::EventHandler(this, &CreerClient::label8_Click);

				this->label24->AutoSize = true;
				this->label24->BackColor = System::Drawing::Color::Transparent;
				this->label24->Cursor = System::Windows::Forms::Cursors::No;
				this->label24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->label24->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label24->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
				this->label24->Location = System::Drawing::Point(299, 401);
				this->label24->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label24->Name = L"label24";
				this->label24->Size = System::Drawing::Size(45, 21);
				this->label24->TabIndex = 23;
				this->label24->Text = L"Ville";
				this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

				this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
				this->button1->Location = System::Drawing::Point(550, 676);
				this->button1->Margin = System::Windows::Forms::Padding(2);
				this->button1->Name = L"button1";
				this->button1->Size = System::Drawing::Size(124, 38);
				this->button1->TabIndex = 38;
				this->button1->Text = L"Valider";
				this->button1->UseVisualStyleBackColor = true;
				this->button1->Click += gcnew System::EventHandler(this, &CreerClient::button1_Click);

				this->comboBoxMois->BackColor = System::Drawing::Color::Gainsboro;
				this->comboBoxMois->FormattingEnabled = true;
				this->comboBoxMois->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
					L"01", L"02", L"03", L"04", L"05", L"06", L"07",
						L"08", L"09", L"10", L"11", L"12"
				});
				this->comboBoxMois->Location = System::Drawing::Point(303, 154);
				this->comboBoxMois->Margin = System::Windows::Forms::Padding(2);
				this->comboBoxMois->Name = L"comboBoxMois";
				this->comboBoxMois->Size = System::Drawing::Size(69, 28);
				this->comboBoxMois->TabIndex = 39;

				this->label27->AutoSize = true;
				this->label27->Location = System::Drawing::Point(285, 157);
				this->label27->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label27->Name = L"label27";
				this->label27->Size = System::Drawing::Size(13, 20);
				this->label27->TabIndex = 40;
				this->label27->Text = L"/";

				this->comboBoxJour->BackColor = System::Drawing::Color::Gainsboro;
				this->comboBoxJour->FormattingEnabled = true;
				this->comboBoxJour->Items->AddRange(gcnew cli::array< System::Object^  >(31) {
					L"01", L"02", L"03", L"04", L"05", L"06", L"07",
						L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25",
						L"26", L"27", L"28", L"29", L"30", L"31"
				});
				this->comboBoxJour->Location = System::Drawing::Point(211, 154);
				this->comboBoxJour->Margin = System::Windows::Forms::Padding(2);
				this->comboBoxJour->Name = L"comboBoxJour";
				this->comboBoxJour->Size = System::Drawing::Size(69, 28);
				this->comboBoxJour->TabIndex = 41;
				this->comboBoxJour->SelectedIndexChanged += gcnew System::EventHandler(this, &CreerClient::comboBoxJour_SelectedIndexChanged);

				this->label29->AutoSize = true;
				this->label29->Location = System::Drawing::Point(376, 157);
				this->label29->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label29->Name = L"label29";
				this->label29->Size = System::Drawing::Size(13, 20);
				this->label29->TabIndex = 42;
				this->label29->Text = L"/";

				this->comboBoxAnnee->BackColor = System::Drawing::Color::Gainsboro;
				this->comboBoxAnnee->FormattingEnabled = true;
				this->comboBoxAnnee->Items->AddRange(gcnew cli::array< System::Object^  >(123) {
					L"2023", L"2022", L"2021", L"2020", L"2019",
						L"2018", L"2017", L"2016", L"2015", L"2014", L"2013", L"2012", L"2011", L"2010", L"2009", L"2008", L"2007", L"2006", L"2005",
						L"2004", L"2003", L"2002", L"2001", L"2000", L"1999", L"1998", L"1997", L"1996", L"1995", L"1994", L"1993", L"1992", L"1991",
						L"1990", L"1989", L"1988", L"1987", L"1986", L"1985", L"1984", L"1983", L"1982", L"1981", L"1980", L"1979", L"1978", L"1977",
						L"1976", L"1975", L"1974", L"1973", L"1972", L"1971", L"1970", L"1969", L"1968", L"1967", L"1966", L"1965", L"1964", L"1963",
						L"1962", L"1961", L"1960", L"1959", L"1958", L"1957", L"1956", L"1955", L"1954", L"1953", L"1952", L"1951", L"1950", L"1949",
						L"1948", L"1947", L"1946", L"1945", L"1944", L"1943", L"1942", L"1941", L"1940", L"1939", L"1938", L"1937", L"1936", L"1935",
						L"1934", L"1933", L"1932", L"1931", L"1930", L"1929", L"1928", L"1927", L"1926", L"1925", L"1924", L"1923", L"1922", L"1921",
						L"1920", L"1919", L"1918", L"1917", L"1916", L"1915", L"1914", L"1913", L"1912", L"1911", L"1910", L"1909", L"1908", L"1907",
						L"1906", L"1905", L"1904", L"1903", L"1902", L"1901"
				});
				this->comboBoxAnnee->Location = System::Drawing::Point(394, 154);
				this->comboBoxAnnee->Margin = System::Windows::Forms::Padding(2);
				this->comboBoxAnnee->Name = L"comboBoxAnnee";
				this->comboBoxAnnee->Size = System::Drawing::Size(96, 28);
				this->comboBoxAnnee->TabIndex = 43;

				this->textBoxNom->BackColor = System::Drawing::Color::Gainsboro;
				this->textBoxNom->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				this->textBoxNom->Location = System::Drawing::Point(116, 65);
				this->textBoxNom->Margin = System::Windows::Forms::Padding(2);
				this->textBoxNom->Name = L"textBoxNom";
				this->textBoxNom->Size = System::Drawing::Size(459, 26);
				this->textBoxNom->TabIndex = 44;
				this->textBoxNom->TextChanged += gcnew System::EventHandler(this, &CreerClient::textBoxNom_TextChanged);

				this->textBoxPrenom->BackColor = System::Drawing::Color::Gainsboro;
				this->textBoxPrenom->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				this->textBoxPrenom->ForeColor = System::Drawing::SystemColors::Desktop;
				this->textBoxPrenom->Location = System::Drawing::Point(116, 109);
				this->textBoxPrenom->Margin = System::Windows::Forms::Padding(2);
				this->textBoxPrenom->Name = L"textBoxPrenom";
				this->textBoxPrenom->Size = System::Drawing::Size(459, 26);
				this->textBoxPrenom->TabIndex = 45;
				this->textBoxPrenom->TextChanged += gcnew System::EventHandler(this, &CreerClient::textBoxPrenom_TextChanged);

				this->textBoxVille->BackColor = System::Drawing::Color::Gainsboro;
				this->textBoxVille->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				this->textBoxVille->Location = System::Drawing::Point(356, 401);
				this->textBoxVille->Margin = System::Windows::Forms::Padding(2);
				this->textBoxVille->Name = L"textBoxVille";
				this->textBoxVille->Size = System::Drawing::Size(241, 26);
				this->textBoxVille->TabIndex = 48;
				this->textBoxVille->TextChanged += gcnew System::EventHandler(this, &CreerClient::textBoxVille_TextChanged);

				this->textBoxRue->BackColor = System::Drawing::Color::Gainsboro;
				this->textBoxRue->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				this->textBoxRue->Location = System::Drawing::Point(166, 347);
				this->textBoxRue->Margin = System::Windows::Forms::Padding(2);
				this->textBoxRue->Name = L"textBoxRue";
				this->textBoxRue->Size = System::Drawing::Size(422, 26);
				this->textBoxRue->TabIndex = 49;

				this->textBoxCodePostal->BackColor = System::Drawing::Color::Gainsboro;
				this->textBoxCodePostal->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				this->textBoxCodePostal->Location = System::Drawing::Point(149, 402);
				this->textBoxCodePostal->Margin = System::Windows::Forms::Padding(2);
				this->textBoxCodePostal->Name = L"textBoxCodePostal";
				this->textBoxCodePostal->Size = System::Drawing::Size(122, 26);
				this->textBoxCodePostal->TabIndex = 50;

				this->UpDownNumAdr->BackColor = System::Drawing::Color::Gainsboro;
				this->UpDownNumAdr->Location = System::Drawing::Point(192, 294);
				this->UpDownNumAdr->Name = L"UpDownNumAdr";
				this->UpDownNumAdr->Size = System::Drawing::Size(79, 26);
				this->UpDownNumAdr->TabIndex = 64;
				this->UpDownNumAdr->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
				this->UpDownNumAdr->ValueChanged += gcnew System::EventHandler(this, &CreerClient::numericUpDown1_ValueChanged);

				this->label9->AutoSize = true;
				this->label9->BackColor = System::Drawing::Color::Transparent;
				this->label9->Cursor = System::Windows::Forms::Cursors::No;
				this->label9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->label9->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
				this->label9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
				this->label9->Location = System::Drawing::Point(33, 534);
				this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label9->Name = L"label9";
				this->label9->Size = System::Drawing::Size(149, 21);
				this->label9->TabIndex = 65;
				this->label9->Text = L"Numéro d\'adresse";
				this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

				this->UpDownAdr2->BackColor = System::Drawing::Color::Gainsboro;
				this->UpDownAdr2->Location = System::Drawing::Point(189, 534);
				this->UpDownAdr2->Name = L"UpDownAdr2";
				this->UpDownAdr2->Size = System::Drawing::Size(79, 26);
				this->UpDownAdr2->TabIndex = 66;
				this->UpDownAdr2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;

				this->textBoxVille2->BackColor = System::Drawing::Color::Gainsboro;
				this->textBoxVille2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				this->textBoxVille2->Location = System::Drawing::Point(91, 681);
				this->textBoxVille2->Margin = System::Windows::Forms::Padding(2);
				this->textBoxVille2->Name = L"textBoxVille2";
				this->textBoxVille2->Size = System::Drawing::Size(241, 26);
				this->textBoxVille2->TabIndex = 67;

				this->label10->AutoSize = true;
				this->label10->BackColor = System::Drawing::Color::Transparent;
				this->label10->Cursor = System::Windows::Forms::Cursors::No;
				this->label10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->label10->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
				this->label10->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
				this->label10->Location = System::Drawing::Point(32, 682);
				this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label10->Name = L"label10";
				this->label10->Size = System::Drawing::Size(45, 21);
				this->label10->TabIndex = 68;
				this->label10->Text = L"Ville";
				this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

				this->label11->AutoSize = true;
				this->label11->BackColor = System::Drawing::Color::Transparent;
				this->label11->Cursor = System::Windows::Forms::Cursors::No;
				this->label11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->label11->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
				this->label11->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
				this->label11->Location = System::Drawing::Point(33, 589);
				this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label11->Name = L"label11";
				this->label11->Size = System::Drawing::Size(118, 21);
				this->label11->TabIndex = 69;
				this->label11->Text = L"Nom de la rue";
				this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

				this->textBoxRue2->BackColor = System::Drawing::Color::Gainsboro;
				this->textBoxRue2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				this->textBoxRue2->Location = System::Drawing::Point(166, 589);
				this->textBoxRue2->Margin = System::Windows::Forms::Padding(2);
				this->textBoxRue2->Name = L"textBoxRue2";
				this->textBoxRue2->Size = System::Drawing::Size(422, 26);
				this->textBoxRue2->TabIndex = 70;

				this->label12->AutoSize = true;
				this->label12->BackColor = System::Drawing::Color::Transparent;
				this->label12->Cursor = System::Windows::Forms::Cursors::No;
				this->label12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->label12->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
				this->label12->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
				this->label12->Location = System::Drawing::Point(32, 633);
				this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label12->Name = L"label12";
				this->label12->Size = System::Drawing::Size(100, 21);
				this->label12->TabIndex = 71;
				this->label12->Text = L"Code postal";
				this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

				this->textBoxCP2->BackColor = System::Drawing::Color::Gainsboro;
				this->textBoxCP2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				this->textBoxCP2->Location = System::Drawing::Point(146, 633);
				this->textBoxCP2->Margin = System::Windows::Forms::Padding(2);
				this->textBoxCP2->Name = L"textBoxCP2";
				this->textBoxCP2->Size = System::Drawing::Size(122, 26);
				this->textBoxCP2->TabIndex = 72;

				this->label13->AutoSize = true;
				this->label13->BackColor = System::Drawing::Color::Transparent;
				this->label13->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label13->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
				this->label13->Location = System::Drawing::Point(85, 18);
				this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label13->Name = L"label13";
				this->label13->Size = System::Drawing::Size(198, 36);
				this->label13->TabIndex = 73;
				this->label13->Text = L"Infos personnelles :";
				this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				this->label13->Click += gcnew System::EventHandler(this, &CreerClient::label13_Click);

				this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->AutoScroll = true;
				this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->ClientSize = System::Drawing::Size(685, 725);
				this->Controls->Add(this->label13);
				this->Controls->Add(this->textBoxCP2);
				this->Controls->Add(this->label12);
				this->Controls->Add(this->textBoxRue2);
				this->Controls->Add(this->label11);
				this->Controls->Add(this->label10);
				this->Controls->Add(this->textBoxVille2);
				this->Controls->Add(this->UpDownAdr2);
				this->Controls->Add(this->label9);
				this->Controls->Add(this->UpDownNumAdr);
				this->Controls->Add(this->textBoxCodePostal);
				this->Controls->Add(this->textBoxRue);
				this->Controls->Add(this->textBoxVille);
				this->Controls->Add(this->textBoxPrenom);
				this->Controls->Add(this->textBoxNom);
				this->Controls->Add(this->comboBoxAnnee);
				this->Controls->Add(this->label29);
				this->Controls->Add(this->comboBoxJour);
				this->Controls->Add(this->label27);
				this->Controls->Add(this->comboBoxMois);
				this->Controls->Add(this->button1);
				this->Controls->Add(this->label24);
				this->Controls->Add(this->label8);
				this->Controls->Add(this->label7);
				this->Controls->Add(this->label6);
				this->Controls->Add(this->label5);
				this->Controls->Add(this->label4);
				this->Controls->Add(this->label3);
				this->Controls->Add(this->label2);
				this->Controls->Add(this->label1);
				this->DoubleBuffered = true;
				this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
				this->Margin = System::Windows::Forms::Padding(2);
				this->MaximizeBox = false;
				this->Name = L"CreerClient";
				this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
				this->Text = L"CreerClient";
				this->Load += gcnew System::EventHandler(this, &CreerClient::CreerClient_Load);
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpDownNumAdr))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpDownAdr2))->EndInit();
				this->ResumeLayout(false);
				this->PerformLayout();

			}
#pragma endregion
		private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void label25_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void CreerClient_Load(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

			String^ nomClient = textBoxNom->Text;
			String^ prenomClient = textBoxPrenom->Text;
			String^ JourClient = comboBoxJour->Text;
			String^ MoisClient = comboBoxMois->Text;
			String^ YearClient = comboBoxAnnee->Text;
			String^ dateNaissance = String::Format("{0}-{1}-{2}", YearClient, MoisClient, JourClient);
			Client^ nouveauClient = gcnew Client();
			nouveauClient->set_Nom(nomClient);
			nouveauClient->set_Prenom(prenomClient);
			nouveauClient->set_Date_de_Naissance(dateNaissance);
			String^ NumeroRue = UpDownNumAdr->Text;
			String^ NomRue = textBoxRue->Text;
			String^ NomVille = textBoxVille->Text;
			String^ CodePostal = textBoxCodePostal->Text;
			int TypeAdresse = 0;
			int TypeAdresse2 = 1;
			int numeroRue;
			if (!Int32::TryParse(NumeroRue, numeroRue)) {

				MessageBox::Show("Le numéro de rue doit être un nombre entier.", "Err conversion", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			Adresse^ nouvelleAdresse = gcnew Adresse(numeroRue, NomRue, NomVille, CodePostal);

			String^ connectionString = "Data Source=MARTIN_GOA;Initial Catalog=Projet;Integrated Security=True";
			SqlConnection^ connection = gcnew SqlConnection(connectionString);

			try {
				connection->Open();

				String^ queryClient = "INSERT INTO CLIENT (NOM, PRENOM, DATE_NAISSANCE) VALUES (@Nom, @Prenom, @Date_de_Naissance)";
				SqlCommand^ commandClient = gcnew SqlCommand(queryClient, connection);

				commandClient->Parameters->Add("@Nom", SqlDbType::VarChar, 50)->Value = nomClient;
				commandClient->Parameters->Add("@Prenom", SqlDbType::VarChar, 50)->Value = prenomClient;
				commandClient->Parameters->Add("@Date_de_Naissance", SqlDbType::Date)->Value = dateNaissance;
				commandClient->ExecuteNonQuery();

				String^ queryGetIDClient = "SELECT IDENT_CURRENT('CLIENT') AS IDClient";
				SqlCommand^ commandGetIDClient = gcnew SqlCommand(queryGetIDClient, connection);
				Object^ resultClient = commandGetIDClient->ExecuteScalar();

				int idClient = Convert::ToInt32(resultClient);
				nouveauClient->set_ID_Client(idClient);

				String^ queryAdresse = "INSERT INTO ADRESSE(NUMERO, NOM_RUE, NOM_VILLE, CODE_POSTAL, TYPE_ADRESSE) VALUES (@NumeroRue, @NomRue, @NomVille, @CodePostal, @TypeAdresse)";
				SqlCommand^ commandAdresse = gcnew SqlCommand(queryAdresse, connection);

				commandAdresse->Parameters->AddWithValue("@NumeroRue", nouvelleAdresse->Numero);
				commandAdresse->Parameters->AddWithValue("@NomRue", nouvelleAdresse->NomRue);
				commandAdresse->Parameters->AddWithValue("@NomVille", nouvelleAdresse->NomVille);
				commandAdresse->Parameters->AddWithValue("@CodePostal", nouvelleAdresse->CodePostal);
				commandAdresse->Parameters->AddWithValue("@TypeAdresse", TypeAdresse);
				commandAdresse->ExecuteNonQuery();

				String^ queryGetIDAdresse = "SELECT IDENT_CURRENT('ADRESSE') AS IDAdresse";
				SqlCommand^ commandGetIDAdresse = gcnew SqlCommand(queryGetIDAdresse, connection);
				Object^ resultAdresse = commandGetIDAdresse->ExecuteScalar();
				int idAdresse = Convert::ToInt32(resultAdresse);

				String^ queryPosseder = "INSERT INTO Possede1 (ID_CLIENT, ID_ADRESSE) VALUES (@IDClient, @IDAdresse)";
				SqlCommand^ commandPosseder = gcnew SqlCommand(queryPosseder, connection);

				commandPosseder->Parameters->Add("@IDClient", SqlDbType::Int)->Value = idClient;
				commandPosseder->Parameters->Add("@IDAdresse", SqlDbType::Int)->Value = idAdresse;
				commandPosseder->ExecuteNonQuery();

				if (textBoxVille2->Text != "" && UpDownAdr2->Text != "0") {
					String^ NumeroRue2 = UpDownAdr2->Text;
					String^ NomRue2 = textBoxRue2->Text;
					String^ NomVille2 = textBoxVille2->Text;
					String^ CodePostal2 = textBoxCP2->Text;
					int numeroRue2;
					if (!Int32::TryParse(NumeroRue2, numeroRue2)) {

						MessageBox::Show("Le numéro de rue doit être un nombre entier.", "Err conversion", MessageBoxButtons::OK, MessageBoxIcon::Error);
						return;
					}
					Adresse^ nouvelleAdresse2 = gcnew Adresse(numeroRue2, NomRue2, NomVille2, CodePostal2);

					SqlCommand^ commandAdresse2 = gcnew SqlCommand(queryAdresse, connection);
					commandAdresse2->Parameters->AddWithValue("@NumeroRue", nouvelleAdresse2->Numero);
					commandAdresse2->Parameters->AddWithValue("@NomRue", nouvelleAdresse2->NomRue);
					commandAdresse2->Parameters->AddWithValue("@NomVille", nouvelleAdresse2->NomVille);
					commandAdresse2->Parameters->AddWithValue("@CodePostal", nouvelleAdresse2->CodePostal);
					commandAdresse2->Parameters->AddWithValue("@TypeAdresse", TypeAdresse2);
					commandAdresse2->ExecuteNonQuery();

					String^ queryGetIDAdresse2 = "SELECT IDENT_CURRENT('ADRESSE') AS IDAdresse";
					SqlCommand^ commandGetIDAdresse2 = gcnew SqlCommand(queryGetIDAdresse2, connection);
					Object^ resultAdresse = commandGetIDAdresse2->ExecuteScalar();
					int idAdresse2 = Convert::ToInt32(resultAdresse);

					SqlCommand^ commandPosseder2 = gcnew SqlCommand(queryPosseder, connection);
					commandPosseder2->Parameters->Add("@IDClient", SqlDbType::Int)->Value = idClient;
					commandPosseder2->Parameters->Add("@IDAdresse", SqlDbType::Int)->Value = idAdresse2;
					commandPosseder2->ExecuteNonQuery();
				}

				MessageBox::Show("Le Client a été ajouté à la base de données avec succès.", "Succès", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			catch (Exception^ ex) {

				MessageBox::Show("Erreur lors de l'ajout du client : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			finally {

				connection->Close();

			}
		}

		private: System::Void textBoxPrenom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		}

		private: System::Void textBoxNom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void comboBoxJour_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void buttonOuiAdresse_Click(System::Object^ sender, System::EventArgs^ e) {

		}
		private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void textBoxVille_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		};
	}
}