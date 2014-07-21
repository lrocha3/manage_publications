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
	/// Summary for add_conference
	/// </summary>
	public ref class add_conference : public System::Windows::Forms::Form
	{
	public:
		add_conference(void)
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
		~add_conference()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel_conference;
	private: System::Windows::Forms::MaskedTextBox^  date;
	protected:











	private: System::Windows::Forms::Label^  date_label;


	private: System::Windows::Forms::Label^  country_label;
	private: System::Windows::Forms::TextBox^  country;




	private: System::Windows::Forms::Label^  city_label;
	private: System::Windows::Forms::TextBox^  city;





	private: System::Windows::Forms::Label^  book_title_label;
	private: System::Windows::Forms::TextBox^  book_title;




	private: System::Windows::Forms::TextBox^  title;
	private: System::Windows::Forms::Label^  title_label;



	private: System::Windows::Forms::Label^  author_label;
	private: System::Windows::Forms::TextBox^  author;
	private: System::Windows::Forms::Label^  warning;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  ok_journal;
	private: System::Windows::Forms::Label^  pag_label;
	private: System::Windows::Forms::TextBox^  pag;
	private: System::Windows::Forms::Label^  year_label;

	private: System::Windows::Forms::MaskedTextBox^  year;
	private: System::Windows::Forms::TextBox^  path_pdf;
	private: System::Windows::Forms::Button^  load_pdf;
	private: System::Windows::Forms::Label^  not_pdf_warning;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::ListBox^  list_author;
	private: System::Windows::Forms::Button^  remove_date;

	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::ListBox^  list_date;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(add_conference::typeid));
			this->panel_conference = (gcnew System::Windows::Forms::Panel());
			this->remove_date = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->list_date = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->list_author = (gcnew System::Windows::Forms::ListBox());
			this->not_pdf_warning = (gcnew System::Windows::Forms::Label());
			this->path_pdf = (gcnew System::Windows::Forms::TextBox());
			this->load_pdf = (gcnew System::Windows::Forms::Button());
			this->pag_label = (gcnew System::Windows::Forms::Label());
			this->pag = (gcnew System::Windows::Forms::TextBox());
			this->year_label = (gcnew System::Windows::Forms::Label());
			this->year = (gcnew System::Windows::Forms::MaskedTextBox());
			this->warning = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->ok_journal = (gcnew System::Windows::Forms::Button());
			this->title = (gcnew System::Windows::Forms::TextBox());
			this->title_label = (gcnew System::Windows::Forms::Label());
			this->author_label = (gcnew System::Windows::Forms::Label());
			this->author = (gcnew System::Windows::Forms::TextBox());
			this->date = (gcnew System::Windows::Forms::MaskedTextBox());
			this->date_label = (gcnew System::Windows::Forms::Label());
			this->country_label = (gcnew System::Windows::Forms::Label());
			this->country = (gcnew System::Windows::Forms::TextBox());
			this->city_label = (gcnew System::Windows::Forms::Label());
			this->city = (gcnew System::Windows::Forms::TextBox());
			this->book_title_label = (gcnew System::Windows::Forms::Label());
			this->book_title = (gcnew System::Windows::Forms::TextBox());
			this->panel_conference->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel_conference
			// 
			this->panel_conference->Controls->Add(this->remove_date);
			this->panel_conference->Controls->Add(this->pictureBox3);
			this->panel_conference->Controls->Add(this->pictureBox4);
			this->panel_conference->Controls->Add(this->list_date);
			this->panel_conference->Controls->Add(this->button2);
			this->panel_conference->Controls->Add(this->pictureBox2);
			this->panel_conference->Controls->Add(this->pictureBox1);
			this->panel_conference->Controls->Add(this->list_author);
			this->panel_conference->Controls->Add(this->not_pdf_warning);
			this->panel_conference->Controls->Add(this->path_pdf);
			this->panel_conference->Controls->Add(this->load_pdf);
			this->panel_conference->Controls->Add(this->pag_label);
			this->panel_conference->Controls->Add(this->pag);
			this->panel_conference->Controls->Add(this->year_label);
			this->panel_conference->Controls->Add(this->year);
			this->panel_conference->Controls->Add(this->warning);
			this->panel_conference->Controls->Add(this->button1);
			this->panel_conference->Controls->Add(this->ok_journal);
			this->panel_conference->Controls->Add(this->title);
			this->panel_conference->Controls->Add(this->title_label);
			this->panel_conference->Controls->Add(this->author_label);
			this->panel_conference->Controls->Add(this->author);
			this->panel_conference->Controls->Add(this->date);
			this->panel_conference->Controls->Add(this->date_label);
			this->panel_conference->Controls->Add(this->country_label);
			this->panel_conference->Controls->Add(this->country);
			this->panel_conference->Controls->Add(this->city_label);
			this->panel_conference->Controls->Add(this->city);
			this->panel_conference->Controls->Add(this->book_title_label);
			this->panel_conference->Controls->Add(this->book_title);
			this->panel_conference->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_conference->Location = System::Drawing::Point(0, 0);
			this->panel_conference->Name = L"panel_conference";
			this->panel_conference->Size = System::Drawing::Size(681, 419);
			this->panel_conference->TabIndex = 10;
			// 
			// remove_date
			// 
			this->remove_date->Location = System::Drawing::Point(309, 233);
			this->remove_date->Name = L"remove_date";
			this->remove_date->Size = System::Drawing::Size(120, 23);
			this->remove_date->TabIndex = 72;
			this->remove_date->Text = L"Remove Date";
			this->remove_date->UseVisualStyleBackColor = true;
			this->remove_date->Click += gcnew System::EventHandler(this, &add_conference::remove_date_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.InitialImage")));
			this->pictureBox3->Location = System::Drawing::Point(435, 130);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(32, 37);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 71;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &add_conference::pictureBox3_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.InitialImage")));
			this->pictureBox4->Location = System::Drawing::Point(435, 177);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(32, 35);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 70;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &add_conference::pictureBox4_Click);
			// 
			// list_date
			// 
			this->list_date->FormattingEnabled = true;
			this->list_date->Location = System::Drawing::Point(309, 130);
			this->list_date->Name = L"list_date";
			this->list_date->Size = System::Drawing::Size(120, 82);
			this->list_date->TabIndex = 69;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(309, 93);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 23);
			this->button2->TabIndex = 68;
			this->button2->Text = L"Remove Author";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &add_conference::button2_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.InitialImage")));
			this->pictureBox2->Location = System::Drawing::Point(435, 5);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(32, 37);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 67;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &add_conference::pictureBox2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(435, 48);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(32, 35);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 66;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &add_conference::pictureBox1_Click);
			// 
			// list_author
			// 
			this->list_author->FormattingEnabled = true;
			this->list_author->Location = System::Drawing::Point(309, 5);
			this->list_author->Name = L"list_author";
			this->list_author->Size = System::Drawing::Size(120, 82);
			this->list_author->TabIndex = 65;
			// 
			// not_pdf_warning
			// 
			this->not_pdf_warning->AutoSize = true;
			this->not_pdf_warning->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->not_pdf_warning->ForeColor = System::Drawing::Color::Red;
			this->not_pdf_warning->Location = System::Drawing::Point(12, 241);
			this->not_pdf_warning->Name = L"not_pdf_warning";
			this->not_pdf_warning->Size = System::Drawing::Size(0, 15);
			this->not_pdf_warning->TabIndex = 59;
			// 
			// path_pdf
			// 
			this->path_pdf->Location = System::Drawing::Point(165, 218);
			this->path_pdf->Name = L"path_pdf";
			this->path_pdf->Size = System::Drawing::Size(100, 20);
			this->path_pdf->TabIndex = 8;
			this->path_pdf->Visible = false;
			// 
			// load_pdf
			// 
			this->load_pdf->ForeColor = System::Drawing::SystemColors::ControlText;
			this->load_pdf->Location = System::Drawing::Point(12, 215);
			this->load_pdf->Name = L"load_pdf";
			this->load_pdf->Size = System::Drawing::Size(75, 23);
			this->load_pdf->TabIndex = 9;
			this->load_pdf->Text = L"Load PDF";
			this->load_pdf->UseVisualStyleBackColor = true;
			this->load_pdf->Click += gcnew System::EventHandler(this, &add_conference::load_pdf_Click);
			// 
			// pag_label
			// 
			this->pag_label->AutoSize = true;
			this->pag_label->Location = System::Drawing::Point(12, 186);
			this->pag_label->Name = L"pag_label";
			this->pag_label->Size = System::Drawing::Size(146, 13);
			this->pag_label->TabIndex = 56;
			this->pag_label->Text = L"Interval of Pages ( initial;end )";
			// 
			// pag
			// 
			this->pag->Location = System::Drawing::Point(165, 182);
			this->pag->Name = L"pag";
			this->pag->Size = System::Drawing::Size(100, 20);
			this->pag->TabIndex = 7;
			// 
			// year_label
			// 
			this->year_label->AutoSize = true;
			this->year_label->Location = System::Drawing::Point(12, 160);
			this->year_label->Name = L"year_label";
			this->year_label->Size = System::Drawing::Size(29, 13);
			this->year_label->TabIndex = 54;
			this->year_label->Text = L"Year";
			// 
			// year
			// 
			this->year->Location = System::Drawing::Point(165, 156);
			this->year->Mask = L"0000";
			this->year->Name = L"year";
			this->year->Size = System::Drawing::Size(100, 20);
			this->year->TabIndex = 6;
			// 
			// warning
			// 
			this->warning->AutoSize = true;
			this->warning->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->warning->ForeColor = System::Drawing::Color::Red;
			this->warning->Location = System::Drawing::Point(252, 273);
			this->warning->Name = L"warning";
			this->warning->Size = System::Drawing::Size(0, 15);
			this->warning->TabIndex = 52;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(309, 303);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Cancel";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &add_conference::button1_Click);
			// 
			// ok_journal
			// 
			this->ok_journal->Location = System::Drawing::Point(228, 303);
			this->ok_journal->Name = L"ok_journal";
			this->ok_journal->Size = System::Drawing::Size(75, 23);
			this->ok_journal->TabIndex = 10;
			this->ok_journal->Text = L"OK";
			this->ok_journal->UseVisualStyleBackColor = true;
			this->ok_journal->Click += gcnew System::EventHandler(this, &add_conference::ok_journal_Click);
			// 
			// title
			// 
			this->title->Location = System::Drawing::Point(165, 30);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(100, 20);
			this->title->TabIndex = 1;
			// 
			// title_label
			// 
			this->title_label->AutoSize = true;
			this->title_label->Location = System::Drawing::Point(12, 37);
			this->title_label->Name = L"title_label";
			this->title_label->Size = System::Drawing::Size(27, 13);
			this->title_label->TabIndex = 44;
			this->title_label->Text = L"Title";
			// 
			// author_label
			// 
			this->author_label->AutoSize = true;
			this->author_label->Location = System::Drawing::Point(12, 9);
			this->author_label->Name = L"author_label";
			this->author_label->Size = System::Drawing::Size(148, 13);
			this->author_label->TabIndex = 39;
			this->author_label->Text = L"Author ( First Name;Surname )";
			// 
			// author
			// 
			this->author->Location = System::Drawing::Point(165, 5);
			this->author->Name = L"author";
			this->author->Size = System::Drawing::Size(100, 20);
			this->author->TabIndex = 0;
			this->author->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &add_conference::author_KeyDown);
			// 
			// date
			// 
			this->date->Location = System::Drawing::Point(165, 130);
			this->date->Mask = L"00/00/0000";
			this->date->Name = L"date";
			this->date->Size = System::Drawing::Size(100, 20);
			this->date->TabIndex = 5;
			this->date->ValidatingType = System::DateTime::typeid;
			this->date->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &add_conference::date_KeyDown);
			// 
			// date_label
			// 
			this->date_label->AutoSize = true;
			this->date_label->Location = System::Drawing::Point(12, 133);
			this->date_label->Name = L"date_label";
			this->date_label->Size = System::Drawing::Size(30, 13);
			this->date_label->TabIndex = 22;
			this->date_label->Text = L"Date";
			// 
			// country_label
			// 
			this->country_label->AutoSize = true;
			this->country_label->Location = System::Drawing::Point(12, 110);
			this->country_label->Name = L"country_label";
			this->country_label->Size = System::Drawing::Size(43, 13);
			this->country_label->TabIndex = 20;
			this->country_label->Text = L"Country";
			// 
			// country
			// 
			this->country->Location = System::Drawing::Point(165, 107);
			this->country->Name = L"country";
			this->country->Size = System::Drawing::Size(100, 20);
			this->country->TabIndex = 4;
			// 
			// city_label
			// 
			this->city_label->AutoSize = true;
			this->city_label->Location = System::Drawing::Point(12, 85);
			this->city_label->Name = L"city_label";
			this->city_label->Size = System::Drawing::Size(24, 13);
			this->city_label->TabIndex = 11;
			this->city_label->Text = L"City";
			// 
			// city
			// 
			this->city->Location = System::Drawing::Point(165, 82);
			this->city->Name = L"city";
			this->city->Size = System::Drawing::Size(100, 20);
			this->city->TabIndex = 3;
			// 
			// book_title_label
			// 
			this->book_title_label->AutoSize = true;
			this->book_title_label->Location = System::Drawing::Point(12, 60);
			this->book_title_label->Name = L"book_title_label";
			this->book_title_label->Size = System::Drawing::Size(55, 13);
			this->book_title_label->TabIndex = 9;
			this->book_title_label->Text = L"Book Title";
			// 
			// book_title
			// 
			this->book_title->Location = System::Drawing::Point(165, 58);
			this->book_title->Name = L"book_title";
			this->book_title->Size = System::Drawing::Size(100, 20);
			this->book_title->TabIndex = 2;
			// 
			// add_conference
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(681, 419);
			this->Controls->Add(this->panel_conference);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->Name = L"add_conference";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"add_conference";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &add_conference::add_conference_KeyDown);
			this->panel_conference->ResumeLayout(false);
			this->panel_conference->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


	

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
	

	private: System::Void add_conference_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

				 if (e->KeyCode == Keys::Escape)
				 {
					 this->Close();
				 }

	}
	private: System::Void ok_journal_Click(System::Object^  sender, System::EventArgs^  e) {




				 String^ autores = "";
				 String^ datas = "";
				 String^ pag_num;
				 String^ id = "";
				 String^ aux = "";

				 String^ lastname = "";
				 warning->Text = "";


				 // Definição da cor dos labels dos campos
				 author_label->ForeColor = SystemColors::ControlText;
				 title_label->ForeColor = SystemColors::ControlText;
				 book_title_label->ForeColor = SystemColors::ControlText;
				 city_label->ForeColor = SystemColors::ControlText;
				 country_label->ForeColor = SystemColors::ControlText;
				 date_label->ForeColor = SystemColors::ControlText;
				 year_label->ForeColor = SystemColors::ControlText;
				 pag_label->ForeColor = SystemColors::ControlText;
				 load_pdf->ForeColor = SystemColors::ControlText;




				 bool erro = 0;





				 if (String::IsNullOrEmpty(title->Text)){

					 title_label->ForeColor = System::Drawing::Color::Red;
					 warning->Text = "Fill the red fields please!";
					 erro = 1;
				 }

				 if (String::IsNullOrEmpty(book_title->Text)){

					 book_title_label->ForeColor = System::Drawing::Color::Red;
					 warning->Text = "Fill the red fields please!";
					 erro = 1;
				 }

				 if (String::IsNullOrEmpty(city->Text)){

					 city_label->ForeColor = System::Drawing::Color::Red;
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

				 if (String::IsNullOrEmpty(pag->Text)){





					 pag_label->ForeColor = System::Drawing::Color::Red;
					 warning->Text = "Fill the red fields please!";
					 erro = 1;
				 }
				 else
				 {




					 String^ aux1 = "";  // inicio pag
					 String^ aux2 = "";  // fim pag
					 String^ aux3 = pag->Text;
					 int length;
					 int a;

					 a = aux3->IndexOf(";");

					 if (a != -1){

						 length = aux3->Length;
						 aux1 = aux3->Substring(0, a);
						 aux2 = aux3->Substring(a + 1, length - (a + 1));

						 if (aux1->Length >= 1 && aux2->Length >= 1){ // esta correcto --> ponho no formato numero inicial / numero final

							 pag_num = aux1 + "/" + aux2;

						 }
						 else
						 {
							 warning->Text = "Fill the red fields please!";
							 pag_label->ForeColor = System::Drawing::Color::Red;
							 erro = 1;
						 }
					 }
					 else
					 {
						 warning->Text = "Fill the red fields please!";
						 pag_label->ForeColor = System::Drawing::Color::Red;
						 erro = 1;
					 }








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



				 int cnt = list_author->Items->Count;

				 if (cnt == 0){

					 author_label->ForeColor = System::Drawing::Color::Red;
					 warning->Text += "Fill the red fields please!";
					 erro = 1;
				 }
				 else if (!erro){



					 int a;
					 int length;
					 String ^ aux;

					 for (int i = 0; i < cnt - 1; i++){   // Cntl + A ; Cntl + K ; Cntl + F  -- Identa 

						 aux = "";
						 aux += list_author->GetItemText(list_author->Items[i]);
						 a = aux->IndexOf(";");
						 length = aux->Length;
						 aux = aux->Substring(0, a) + " " + aux->Substring(a + 1, length - (a + 1));



						 autores += aux + ", ";

					 }


					 // CODIGO extra
					 aux = "";
					 aux += list_author->GetItemText(list_author->Items[cnt - 1]);
					 a = aux->IndexOf(";");
					 length = aux->Length;
					 aux = aux->Substring(0, a) + " " + aux->Substring(a + 1, length - (a + 1));




					 // FIM extra
					 autores += aux;






					 if (cnt == 1){


						 String^ aux1 = "";  // apelido
						 String^ aux2 = "";

						 aux2 += list_author->GetItemText(list_author->Items[0]);

						 int length;
						 int a;

						 a = aux2->IndexOf(";");

						 length = aux2->Length;
						 aux1 = aux2->Substring(a + 1, length - (a + 1));


						 id += aux1->Substring(0, 3);
						 id += year->Text->Substring(2, 2);





					 }


					 else if (cnt == 2){


						 String^ aux1 = "";  // apelido
						 String^ aux2 = "";


						 // Primeiro autor
						 aux2 += list_author->GetItemText(list_author->Items[0]);

						 int length;
						 int a;

						 a = aux2->IndexOf(";");

						 length = aux2->Length;
						 aux1 = aux2->Substring(a + 1, length - (a + 1));
						 id += aux1->Substring(0, 1);

						 // Segundo autor

						 aux2 = "";
						 aux2 += list_author->GetItemText(list_author->Items[1]);



						 a = aux2->IndexOf(";");

						 length = aux2->Length;
						 aux1 = aux2->Substring(a + 1, length - (a + 1));
						 id += aux1->Substring(0, 1);

						 // ANO

						 id += year->Text->Substring(2, 2);


					 }

					 else if (cnt == 3){


						 String^ aux1 = "";  // apelido
						 String^ aux2 = "";


						 // Primeiro autor
						 aux2 += list_author->GetItemText(list_author->Items[0]);

						 int length;
						 int a;

						 a = aux2->IndexOf(";");

						 length = aux2->Length;
						 aux1 = aux2->Substring(a + 1, length - (a + 1));
						 id += aux1->Substring(0, 1);

						 // Segundo autor

						 aux2 = "";
						 aux2 += list_author->GetItemText(list_author->Items[1]);



						 a = aux2->IndexOf(";");

						 length = aux2->Length;
						 aux1 = aux2->Substring(a + 1, length - (a + 1));
						 id += aux1->Substring(0, 1);

						 // Terceiro autor

						 aux2 = "";
						 aux2 += list_author->GetItemText(list_author->Items[2]);



						 a = aux2->IndexOf(";");

						 length = aux2->Length;
						 aux1 = aux2->Substring(a + 1, length - (a + 1));
						 id += aux1->Substring(0, 1);

						 // ANO

						 id += year->Text->Substring(2, 2);





					 }
					 else{ // mais que tres
						 String^ aux1 = "";  // apelido
						 String^ aux2 = "";


						 // Primeiro autor
						 aux2 += list_author->GetItemText(list_author->Items[0]);

						 int length;
						 int a;

						 a = aux2->IndexOf(";");

						 length = aux2->Length;
						 aux1 = aux2->Substring(a + 1, length - (a + 1));
						 id += aux1->Substring(0, 1);

						 // Segundo autor

						 aux2 = "";
						 aux2 += list_author->GetItemText(list_author->Items[1]);



						 a = aux2->IndexOf(";");

						 length = aux2->Length;
						 aux1 = aux2->Substring(a + 1, length - (a + 1));
						 id += aux1->Substring(0, 1);

						 // Terceiro autor

						 aux2 = "";
						 aux2 += list_author->GetItemText(list_author->Items[2]);



						 a = aux2->IndexOf(";");

						 length = aux2->Length;
						 aux1 = aux2->Substring(a + 1, length - (a + 1));
						 id += aux1->Substring(0, 1);

						 id += "+";

						 // ANO

						 id += year->Text->Substring(2, 2);


					 }






				 }






				 cnt = list_date->Items->Count;

				 if (cnt == 0){

					 date_label->ForeColor = System::Drawing::Color::Red;
					 warning->Text = "Fill the red fields please!";
					 erro = 1;
				 }
				 else{





					 for (int i = 0; i < cnt - 1; i++){   // Cntl + A ; Cntl + K ; Cntl + F  -- Identa 

						 datas += list_date->GetItemText(list_author->Items[i]) +" - ";


					 }

					 datas += list_date->GetItemText(list_author->Items[cnt - 1]);



				 }












				 if (!erro){



					 
					 


						 
						 // Confirmação de unicidade do id!

						 id = count_id(id);

						 // FIM unicidade







						 // Guardo o apelido do primeiro nome:

						 lastname = "";
						 String^ aux2 = "";

						 aux2 += list_author->GetItemText(list_author->Items[0]);

						 int length;
						 int a;

						 a = aux2->IndexOf(";");

						 length = aux2->Length;
						 lastname = aux2->Substring(a + 1, length - (a + 1));





						 String^ path = Environment::CurrentDirectory + "\\Publications\\Conference\\" + id + ".pdf";


						 System::IO::File::Copy(path_pdf->Text, path, true);


						 String^ Command = "INSERT INTO conference(id, authors, title, book_title, city, country, date , year, num_pages, path, lastname) VALUES (";
						 Command += "'" + id + "'" + ",";
						 Command += "'" + autores + "'" + ",";
						 Command += "'" + title->Text + "'" + ",";
						 Command += "'" + book_title->Text + "'" + ",";
						 Command += "'" + city->Text + "'" + ",";
						 Command += "'" + country->Text + "'" + ",";
						 Command += "'" + datas + "'" + ",";
						 Command += "'" + year->Text + "'" + ",";
						 Command += "'" + pag_num + "'" + ",";
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



	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

				 list_author->Items->Remove(list_author->SelectedItem);



	}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {


			 if (list_author->SelectedItem != nullptr){

				 int indice = list_author->Items->IndexOf(list_author->SelectedItem);

				 int cnt = list_author->Items->Count;



				 if (indice + 1 != cnt){ // se ja nao é o primeiro

					 String^ aux1 = list_author->GetItemText(list_author->SelectedItem);
					 String^ aux2 = list_author->GetItemText(list_author->Items[indice + 1]);



					 list_author->Items->RemoveAt(indice + 1);
					 list_author->Items->RemoveAt(indice);


					 list_author->Items->Insert(indice, aux2);
					 list_author->Items->Insert(indice + 1, aux1);

					 list_author->SelectedItem = list_author->Items[indice + 1];


				 }

			 }



}
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {


			 if (list_author->SelectedItem != nullptr){

				 int indice = list_author->Items->IndexOf(list_author->SelectedItem);

				 int cnt = list_author->Items->Count;



				 if (indice != 0){ // se ja nao é o primeiro

					 String^ aux1 = list_author->GetItemText(list_author->SelectedItem);
					 String^ aux2 = list_author->GetItemText(list_author->Items[indice - 1]);


					 list_author->Items->RemoveAt(indice);
					 list_author->Items->RemoveAt(indice - 1);

					 list_author->Items->Insert(indice - 1, aux1);
					 list_author->Items->Insert(indice, aux2);

					 list_author->SelectedItem = list_author->Items[indice - 1];


				 }

			 }




}
private: System::Void author_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {




			 if (e->KeyCode == Keys::Enter)
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

						 list_author->Items->Add(author->Text);


						 author->Text = "";
						 warning->Text = "";







					 }
					 else
					 {
						 warning->Text = "Insert the name of the author correctly!";
					 }
				 }
				 else
				 {
					 warning->Text = "Insert the name of the author correctly!";
				 }


				












			 }



}
private: System::Void remove_date_Click(System::Object^  sender, System::EventArgs^  e) {

			 list_date->Items->Remove(list_date->SelectedItem);

}
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {


			 if (list_date->SelectedItem != nullptr){

				 int indice = list_date->Items->IndexOf(list_date->SelectedItem);

				 int cnt = list_date->Items->Count;



				 if (indice != 0){ // se ja nao é o primeiro

					 String^ aux1 = list_date->GetItemText(list_date->SelectedItem);
					 String^ aux2 = list_date->GetItemText(list_date->Items[indice - 1]);


					 list_date->Items->RemoveAt(indice);
					 list_date->Items->RemoveAt(indice - 1);

					 list_date->Items->Insert(indice - 1, aux1);
					 list_date->Items->Insert(indice, aux2);
					 
					 list_date->SelectedItem = list_date->Items[indice - 1];


				 }

			 }



}
private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {


			 if (list_date->SelectedItem != nullptr){

				 int indice = list_date->Items->IndexOf(list_date->SelectedItem);

				 int cnt = list_date->Items->Count;



				 if (indice + 1 != cnt){ // se ja nao é o primeiro

					 String^ aux1 = list_date->GetItemText(list_date->SelectedItem);
					 String^ aux2 = list_date->GetItemText(list_date->Items[indice + 1]);



					 list_date->Items->RemoveAt(indice + 1);
					 list_date->Items->RemoveAt(indice);


					 list_date->Items->Insert(indice, aux2);
					 list_date->Items->Insert(indice + 1, aux1);

					 list_date->SelectedItem = list_date->Items[indice + 1];


				 }

			 }



}
private: System::Void date_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {



			 if (e->KeyCode == Keys::Enter)
			 {


				 int length;
				 length = date->Text->Length;

				 if (length < 10)
					 warning->Text = "Insert the date correctly!";
				 else{
					 list_date->Items->Add(date->Text);
					 date->Text = "";
					 warning->Text = "";
				 }

			 }



}
};
}
