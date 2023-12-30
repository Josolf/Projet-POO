#pragma once

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Data::SqlClient;

public ref class DebugAdresse : public System::Windows::Forms::Form
{
public:
    DebugAdresse(void)
    {
        InitializeComponent();
        ChargerDonnees();
    }

protected:
    ~DebugAdresse()
    {
        if (components)
        {
            delete components;
        }
    }

private: System::Windows::Forms::DataGridView^ dataGridView1;
private: System::Windows::Forms::Button^ button1;

private: System::Windows::Forms::Button^ button2;
private:
    System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
    void InitializeComponent(void)
    {
        this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
        this->button1 = (gcnew System::Windows::Forms::Button());
        this->button2 = (gcnew System::Windows::Forms::Button());
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
        this->SuspendLayout();

        this->dataGridView1->ColumnHeadersHeight = 34;
        this->dataGridView1->Location = System::Drawing::Point(14, 13);
        this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
        this->dataGridView1->Name = L"dataGridView1";
        this->dataGridView1->RowHeadersWidth = 62;
        this->dataGridView1->Size = System::Drawing::Size(1536, 626);
        this->dataGridView1->TabIndex = 0;

        this->button1->Location = System::Drawing::Point(1152, 707);
        this->button1->Name = L"button1";
        this->button1->Size = System::Drawing::Size(361, 109);
        this->button1->TabIndex = 1;
        this->button1->Text = L"button1";
        this->button1->UseVisualStyleBackColor = true;
        this->button1->Click += gcnew System::EventHandler(this, &DebugAdresse::button1_Click);

        this->button2->Location = System::Drawing::Point(96, 686);
        this->button2->Name = L"button2";
        this->button2->Size = System::Drawing::Size(280, 150);
        this->button2->TabIndex = 2;
        this->button2->Text = L"button2";
        this->button2->UseVisualStyleBackColor = true;
        this->button2->Click += gcnew System::EventHandler(this, &DebugAdresse::button2_Click);

        this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->ClientSize = System::Drawing::Size(1562, 887);
        this->Controls->Add(this->button2);
        this->Controls->Add(this->button1);
        this->Controls->Add(this->dataGridView1);
        this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
        this->Name = L"DebugAdresse";
        this->Text = L"Debug Adresse";
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
        this->ResumeLayout(false);

    }
#pragma endregion

    void ChargerDonnees()
    {
        String^ connectionString = "Data Source=Martin_GOA;Initial Catalog=Projet;Integrated Security=True";
        SqlConnection^ connection = gcnew SqlConnection(connectionString);
        SqlCommand^ command = gcnew SqlCommand("SELECT * FROM Adresse", connection);
        SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);
        DataTable^ table = gcnew DataTable();

        try
        {
            connection->Open();
            adapter->Fill(table);
            dataGridView1->DataSource = table;
        }
        catch (Exception^ e)
        {
            MessageBox::Show(e->Message);
        }
        finally
        {
            connection->Close();
        }
    }
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    ChargerDonnees();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    if (dataGridView1->SelectedRows->Count > 0)
    {
        int adresseId = Convert::ToInt32(dataGridView1->SelectedRows[0]->Cells["ID_ADRESSE"]->Value);
        String^ connectionString = "Data Source=Martin_GOA;Initial Catalog=Projet;Integrated Security=True";
        SqlConnection^ connection = gcnew SqlConnection(connectionString);

        try
        {
            connection->Open();
            SqlCommand^ command = gcnew SqlCommand("DELETE FROM Adresse WHERE ID_Adresse = @AdresseId", connection);
            command->Parameters->AddWithValue("@AdresseId", adresseId);
            command->ExecuteNonQuery();

            ChargerDonnees();
        }
        catch (Exception^ ex)
        {
            MessageBox::Show(ex->Message);
        }
        finally
        {
            connection->Close();
        }
    }
    else
    {
        MessageBox::Show("Veuillez sélectionner une adresse à supprimer.");
    }
}
};