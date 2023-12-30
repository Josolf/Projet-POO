#pragma once
#include "CreerClient.h"
#include "ModifierClient.h"
#include "SupprimerClient.h"
#include "AfficherClient.h"
#include "DebugAdresse.h"
#include "CreerPersonnel.h"
#include "ModifierPersonnel.h"
#include "AfficherPersonnel.h"
#include "SupprimerPersonnel.h"
#include "Stock.h"
#include "Statistiques.h"
#include "CreerCommande.h"
#include "AfficherCommande.h"
#include "SupprimerCommande.h"
#include "ModifierCommande.h"
using namespace ProjetPOO::P6new;

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MenuPrincipal : public System::Windows::Forms::Form
	{
	public:
		MenuPrincipal(void)
		{
			InitializeComponent();

		}

	protected:

		~MenuPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ clientToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ créerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modifierToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ supprimerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ afficherToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ personnelToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ créerToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ modifierToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ supprimerToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ afficherToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ commandesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ stockToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ statistiquesToolStripMenuItem;

	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::ToolStripMenuItem^ debugToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tableAdresseToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tableClientToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tablePossede1ToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ crézrToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modifierToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ supprimerToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ afficherToolStripMenuItem2;

	protected:

	private:

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuPrincipal::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->clientToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->créerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modifierToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->supprimerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->afficherToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->personnelToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->créerToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modifierToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->supprimerToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->afficherToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->stockToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statistiquesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->commandesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->crézrToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->debugToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tableAdresseToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tableClientToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tablePossede1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->modifierToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->supprimerToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->afficherToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->menuStrip1->BackColor = System::Drawing::Color::Transparent;
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuStrip1->ForeColor = System::Drawing::Color::White;
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->clientToolStripMenuItem,
					this->personnelToolStripMenuItem, this->stockToolStripMenuItem, this->statistiquesToolStripMenuItem, this->commandesToolStripMenuItem,
					this->debugToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(67, 92);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			this->menuStrip1->Size = System::Drawing::Size(901, 48);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// clientToolStripMenuItem
			// 
			this->clientToolStripMenuItem->BackColor = System::Drawing::Color::Transparent;
			this->clientToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->créerToolStripMenuItem,
					this->modifierToolStripMenuItem, this->supprimerToolStripMenuItem, this->afficherToolStripMenuItem
			});
			this->clientToolStripMenuItem->ForeColor = System::Drawing::Color::Black;
			this->clientToolStripMenuItem->Margin = System::Windows::Forms::Padding(6);
			this->clientToolStripMenuItem->Name = L"clientToolStripMenuItem";
			this->clientToolStripMenuItem->Size = System::Drawing::Size(83, 32);
			this->clientToolStripMenuItem->Text = L"Client";
			// 
			// créerToolStripMenuItem
			// 
			this->créerToolStripMenuItem->BackColor = System::Drawing::Color::DarkTurquoise;
			this->créerToolStripMenuItem->ForeColor = System::Drawing::Color::MidnightBlue;
			this->créerToolStripMenuItem->Name = L"créerToolStripMenuItem";
			this->créerToolStripMenuItem->Size = System::Drawing::Size(212, 36);
			this->créerToolStripMenuItem->Text = L"Créer";
			this->créerToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuPrincipal::créerToolStripMenuItem_Click);
			// 
			// modifierToolStripMenuItem
			// 
			this->modifierToolStripMenuItem->BackColor = System::Drawing::Color::DarkTurquoise;
			this->modifierToolStripMenuItem->ForeColor = System::Drawing::Color::MidnightBlue;
			this->modifierToolStripMenuItem->Name = L"modifierToolStripMenuItem";
			this->modifierToolStripMenuItem->Size = System::Drawing::Size(212, 36);
			this->modifierToolStripMenuItem->Text = L"Modifier";
			this->modifierToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuPrincipal::modifierToolStripMenuItem_Click);
			// 
			// supprimerToolStripMenuItem
			// 
			this->supprimerToolStripMenuItem->BackColor = System::Drawing::Color::DarkTurquoise;
			this->supprimerToolStripMenuItem->ForeColor = System::Drawing::Color::MidnightBlue;
			this->supprimerToolStripMenuItem->Name = L"supprimerToolStripMenuItem";
			this->supprimerToolStripMenuItem->Size = System::Drawing::Size(212, 36);
			this->supprimerToolStripMenuItem->Text = L"Supprimer";
			this->supprimerToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuPrincipal::supprimerToolStripMenuItem_Click);
			// 
			// afficherToolStripMenuItem
			// 
			this->afficherToolStripMenuItem->BackColor = System::Drawing::Color::DarkTurquoise;
			this->afficherToolStripMenuItem->ForeColor = System::Drawing::Color::MidnightBlue;
			this->afficherToolStripMenuItem->Name = L"afficherToolStripMenuItem";
			this->afficherToolStripMenuItem->Size = System::Drawing::Size(212, 36);
			this->afficherToolStripMenuItem->Text = L"Afficher";
			this->afficherToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuPrincipal::afficherToolStripMenuItem_Click);
			// 
			// personnelToolStripMenuItem
			// 
			this->personnelToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->créerToolStripMenuItem1,
					this->modifierToolStripMenuItem1, this->supprimerToolStripMenuItem1, this->afficherToolStripMenuItem1
			});
			this->personnelToolStripMenuItem->ForeColor = System::Drawing::Color::Black;
			this->personnelToolStripMenuItem->Margin = System::Windows::Forms::Padding(6);
			this->personnelToolStripMenuItem->Name = L"personnelToolStripMenuItem";
			this->personnelToolStripMenuItem->Size = System::Drawing::Size(120, 32);
			this->personnelToolStripMenuItem->Text = L"Personnel";
			// 
			// créerToolStripMenuItem1
			// 
			this->créerToolStripMenuItem1->BackColor = System::Drawing::Color::DarkTurquoise;
			this->créerToolStripMenuItem1->ForeColor = System::Drawing::Color::MidnightBlue;
			this->créerToolStripMenuItem1->Name = L"créerToolStripMenuItem1";
			this->créerToolStripMenuItem1->Size = System::Drawing::Size(212, 36);
			this->créerToolStripMenuItem1->Text = L"Créer";
			this->créerToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MenuPrincipal::créerToolStripMenuItem1_Click);
			// 
			// modifierToolStripMenuItem1
			// 
			this->modifierToolStripMenuItem1->BackColor = System::Drawing::Color::DarkTurquoise;
			this->modifierToolStripMenuItem1->ForeColor = System::Drawing::Color::MidnightBlue;
			this->modifierToolStripMenuItem1->Name = L"modifierToolStripMenuItem1";
			this->modifierToolStripMenuItem1->Size = System::Drawing::Size(212, 36);
			this->modifierToolStripMenuItem1->Text = L"Modifier";
			this->modifierToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MenuPrincipal::modifierToolStripMenuItem1_Click);
			// 
			// supprimerToolStripMenuItem1
			// 
			this->supprimerToolStripMenuItem1->BackColor = System::Drawing::Color::DarkTurquoise;
			this->supprimerToolStripMenuItem1->ForeColor = System::Drawing::Color::MidnightBlue;
			this->supprimerToolStripMenuItem1->Name = L"supprimerToolStripMenuItem1";
			this->supprimerToolStripMenuItem1->Size = System::Drawing::Size(212, 36);
			this->supprimerToolStripMenuItem1->Text = L"Supprimer";
			this->supprimerToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MenuPrincipal::supprimerToolStripMenuItem1_Click);
			// 
			// afficherToolStripMenuItem1
			// 
			this->afficherToolStripMenuItem1->BackColor = System::Drawing::Color::DarkTurquoise;
			this->afficherToolStripMenuItem1->ForeColor = System::Drawing::Color::MidnightBlue;
			this->afficherToolStripMenuItem1->Name = L"afficherToolStripMenuItem1";
			this->afficherToolStripMenuItem1->Size = System::Drawing::Size(212, 36);
			this->afficherToolStripMenuItem1->Text = L"Afficher";
			this->afficherToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MenuPrincipal::afficherToolStripMenuItem1_Click);
			// 
			// stockToolStripMenuItem
			// 
			this->stockToolStripMenuItem->ForeColor = System::Drawing::Color::Black;
			this->stockToolStripMenuItem->Margin = System::Windows::Forms::Padding(6);
			this->stockToolStripMenuItem->Name = L"stockToolStripMenuItem";
			this->stockToolStripMenuItem->Size = System::Drawing::Size(80, 32);
			this->stockToolStripMenuItem->Text = L"Stock";
			this->stockToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuPrincipal::stockToolStripMenuItem_Click);
			// 
			// statistiquesToolStripMenuItem
			// 
			this->statistiquesToolStripMenuItem->ForeColor = System::Drawing::Color::Black;
			this->statistiquesToolStripMenuItem->Margin = System::Windows::Forms::Padding(6);
			this->statistiquesToolStripMenuItem->Name = L"statistiquesToolStripMenuItem";
			this->statistiquesToolStripMenuItem->Size = System::Drawing::Size(139, 32);
			this->statistiquesToolStripMenuItem->Text = L"Statistiques";
			this->statistiquesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuPrincipal::statistiquesToolStripMenuItem_Click);
			// 
			// commandesToolStripMenuItem
			// 
			this->commandesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->crézrToolStripMenuItem,
					this->modifierToolStripMenuItem2, this->supprimerToolStripMenuItem2, this->afficherToolStripMenuItem2
			});
			this->commandesToolStripMenuItem->ForeColor = System::Drawing::Color::Black;
			this->commandesToolStripMenuItem->Margin = System::Windows::Forms::Padding(6);
			this->commandesToolStripMenuItem->Name = L"commandesToolStripMenuItem";
			this->commandesToolStripMenuItem->Size = System::Drawing::Size(143, 32);
			this->commandesToolStripMenuItem->Text = L"Commandes";
			// 
			// crézrToolStripMenuItem
			// 
			this->crézrToolStripMenuItem->BackColor = System::Drawing::Color::DarkTurquoise;
			this->crézrToolStripMenuItem->Name = L"crézrToolStripMenuItem";
			this->crézrToolStripMenuItem->Size = System::Drawing::Size(270, 36);
			this->crézrToolStripMenuItem->Text = L"Créer";
			this->crézrToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuPrincipal::crézrToolStripMenuItem_Click);
			// 
			// debugToolStripMenuItem
			// 
			this->debugToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->tableAdresseToolStripMenuItem,
					this->tableClientToolStripMenuItem, this->tablePossede1ToolStripMenuItem
			});
			this->debugToolStripMenuItem->ForeColor = System::Drawing::Color::Black;
			this->debugToolStripMenuItem->Name = L"debugToolStripMenuItem";
			this->debugToolStripMenuItem->Size = System::Drawing::Size(90, 44);
			this->debugToolStripMenuItem->Text = L"Debug";
			// 
			// tableAdresseToolStripMenuItem
			// 
			this->tableAdresseToolStripMenuItem->Name = L"tableAdresseToolStripMenuItem";
			this->tableAdresseToolStripMenuItem->Size = System::Drawing::Size(257, 36);
			this->tableAdresseToolStripMenuItem->Text = L"Table Adresse";
			this->tableAdresseToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuPrincipal::tableAdresseToolStripMenuItem_Click);
			// 
			// tableClientToolStripMenuItem
			// 
			this->tableClientToolStripMenuItem->Name = L"tableClientToolStripMenuItem";
			this->tableClientToolStripMenuItem->Size = System::Drawing::Size(257, 36);
			this->tableClientToolStripMenuItem->Text = L"Table Client ";
			// 
			// tablePossede1ToolStripMenuItem
			// 
			this->tablePossede1ToolStripMenuItem->Name = L"tablePossede1ToolStripMenuItem";
			this->tablePossede1ToolStripMenuItem->Size = System::Drawing::Size(257, 36);
			this->tablePossede1ToolStripMenuItem->Text = L"Table Possede1";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(206, 33);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(65, 66);
			this->pictureBox3->TabIndex = 8;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(324, 23);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(77, 77);
			this->pictureBox4->TabIndex = 9;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->Location = System::Drawing::Point(432, 12);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(89, 87);
			this->pictureBox5->TabIndex = 10;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox6->Location = System::Drawing::Point(605, 23);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(69, 78);
			this->pictureBox6->TabIndex = 11;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(88, 25);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(65, 76);
			this->pictureBox2->TabIndex = 12;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(673, 412);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(232, 177);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// modifierToolStripMenuItem2
			// 
			this->modifierToolStripMenuItem2->BackColor = System::Drawing::Color::DarkTurquoise;
			this->modifierToolStripMenuItem2->Name = L"modifierToolStripMenuItem2";
			this->modifierToolStripMenuItem2->Size = System::Drawing::Size(270, 36);
			this->modifierToolStripMenuItem2->Text = L"Modifier";
			this->modifierToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MenuPrincipal::modifierToolStripMenuItem2_Click);
			// 
			// supprimerToolStripMenuItem2
			// 
			this->supprimerToolStripMenuItem2->BackColor = System::Drawing::Color::DarkTurquoise;
			this->supprimerToolStripMenuItem2->Name = L"supprimerToolStripMenuItem2";
			this->supprimerToolStripMenuItem2->Size = System::Drawing::Size(270, 36);
			this->supprimerToolStripMenuItem2->Text = L"Supprimer";
			this->supprimerToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MenuPrincipal::supprimerToolStripMenuItem2_Click);
			// 
			// afficherToolStripMenuItem2
			// 
			this->afficherToolStripMenuItem2->BackColor = System::Drawing::Color::DarkTurquoise;
			this->afficherToolStripMenuItem2->Name = L"afficherToolStripMenuItem2";
			this->afficherToolStripMenuItem2->Size = System::Drawing::Size(270, 36);
			this->afficherToolStripMenuItem2->Text = L"Afficher";
			this->afficherToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MenuPrincipal::afficherToolStripMenuItem2_Click);
			// 
			// MenuPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::WindowText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(906, 590);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->menuStrip1);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MenuPrincipal";
			this->Text = L"LymmTech Pro V1";
			this->Load += gcnew System::EventHandler(this, &MenuPrincipal::MenuPrincipal_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		CreerClient obj;
		obj.ShowDialog();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		ModifierClient obj;
		obj.ShowDialog();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		SupprimerClient obj;
		obj.ShowDialog();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		AfficherClient obj;
		obj.ShowDialog();
	}
	private: System::Void créerToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		CreerClient obj;
		obj.ShowDialog();
	}
	private: System::Void modifierToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ModifierClient obj;
		obj.ShowDialog();
	}
	private: System::Void supprimerToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		SupprimerClient obj;
		obj.ShowDialog();
	}
	private: System::Void afficherToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		AfficherClient obj;
		obj.ShowDialog();
	}
	private: System::Void MenuPrincipal_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tableAdresseToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		DebugAdresse obj;
		obj.ShowDialog();
	}
	private: System::Void afficherToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		AfficherPersonnel obj;
		obj.ShowDialog();
	}
	private: System::Void créerToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		CreerPersonnel obj;
		obj.ShowDialog();
	}
	private: System::Void modifierToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		ModifierPersonnel obj;
		obj.ShowDialog();
	}
	private: System::Void supprimerToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		SupprimerPersonnel obj;
		obj.ShowDialog();
	}
	private: System::Void stockToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Stock obj;
		obj.ShowDialog();
	}
	private: System::Void statistiquesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Statistiques obj;
		obj.ShowDialog();
	}
	private: System::Void crézrToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		CreerCommande obj;
		obj.ShowDialog();
	}
private: System::Void modifierToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	ModifierCommande obj;
	obj.ShowDialog();
}
private: System::Void supprimerToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	SupprimerCommande obj;
	obj.ShowDialog();
}
private: System::Void afficherToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	AfficherCommande obj;
	obj.ShowDialog();
}
};
}