#pragma once
#include "Personnel.h"
#include "Adresse.h"
namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	public ref class CreerPersonnel : public System::Windows::Forms::Form
	{
	public:
		CreerPersonnel(void)
		{
			InitializeComponent();

		}

	protected:

		~CreerPersonnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label13;
	protected:
	private: System::Windows::Forms::NumericUpDown^ UpDownNumAdr;
	private: System::Windows::Forms::TextBox^ textBoxCodePostal;
	private: System::Windows::Forms::TextBox^ textBoxRue;
	private: System::Windows::Forms::TextBox^ textBoxVille;
	private: System::Windows::Forms::TextBox^ textBoxPrenom;
	private: System::Windows::Forms::TextBox^ textBoxNom;
	private: System::Windows::Forms::ComboBox^ comboBoxAnnee;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::ComboBox^ comboBoxJour;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::ComboBox^ comboBoxMois;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBoxIDPoste;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBoxSupHier;
	private: System::Windows::Forms::Button^ button2;

	private:

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CreerPersonnel::typeid));
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->UpDownNumAdr = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBoxCodePostal = (gcnew System::Windows::Forms::TextBox());
			this->textBoxRue = (gcnew System::Windows::Forms::TextBox());
			this->textBoxVille = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNom = (gcnew System::Windows::Forms::TextBox());
			this->comboBoxAnnee = (gcnew System::Windows::Forms::ComboBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->comboBoxJour = (gcnew System::Windows::Forms::ComboBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->comboBoxMois = (gcnew System::Windows::Forms::ComboBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBoxIDPoste = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBoxSupHier = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpDownNumAdr))->BeginInit();
			this->SuspendLayout();

			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label13->Location = System::Drawing::Point(73, 26);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(198, 36);
			this->label13->TabIndex = 93;
			this->label13->Text = L"Infos personnelles :";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->UpDownNumAdr->BackColor = System::Drawing::Color::Gainsboro;
			this->UpDownNumAdr->Location = System::Drawing::Point(180, 302);
			this->UpDownNumAdr->Name = L"UpDownNumAdr";
			this->UpDownNumAdr->Size = System::Drawing::Size(79, 26);
			this->UpDownNumAdr->TabIndex = 92;
			this->UpDownNumAdr->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;

			this->textBoxCodePostal->BackColor = System::Drawing::Color::Gainsboro;
			this->textBoxCodePostal->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxCodePostal->Location = System::Drawing::Point(137, 410);
			this->textBoxCodePostal->Margin = System::Windows::Forms::Padding(2);
			this->textBoxCodePostal->Name = L"textBoxCodePostal";
			this->textBoxCodePostal->Size = System::Drawing::Size(122, 26);
			this->textBoxCodePostal->TabIndex = 91;

			this->textBoxRue->BackColor = System::Drawing::Color::Gainsboro;
			this->textBoxRue->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxRue->Location = System::Drawing::Point(154, 355);
			this->textBoxRue->Margin = System::Windows::Forms::Padding(2);
			this->textBoxRue->Name = L"textBoxRue";
			this->textBoxRue->Size = System::Drawing::Size(422, 26);
			this->textBoxRue->TabIndex = 90;

			this->textBoxVille->BackColor = System::Drawing::Color::Gainsboro;
			this->textBoxVille->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxVille->Location = System::Drawing::Point(344, 409);
			this->textBoxVille->Margin = System::Windows::Forms::Padding(2);
			this->textBoxVille->Name = L"textBoxVille";
			this->textBoxVille->Size = System::Drawing::Size(241, 26);
			this->textBoxVille->TabIndex = 89;

			this->textBoxPrenom->BackColor = System::Drawing::Color::Gainsboro;
			this->textBoxPrenom->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxPrenom->ForeColor = System::Drawing::SystemColors::Desktop;
			this->textBoxPrenom->Location = System::Drawing::Point(104, 117);
			this->textBoxPrenom->Margin = System::Windows::Forms::Padding(2);
			this->textBoxPrenom->Name = L"textBoxPrenom";
			this->textBoxPrenom->Size = System::Drawing::Size(459, 26);
			this->textBoxPrenom->TabIndex = 88;

			this->textBoxNom->BackColor = System::Drawing::Color::Gainsboro;
			this->textBoxNom->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxNom->Location = System::Drawing::Point(104, 73);
			this->textBoxNom->Margin = System::Windows::Forms::Padding(2);
			this->textBoxNom->Name = L"textBoxNom";
			this->textBoxNom->Size = System::Drawing::Size(459, 26);
			this->textBoxNom->TabIndex = 87;

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
			this->comboBoxAnnee->Location = System::Drawing::Point(382, 162);
			this->comboBoxAnnee->Margin = System::Windows::Forms::Padding(2);
			this->comboBoxAnnee->Name = L"comboBoxAnnee";
			this->comboBoxAnnee->Size = System::Drawing::Size(96, 28);
			this->comboBoxAnnee->TabIndex = 86;

			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(364, 165);
			this->label29->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(13, 20);
			this->label29->TabIndex = 85;
			this->label29->Text = L"/";

			this->comboBoxJour->BackColor = System::Drawing::Color::Gainsboro;
			this->comboBoxJour->FormattingEnabled = true;
			this->comboBoxJour->Items->AddRange(gcnew cli::array< System::Object^  >(31) {
				L"01", L"02", L"03", L"04", L"05", L"06", L"07",
					L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25",
					L"26", L"27", L"28", L"29", L"30", L"31"
			});
			this->comboBoxJour->Location = System::Drawing::Point(199, 162);
			this->comboBoxJour->Margin = System::Windows::Forms::Padding(2);
			this->comboBoxJour->Name = L"comboBoxJour";
			this->comboBoxJour->Size = System::Drawing::Size(69, 28);
			this->comboBoxJour->TabIndex = 84;

			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(273, 165);
			this->label27->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(13, 20);
			this->label27->TabIndex = 83;
			this->label27->Text = L"/";

			this->comboBoxMois->BackColor = System::Drawing::Color::Gainsboro;
			this->comboBoxMois->FormattingEnabled = true;
			this->comboBoxMois->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"01", L"02", L"03", L"04", L"05", L"06", L"07",
					L"08", L"09", L"10", L"11", L"12"
			});
			this->comboBoxMois->Location = System::Drawing::Point(291, 162);
			this->comboBoxMois->Margin = System::Windows::Forms::Padding(2);
			this->comboBoxMois->Name = L"comboBoxMois";
			this->comboBoxMois->Size = System::Drawing::Size(69, 28);
			this->comboBoxMois->TabIndex = 82;

			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::Transparent;
			this->label24->Cursor = System::Windows::Forms::Cursors::No;
			this->label24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label24->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label24->Location = System::Drawing::Point(287, 409);
			this->label24->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(45, 21);
			this->label24->TabIndex = 81;
			this->label24->Text = L"Ville";
			this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Cursor = System::Windows::Forms::Cursors::No;
			this->label7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->Location = System::Drawing::Point(20, 410);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(100, 21);
			this->label7->TabIndex = 80;
			this->label7->Text = L"Code postal";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Cursor = System::Windows::Forms::Cursors::No;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Location = System::Drawing::Point(20, 355);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(118, 21);
			this->label6->TabIndex = 79;
			this->label6->Text = L"Nom de la rue";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Cursor = System::Windows::Forms::Cursors::No;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Location = System::Drawing::Point(20, 302);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(149, 21);
			this->label5->TabIndex = 78;
			this->label5->Text = L"Numéro d\'adresse";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(73, 247);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(219, 36);
			this->label4->TabIndex = 77;
			this->label4->Text = L"Adresse de Résidence";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Cursor = System::Windows::Forms::Cursors::No;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(20, 164);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(145, 21);
			this->label3->TabIndex = 76;
			this->label3->Text = L"Date d\'embauche";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Cursor = System::Windows::Forms::Cursors::No;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(22, 120);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 21);
			this->label2->TabIndex = 75;
			this->label2->Text = L"Prénom";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Cursor = System::Windows::Forms::Cursors::No;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(48, 76);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 21);
			this->label1->TabIndex = 74;
			this->label1->Text = L"Nom";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->comboBoxIDPoste->BackColor = System::Drawing::Color::Gainsboro;
			this->comboBoxIDPoste->FormattingEnabled = true;
			this->comboBoxIDPoste->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"Directeur Général", L"Responsable des Achats de Composants",
					L"Chef de Projet R&D ", L"Directeur des Opérations", L"Responsable Marketing et Ventes", L" Ingénieur/Chercheur en Électronique",
					L"Analyste de Marché", L"Gestionnaire de la Chaîne Logistique", L"Spécialiste Support Technique", L"Contrôleur de Qualité"
			});
			this->comboBoxIDPoste->Location = System::Drawing::Point(154, 535);
			this->comboBoxIDPoste->Margin = System::Windows::Forms::Padding(2);
			this->comboBoxIDPoste->Name = L"comboBoxIDPoste";
			this->comboBoxIDPoste->Size = System::Drawing::Size(409, 28);
			this->comboBoxIDPoste->TabIndex = 94;

			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label8->Location = System::Drawing::Point(20, 483);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(297, 36);
			this->label8->TabIndex = 95;
			this->label8->Text = L"Informations Professionnelles";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Cursor = System::Windows::Forms::Cursors::No;
			this->label9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label9->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label9->Location = System::Drawing::Point(28, 537);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(110, 21);
			this->label9->TabIndex = 96;
			this->label9->Text = L"Poste actuel :";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Cursor = System::Windows::Forms::Cursors::No;
			this->label10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label10->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold));
			this->label10->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label10->Location = System::Drawing::Point(28, 593);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(199, 21);
			this->label10->TabIndex = 97;
			this->label10->Text = L"Supérieur Hierarchique : ";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			this->textBoxSupHier->BackColor = System::Drawing::Color::Gainsboro;
			this->textBoxSupHier->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxSupHier->Location = System::Drawing::Point(231, 592);
			this->textBoxSupHier->Margin = System::Windows::Forms::Padding(2);
			this->textBoxSupHier->Name = L"textBoxSupHier";
			this->textBoxSupHier->Size = System::Drawing::Size(285, 26);
			this->textBoxSupHier->TabIndex = 98;

			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(487, 682);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(124, 38);
			this->button2->TabIndex = 99;
			this->button2->Text = L"Valider";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CreerPersonnel::button2_Click);

			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(622, 731);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBoxSupHier);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->comboBoxIDPoste);
			this->Controls->Add(this->label13);
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
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"CreerPersonnel";
			this->Text = L"CreerPersonnel";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpDownNumAdr))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ nomPersonnel = textBoxNom->Text;
		String^ prenomPersonnel = textBoxPrenom->Text;

		String^ JourPers = comboBoxJour->Text;
		String^ MoisPers = comboBoxMois->Text;
		String^ YearPers = comboBoxAnnee->Text;
		String^ dateEmbauche = String::Format("{0}-{1}-{2}", YearPers, MoisPers, JourPers);

		String^ superieurHierarchique = textBoxSupHier->Text;
		int idPoste = comboBoxIDPoste->SelectedIndex;

		Personnel^ nouveauPersonnel = gcnew Personnel();
		nouveauPersonnel->set_Nom(nomPersonnel);
		nouveauPersonnel->set_Prenom(prenomPersonnel);
		nouveauPersonnel->set_DateEmbauche(dateEmbauche);
		nouveauPersonnel->set_SuperieurHierarchique(superieurHierarchique);
		nouveauPersonnel->set_ID_Poste(idPoste);
		String^ NumeroRue = UpDownNumAdr->Text;
		String^ NomRue = textBoxRue->Text;
		String^ NomVille = textBoxVille->Text;
		String^ CodePostal = textBoxCodePostal->Text;
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

			String^ queryPersonnel = "INSERT INTO PERSONNEL (NOM, PRENOM, DATE_EMBAUCHE, SUPERIEUR_HIERARCHIQUE, ID_POSTE) VALUES (@Nom, @Prenom, @DateEmbauche, @SuperieurHierarchique, @IDPoste)";
			SqlCommand^ commandPersonnel = gcnew SqlCommand(queryPersonnel, connection);

			commandPersonnel->Parameters->AddWithValue("@Nom", nomPersonnel);
			commandPersonnel->Parameters->AddWithValue("@Prenom", prenomPersonnel);
			commandPersonnel->Parameters->AddWithValue("@DateEmbauche", dateEmbauche);
			commandPersonnel->Parameters->AddWithValue("@SuperieurHierarchique", superieurHierarchique);
			commandPersonnel->Parameters->AddWithValue("@IDPoste", idPoste);
			commandPersonnel->ExecuteNonQuery();

			String^ queryGetIDPersonnel = "SELECT IDENT_CURRENT('PERSONNEL') AS IDPersonnel";
			SqlCommand^ commandGetIDPersonnel = gcnew SqlCommand(queryGetIDPersonnel, connection);
			int idPersonnel = Convert::ToInt32(commandGetIDPersonnel->ExecuteScalar());
			nouveauPersonnel->set_ID_Personnel(idPersonnel);

			String^ queryAdresse = "INSERT INTO ADRESSE(NUMERO, NOM_RUE, NOM_VILLE, CODE_POSTAL, TYPE_ADRESSE) VALUES (@NumeroRue, @NomRue, @NomVille, @CodePostal, @TypeAdresse)";
			SqlCommand^ commandAdresse = gcnew SqlCommand(queryAdresse, connection);
			commandAdresse->Parameters->AddWithValue("@NumeroRue", numeroRue);
			commandAdresse->Parameters->AddWithValue("@NomRue", NomRue);
			commandAdresse->Parameters->AddWithValue("@NomVille", NomVille);
			commandAdresse->Parameters->AddWithValue("@CodePostal", CodePostal);
			commandAdresse->Parameters->AddWithValue("@TypeAdresse", "2");
			commandAdresse->ExecuteNonQuery();

			String^ queryGetIDAdresse = "SELECT IDENT_CURRENT('ADRESSE') AS IDAdresse";
			SqlCommand^ commandGetIDAdresse = gcnew SqlCommand(queryGetIDAdresse, connection);
			int idAdresse = Convert::ToInt32(commandGetIDAdresse->ExecuteScalar());

			String^ queryPosseder = "INSERT INTO POSSEDE2 (ID_PERSONNEL, ID_ADRESSE) VALUES (@IDPersonnel, @IDAdresse)";
			SqlCommand^ commandPosseder = gcnew SqlCommand(queryPosseder, connection);
			commandPosseder->Parameters->AddWithValue("@IDPersonnel", idPersonnel);
			commandPosseder->Parameters->AddWithValue("@IDAdresse", idAdresse);
			commandPosseder->ExecuteNonQuery();

			MessageBox::Show("Le personnel a été ajouté à la base de données avec succès.", "Succès", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ ex) {

			MessageBox::Show("Erreur lors de l'ajout du personnel : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {

			connection->Close();
		}

	}
	};
}