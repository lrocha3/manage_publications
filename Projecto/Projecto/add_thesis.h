#pragma once

#include "DataBase.h"

namespace Projecto {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for add_thesis
	/// </summary>
	public ref class add_thesis : public System::Windows::Forms::Form
	{
	public:
		add_thesis(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~add_thesis()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel_thesis;
	protected:
	private: System::Windows::Forms::Button^  ok_thesis;
	private: System::Windows::Forms::Label^  author_label;
	private: System::Windows::Forms::Label^  year_label;
	private: System::Windows::Forms::TextBox^  author;
	private: System::Windows::Forms::MaskedTextBox^  year;




	private: System::Windows::Forms::TextBox^  title;

	private: System::Windows::Forms::Label^  country_label;

	private: System::Windows::Forms::Label^  title_label;
	private: System::Windows::Forms::TextBox^  country;


	private: System::Windows::Forms::TextBox^  type;

	private: System::Windows::Forms::Label^  dep_fac_label;


	private: System::Windows::Forms::Label^  type_label;
	private: System::Windows::Forms::TextBox^  dep_fac;


	private: System::Windows::Forms::TextBox^  path_pdf;
	private: System::Windows::Forms::Button^  load_pdf;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  warning;
	private: System::Windows::Forms::Label^  not_pdf_warning;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(add_thesis::typeid));
			this->panel_thesis = (gcnew System::Windows::Forms::Panel());
			this->not_pdf_warning = (gcnew System::Windows::Forms::Label());
			this->warning = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->path_pdf = (gcnew System::Windows::Forms::TextBox());
			this->load_pdf = (gcnew System::Windows::Forms::Button());
			this->ok_thesis = (gcnew System::Windows::Forms::Button());
			this->author_label = (gcnew System::Windows::Forms::Label());
			this->year_label = (gcnew System::Windows::Forms::Label());
			this->author = (gcnew System::Windows::Forms::TextBox());
			this->year = (gcnew System::Windows::Forms::MaskedTextBox());
			this->title = (gcnew System::Windows::Forms::TextBox());
			this->country_label = (gcnew System::Windows::Forms::Label());
			this->title_label = (gcnew System::Windows::Forms::Label());
			this->country = (gcnew System::Windows::Forms::TextBox());
			this->type = (gcnew System::Windows::Forms::TextBox());
			this->dep_fac_label = (gcnew System::Windows::Forms::Label());
			this->type_label = (gcnew System::Windows::Forms::Label());
			this->dep_fac = (gcnew System::Windows::Forms::TextBox());
			this->panel_thesis->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel_thesis
			// 
			this->panel_thesis->Controls->Add(this->not_pdf_warning);
			this->panel_thesis->Controls->Add(this->warning);
			this->panel_thesis->Controls->Add(this->button1);
			this->panel_thesis->Controls->Add(this->path_pdf);
			this->panel_thesis->Controls->Add(this->load_pdf);
			this->panel_thesis->Controls->Add(this->ok_thesis);
			this->panel_thesis->Controls->Add(this->author_label);
			this->panel_thesis->Controls->Add(this->year_label);
			this->panel_thesis->Controls->Add(this->author);
			this->panel_thesis->Controls->Add(this->year);
			this->panel_thesis->Controls->Add(this->title);
			this->panel_thesis->Controls->Add(this->country_label);
			this->panel_thesis->Controls->Add(this->title_label);
			this->panel_thesis->Controls->Add(this->country);
			this->panel_thesis->Controls->Add(this->type);
			this->panel_thesis->Controls->Add(this->dep_fac_label);
			this->panel_thesis->Controls->Add(this->type_label);
			this->panel_thesis->Controls->Add(this->dep_fac);
			this->panel_thesis->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_thesis->Location = System::Drawing::Point(0, 0);
			this->panel_thesis->Name = L"panel_thesis";
			this->panel_thesis->Size = System::Drawing::Size(665, 380);
			this->panel_thesis->TabIndex = 0;
			// 
			// not_pdf_warning
			// 
			this->not_pdf_warning->AutoSize = true;
			this->not_pdf_warning->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->not_pdf_warning->ForeColor = System::Drawing::Color::Red;
			this->not_pdf_warning->Location = System::Drawing::Point(12, 192);
			this->not_pdf_warning->Name = L"not_pdf_warning";
			this->not_pdf_warning->Size = System::Drawing::Size(0, 15);
			this->not_pdf_warning->TabIndex = 60;
			// 
			// warning
			// 
			this->warning->AutoSize = true;
			this->warning->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->warning->ForeColor = System::Drawing::Color::Red;
			this->warning->Location = System::Drawing::Point(167, 225);
			this->warning->Name = L"warning";
			this->warning->Size = System::Drawing::Size(0, 15);
			this->warning->TabIndex = 45;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(251, 271);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Cancel";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &add_thesis::button1_Click);
			// 
			// path_pdf
			// 
			this->path_pdf->Location = System::Drawing::Point(251, 166);
			this->path_pdf->Name = L"path_pdf";
			this->path_pdf->Size = System::Drawing::Size(100, 20);
			this->path_pdf->TabIndex = 6;
			this->path_pdf->Visible = false;
			// 
			// load_pdf
			// 
			this->load_pdf->ForeColor = System::Drawing::SystemColors::ControlText;
			this->load_pdf->Location = System::Drawing::Point(12, 166);
			this->load_pdf->Name = L"load_pdf";
			this->load_pdf->Size = System::Drawing::Size(75, 23);
			this->load_pdf->TabIndex = 7;
			this->load_pdf->Text = L"Load PDF";
			this->load_pdf->UseVisualStyleBackColor = true;
			this->load_pdf->Click += gcnew System::EventHandler(this, &add_thesis::load_pdf_Click);
			// 
			// ok_thesis
			// 
			this->ok_thesis->Location = System::Drawing::Point(170, 271);
			this->ok_thesis->Name = L"ok_thesis";
			this->ok_thesis->Size = System::Drawing::Size(75, 23);
			this->ok_thesis->TabIndex = 8;
			this->ok_thesis->Text = L"OK";
			this->ok_thesis->UseVisualStyleBackColor = true;
			this->ok_thesis->Click += gcnew System::EventHandler(this, &add_thesis::ok_thesis_Click);
			// 
			// author_label
			// 
			this->author_label->AutoSize = true;
			this->author_label->Location = System::Drawing::Point(12, 9);
			this->author_label->Name = L"author_label";
			this->author_label->Size = System::Drawing::Size(148, 13);
			this->author_label->TabIndex = 5;
			this->author_label->Text = L"Author ( First Name;Surname )";
			// 
			// year_label
			// 
			this->year_label->AutoSize = true;
			this->year_label->Location = System::Drawing::Point(12, 140);
			this->year_label->Name = L"year_label";
			this->year_label->Size = System::Drawing::Size(29, 13);
			this->year_label->TabIndex = 15;
			this->year_label->Text = L"Year";
			// 
			// author
			// 
			this->author->Location = System::Drawing::Point(251, 9);
			this->author->Name = L"author";
			this->author->Size = System::Drawing::Size(100, 20);
			this->author->TabIndex = 0;
			// 
			// year
			// 
			this->year->Location = System::Drawing::Point(251, 133);
			this->year->Mask = L"0000";
			this->year->Name = L"year";
			this->year->Size = System::Drawing::Size(100, 20);
			this->year->TabIndex = 5;
			// 
			// title
			// 
			this->title->Location = System::Drawing::Point(251, 35);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(100, 20);
			this->title->TabIndex = 1;
			// 
			// country_label
			// 
			this->country_label->AutoSize = true;
			this->country_label->Location = System::Drawing::Point(12, 109);
			this->country_label->Name = L"country_label";
			this->country_label->Size = System::Drawing::Size(43, 13);
			this->country_label->TabIndex = 13;
			this->country_label->Text = L"Country";
			// 
			// title_label
			// 
			this->title_label->AutoSize = true;
			this->title_label->Location = System::Drawing::Point(12, 35);
			this->title_label->Name = L"title_label";
			this->title_label->Size = System::Drawing::Size(27, 13);
			this->title_label->TabIndex = 7;
			this->title_label->Text = L"Title";
			// 
			// country
			// 
			this->country->Location = System::Drawing::Point(251, 106);
			this->country->Name = L"country";
			this->country->Size = System::Drawing::Size(100, 20);
			this->country->TabIndex = 4;
			// 
			// type
			// 
			this->type->Location = System::Drawing::Point(251, 57);
			this->type->Name = L"type";
			this->type->Size = System::Drawing::Size(100, 20);
			this->type->TabIndex = 2;
			// 
			// dep_fac_label
			// 
			this->dep_fac_label->AutoSize = true;
			this->dep_fac_label->Location = System::Drawing::Point(12, 84);
			this->dep_fac_label->Name = L"dep_fac_label";
			this->dep_fac_label->Size = System::Drawing::Size(111, 13);
			this->dep_fac_label->TabIndex = 11;
			this->dep_fac_label->Text = L"Department or Faculty";
			// 
			// type_label
			// 
			this->type_label->AutoSize = true;
			this->type_label->Location = System::Drawing::Point(12, 60);
			this->type_label->Name = L"type_label";
			this->type_label->Size = System::Drawing::Size(31, 13);
			this->type_label->TabIndex = 9;
			this->type_label->Text = L"Type";
			// 
			// dep_fac
			// 
			this->dep_fac->Location = System::Drawing::Point(251, 81);
			this->dep_fac->Name = L"dep_fac";
			this->dep_fac->Size = System::Drawing::Size(100, 20);
			this->dep_fac->TabIndex = 3;
			// 
			// add_thesis
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(665, 380);
			this->Controls->Add(this->panel_thesis);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->Name = L"add_thesis";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"add_thesis";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &add_thesis::add_thesis_KeyDown);
			this->panel_thesis->ResumeLayout(false);
			this->panel_thesis->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ok_thesis_Click(System::Object^  sender, System::EventArgs^  e) {


				 String^ id = "";
				 String^ aux = "";
				 String^ autor;

				 String^ lastname;
				 warning->Text = "";


				 // Definição da cor dos labels dos campos
				 author_label->ForeColor = SystemColors::ControlText;
				 title_label->ForeColor = SystemColors::ControlText;
				 type_label->ForeColor = SystemColors::ControlText;
				 dep_fac_label->ForeColor = SystemColors::ControlText;
				 country_label->ForeColor = SystemColors::ControlText;
				 year_label->ForeColor = SystemColors::ControlText;
				 load_pdf->ForeColor = SystemColors::ControlText;




				 bool erro = 0;



				 if (String::IsNullOrEmpty(author->Text)){

					 author_label->ForeColor = System::Drawing::Color::Red;
					 warning->Text = "Fill the red fields please!";
					 erro = 1;
				 }
				 else
				 {

					 String^ aux1 = "";  // primeiro nome
					 String^ aux2 = "";  // segundo nome
					 String^ aux3 = author->Text; // primeironome;segundonome
					 int length;
					 int a;

					 a = aux3->IndexOf(";");

					 if (a != -1){

						 length = aux3->Length;
						 aux1 = aux3->Substring(0, a);
						 aux2 = aux3->Substring(a + 1, length - (a + 1));

						 if (aux1->Length >= 3 && aux2->Length >= 3){
							 autor = aux1 + " " + aux2;
							 lastname = aux2;

						 }
						 else
						 {
							 author_label->ForeColor = System::Drawing::Color::Red;
							 warning->Text = "Fill the red fields please!";
							 erro = 1;
						 }
					 }
					 else
					 {
						 author_label->ForeColor = System::Drawing::Color::Red;
						 warning->Text = "Fill the red fields please!";
						 erro = 1;
					 }

				 }


				 if (String::IsNullOrEmpty(title->Text)){

					 title_label->ForeColor = System::Drawing::Color::Red;
					 warning->Text = "Fill the red fields please!";
					 erro = 1;
				 }

				 if (String::IsNullOrEmpty(type->Text)){

					 type_label->ForeColor = System::Drawing::Color::Red;
					 warning->Text = "Fill the red fields please!";
					 erro = 1;
				 }



				 if (String::IsNullOrEmpty(dep_fac->Text)){

					 dep_fac_label->ForeColor = System::Drawing::Color::Red;
					 warning->Text = "Fill the red fields please!";
					 erro = 1;
				 }






				 if (String::IsNullOrEmpty(country->Text)){

					 country_label->ForeColor = System::Drawing::Color::Red;
					 warning->Text = "Fill the red fields please!";
					 erro = 1;
				 }

				 if (String::IsNullOrEmpty(year->Text) || year->Text->Length < 4){

					 year_label->ForeColor = System::Drawing::Color::Red;
					 warning->Text = "Fill the red fields please!";
					 erro = 1;
				 }


				 int length = path_pdf->Text->Length;

				 if (length == 0)
				 {
					 load_pdf->ForeColor = System::Drawing::Color::Red;
					 warning->Text = "Fill the red fields please!";
					 erro = 1;
				 }

				 else if (length <= 4)
				 {
					 not_pdf_warning->ForeColor = System::Drawing::Color::Red;
					 not_pdf_warning->Text = "Ficheiro Inválido; Escolha um correcto!";
					 erro = 1;
				 }
				 else if (!path_pdf->Text->Substring(length - 4, 4)->Equals(".pdf")){
					 not_pdf_warning->ForeColor = System::Drawing::Color::Red;
					 not_pdf_warning->Text = "Ficheiro Inválido; Escolha um correcto!";
					 erro = 1;
				 }





				 if (!erro){



					
					
						 id = lastname->Substring(0, 3) + year->Text->Substring(2, 2);



						 // Confirmação de unicidade do id!

						 id = count_id(id);

						 // FIM unicidade

						 String^ path = Environment::CurrentDirectory + "\\Publications\\Thesis\\" + id + ".pdf";


						 System::IO::File::Copy(path_pdf->Text, path, true);


						 String^ Command = "INSERT INTO thesis(id, authors, title, type, dep_fac, country, year, path, lastname) VALUES (";
						 Command += "'" + id + "'" + ",";
						 Command += "'" + autor + "'" + ",";
						 Command += "'" + title->Text + "'" + ",";
						 Command += "'" + type->Text + "'" + ",";
						 Command += "'" + dep_fac->Text + "'" + ",";
						 Command += "'" + country->Text + "'" + ",";
						 Command += "'" + year->Text + "'" + ",";
						 Command += "'" + path + "'" + ",";
						 Command += "'" + lastname + "'";
						 Command += ");";


						 DataBase A;
						 A.Open_DataBase();
						 A.Insert_DataBase(Command);
						 A.Close_DataBase();


						 this->DialogResult = System::Windows::Forms::DialogResult::OK;

						 Close();  // Fecha a form




					 

				 }










	}


			 String^ count_id(String^ id){


				 DataBase B;
				 String^ aux = id;
				 int cnt = 0;

				 bool teste[5];

				 while (true){
					 B.Open_DataBase();
					 teste[0] = B.Verifica_ID_DataBase("book", aux);
					 B.Close_DataBase();

					 B.Open_DataBase();
					 teste[1] = B.Verifica_ID_DataBase("book_chapter", aux);
					 B.Close_DataBase();

					 B.Open_DataBase();
					 teste[2] = B.Verifica_ID_DataBase("conference", aux);
					 B.Close_DataBase();

					 B.Open_DataBase();
					 teste[3] = B.Verifica_ID_DataBase("journal", aux);
					 B.Close_DataBase();

					 B.Open_DataBase();
					 teste[4] = B.Verifica_ID_DataBase("thesis", aux);
					 B.Close_DataBase();

					 if (teste[0] || teste[1] || teste[2] || teste[3] || teste[4]){  // existe
						 aux = id;
						 cnt++;
						 aux += "_" + cnt.ToString();
					 }
					 else{ // Não existe


						 break;
					 }

				 }



				 return aux;





			 }



	private: System::Void add_thesis_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

				 if (e->KeyCode == Keys::Escape)
				 {
					 this->Close();
				 }


	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 this->DialogResult = System::Windows::Forms::DialogResult::Cancel;

				 Close();  // Fecha a form

	}
	private: System::Void load_pdf_Click(System::Object^  sender, System::EventArgs^  e) {


				 OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
				 String^ path;

				 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK){  // fico com o path do ficheiro PDF


					 // caminho do ficheiro --> openFileDialog1->FileName

					 path = openFileDialog1->FileName;
					 path_pdf->Text = path;

				 }


	}
	};
}
