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
	/// Summary for add_journal
	/// </summary>
	public ref class add_journal : public System::Windows::Forms::Form
	{
	public:
		add_journal(void)
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
		~add_journal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel_journal;
	private: System::Windows::Forms::Label^  issn_label;
	private: System::Windows::Forms::TextBox^  issn;
	protected:




	private: System::Windows::Forms::Label^  issue_label;










	private: System::Windows::Forms::TextBox^  issue;
	private: System::Windows::Forms::Button^  ok_journal;
	private: System::Windows::Forms::Label^  volume_label;
	private: System::Windows::Forms::TextBox^  volume;




	private: System::Windows::Forms::Label^  journal_label;
	private: System::Windows::Forms::TextBox^  journal;







	private: System::Windows::Forms::Label^  author_label;
	private: System::Windows::Forms::TextBox^  author;
	private: System::Windows::Forms::TextBox^  title;
	private: System::Windows::Forms::Label^  title_label;
	private: System::Windows::Forms::Label^  publisher_label;
	private: System::Windows::Forms::TextBox^  publisher;
	private: System::Windows::Forms::Label^  pag_label;
	private: System::Windows::Forms::TextBox^  pag;
	private: System::Windows::Forms::Label^  year_label;
	private: System::Windows::Forms::MaskedTextBox^  year;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  warning;
	private: System::Windows::Forms::TextBox^  path_pdf;
	private: System::Windows::Forms::Button^  load_pdf;
	private: System::Windows::Forms::Label^  not_pdf_warning;


	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::ListBox^  list_author;
	private: System::Windows::Forms::Button^  button2;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(add_journal::typeid));
			this->panel_journal = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->list_author = (gcnew System::Windows::Forms::ListBox());
			this->not_pdf_warning = (gcnew System::Windows::Forms::Label());
			this->warning = (gcnew System::Windows::Forms::Label());
			this->path_pdf = (gcnew System::Windows::Forms::TextBox());
			this->load_pdf = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pag_label = (gcnew System::Windows::Forms::Label());
			this->pag = (gcnew System::Windows::Forms::TextBox());
			this->year_label = (gcnew System::Windows::Forms::Label());
			this->year = (gcnew System::Windows::Forms::MaskedTextBox());
			this->publisher_label = (gcnew System::Windows::Forms::Label());
			this->publisher = (gcnew System::Windows::Forms::TextBox());
			this->title = (gcnew System::Windows::Forms::TextBox());
			this->title_label = (gcnew System::Windows::Forms::Label());
			this->author_label = (gcnew System::Windows::Forms::Label());
			this->author = (gcnew System::Windows::Forms::TextBox());
			this->issn_label = (gcnew System::Windows::Forms::Label());
			this->issn = (gcnew System::Windows::Forms::TextBox());
			this->issue_label = (gcnew System::Windows::Forms::Label());
			this->issue = (gcnew System::Windows::Forms::TextBox());
			this->ok_journal = (gcnew System::Windows::Forms::Button());
			this->volume_label = (gcnew System::Windows::Forms::Label());
			this->volume = (gcnew System::Windows::Forms::TextBox());
			this->journal_label = (gcnew System::Windows::Forms::Label());
			this->journal = (gcnew System::Windows::Forms::TextBox());
			this->panel_journal->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel_journal
			// 
			this->panel_journal->Controls->Add(this->button2);
			this->panel_journal->Controls->Add(this->pictureBox2);
			this->panel_journal->Controls->Add(this->pictureBox1);
			this->panel_journal->Controls->Add(this->list_author);
			this->panel_journal->Controls->Add(this->not_pdf_warning);
			this->panel_journal->Controls->Add(this->warning);
			this->panel_journal->Controls->Add(this->path_pdf);
			this->panel_journal->Controls->Add(this->load_pdf);
			this->panel_journal->Controls->Add(this->button1);
			this->panel_journal->Controls->Add(this->pag_label);
			this->panel_journal->Controls->Add(this->pag);
			this->panel_journal->Controls->Add(this->year_label);
			this->panel_journal->Controls->Add(this->year);
			this->panel_journal->Controls->Add(this->publisher_label);
			this->panel_journal->Controls->Add(this->publisher);
			this->panel_journal->Controls->Add(this->title);
			this->panel_journal->Controls->Add(this->title_label);
			this->panel_journal->Controls->Add(this->author_label);
			this->panel_journal->Controls->Add(this->author);
			this->panel_journal->Controls->Add(this->issn_label);
			this->panel_journal->Controls->Add(this->issn);
			this->panel_journal->Controls->Add(this->issue_label);
			this->panel_journal->Controls->Add(this->issue);
			this->panel_journal->Controls->Add(this->ok_journal);
			this->panel_journal->Controls->Add(this->volume_label);
			this->panel_journal->Controls->Add(this->volume);
			this->panel_journal->Controls->Add(this->journal_label);
			this->panel_journal->Controls->Add(this->journal);
			this->panel_journal->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_journal->Location = System::Drawing::Point(0, 0);
			this->panel_journal->Name = L"panel_journal";
			this->panel_journal->Size = System::Drawing::Size(681, 419);
			this->panel_journal->TabIndex = 6;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(338, 127);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 23);
			this->button2->TabIndex = 64;
			this->button2->Text = L"Remove Author";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &add_journal::button2_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.InitialImage")));
			this->pictureBox2->Location = System::Drawing::Point(464, 5);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(32, 44);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 63;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &add_journal::pictureBox2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(464, 55);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(32, 45);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 62;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &add_journal::pictureBox1_Click);
			// 
			// list_author
			// 
			this->list_author->FormattingEnabled = true;
			this->list_author->Location = System::Drawing::Point(338, 5);
			this->list_author->Name = L"list_author";
			this->list_author->Size = System::Drawing::Size(120, 95);
			this->list_author->TabIndex = 61;
			// 
			// not_pdf_warning
			// 
			this->not_pdf_warning->AutoSize = true;
			this->not_pdf_warning->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->not_pdf_warning->ForeColor = System::Drawing::Color::Red;
			this->not_pdf_warning->Location = System::Drawing::Point(13, 275);
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
			this->warning->Location = System::Drawing::Point(281, 324);
			this->warning->Name = L"warning";
			this->warning->Size = System::Drawing::Size(0, 15);
			this->warning->TabIndex = 49;
			// 
			// path_pdf
			// 
			this->path_pdf->Location = System::Drawing::Point(165, 252);
			this->path_pdf->Name = L"path_pdf";
			this->path_pdf->Size = System::Drawing::Size(100, 20);
			this->path_pdf->TabIndex = 9;
			this->path_pdf->Visible = false;
			// 
			// load_pdf
			// 
			this->load_pdf->ForeColor = System::Drawing::SystemColors::ControlText;
			this->load_pdf->Location = System::Drawing::Point(15, 249);
			this->load_pdf->Name = L"load_pdf";
			this->load_pdf->Size = System::Drawing::Size(75, 23);
			this->load_pdf->TabIndex = 10;
			this->load_pdf->Text = L"Load PDF";
			this->load_pdf->UseVisualStyleBackColor = true;
			this->load_pdf->Click += gcnew System::EventHandler(this, &add_journal::load_pdf_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(338, 354);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Cancel";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &add_journal::button1_Click);
			// 
			// pag_label
			// 
			this->pag_label->AutoSize = true;
			this->pag_label->Location = System::Drawing::Point(12, 198);
			this->pag_label->Name = L"pag_label";
			this->pag_label->Size = System::Drawing::Size(146, 13);
			this->pag_label->TabIndex = 43;
			this->pag_label->Text = L"Interval of Pages ( initial;end )";
			// 
			// pag
			// 
			this->pag->Location = System::Drawing::Point(165, 194);
			this->pag->Name = L"pag";
			this->pag->Size = System::Drawing::Size(100, 20);
			this->pag->TabIndex = 7;
			// 
			// year_label
			// 
			this->year_label->AutoSize = true;
			this->year_label->Location = System::Drawing::Point(12, 172);
			this->year_label->Name = L"year_label";
			this->year_label->Size = System::Drawing::Size(29, 13);
			this->year_label->TabIndex = 41;
			this->year_label->Text = L"Year";
			// 
			// year
			// 
			this->year->Location = System::Drawing::Point(165, 168);
			this->year->Mask = L"0000";
			this->year->Name = L"year";
			this->year->Size = System::Drawing::Size(100, 20);
			this->year->TabIndex = 6;
			// 
			// publisher_label
			// 
			this->publisher_label->AutoSize = true;
			this->publisher_label->Location = System::Drawing::Point(12, 142);
			this->publisher_label->Name = L"publisher_label";
			this->publisher_label->Size = System::Drawing::Size(50, 13);
			this->publisher_label->TabIndex = 39;
			this->publisher_label->Text = L"Publisher";
			// 
			// publisher
			// 
			this->publisher->Location = System::Drawing::Point(165, 138);
			this->publisher->Name = L"publisher";
			this->publisher->Size = System::Drawing::Size(100, 20);
			this->publisher->TabIndex = 5;
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
			this->title_label->TabIndex = 37;
			this->title_label->Text = L"Title";
			// 
			// author_label
			// 
			this->author_label->AutoSize = true;
			this->author_label->Location = System::Drawing::Point(12, 9);
			this->author_label->Name = L"author_label";
			this->author_label->Size = System::Drawing::Size(148, 13);
			this->author_label->TabIndex = 32;
			this->author_label->Text = L"Author ( First Name;Surname )";
			// 
			// author
			// 
			this->author->Location = System::Drawing::Point(165, 5);
			this->author->Name = L"author";
			this->author->Size = System::Drawing::Size(100, 20);
			this->author->TabIndex = 0;
			this->author->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &add_journal::author_KeyDown);
			// 
			// issn_label
			// 
			this->issn_label->AutoSize = true;
			this->issn_label->Location = System::Drawing::Point(12, 222);
			this->issn_label->Name = L"issn_label";
			this->issn_label->Size = System::Drawing::Size(32, 13);
			this->issn_label->TabIndex = 30;
			this->issn_label->Text = L"ISSN";
			// 
			// issn
			// 
			this->issn->Location = System::Drawing::Point(165, 218);
			this->issn->Name = L"issn";
			this->issn->Size = System::Drawing::Size(100, 20);
			this->issn->TabIndex = 8;
			// 
			// issue_label
			// 
			this->issue_label->AutoSize = true;
			this->issue_label->Location = System::Drawing::Point(12, 118);
			this->issue_label->Name = L"issue_label";
			this->issue_label->Size = System::Drawing::Size(32, 13);
			this->issue_label->TabIndex = 20;
			this->issue_label->Text = L"Issue";
			// 
			// issue
			// 
			this->issue->Location = System::Drawing::Point(165, 114);
			this->issue->Name = L"issue";
			this->issue->Size = System::Drawing::Size(100, 20);
			this->issue->TabIndex = 4;
			// 
			// ok_journal
			// 
			this->ok_journal->Location = System::Drawing::Point(257, 354);
			this->ok_journal->Name = L"ok_journal";
			this->ok_journal->Size = System::Drawing::Size(75, 23);
			this->ok_journal->TabIndex = 11;
			this->ok_journal->Text = L"OK";
			this->ok_journal->UseVisualStyleBackColor = true;
			this->ok_journal->Click += gcnew System::EventHandler(this, &add_journal::ok_journal_Click);
			// 
			// volume_label
			// 
			this->volume_label->AutoSize = true;
			this->volume_label->Location = System::Drawing::Point(12, 92);
			this->volume_label->Name = L"volume_label";
			this->volume_label->Size = System::Drawing::Size(42, 13);
			this->volume_label->TabIndex = 11;
			this->volume_label->Text = L"Volume";
			// 
			// volume
			// 
			this->volume->Location = System::Drawing::Point(165, 88);
			this->volume->Name = L"volume";
			this->volume->Size = System::Drawing::Size(100, 20);
			this->volume->TabIndex = 3;
			// 
			// journal_label
			// 
			this->journal_label->AutoSize = true;
			this->journal_label->Location = System::Drawing::Point(13, 61);
			this->journal_label->Name = L"journal_label";
			this->journal_label->Size = System::Drawing::Size(41, 13);
			this->journal_label->TabIndex = 9;
			this->journal_label->Text = L"Journal";
			// 
			// journal
			// 
			this->journal->Location = System::Drawing::Point(166, 57);
			this->journal->Name = L"journal";
			this->journal->Size = System::Drawing::Size(100, 20);
			this->journal->TabIndex = 2;
			// 
			// add_journal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(681, 419);
			this->Controls->Add(this->panel_journal);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->Name = L"add_journal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"add_journal";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &add_journal::add_journal_KeyDown);
			this->panel_journal->ResumeLayout(false);
			this->panel_journal->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void ok_journal_Click(System::Object^  sender, System::EventArgs^  e) {





				 String^ autores = "";
				 String^ id = "";
				 String^ pag_num = "";
				 String^ aux = "";

				 String^ lastname = "";
				 warning->Text = "";


				 // Definição da cor dos labels dos campos
				 author_label->ForeColor = SystemColors::ControlText;
				 title_label->ForeColor = SystemColors::ControlText;
				 journal_label->ForeColor = SystemColors::ControlText;
				 volume_label->ForeColor = SystemColors::ControlText;
				 issue_label->ForeColor = SystemColors::ControlText;
				 publisher_label->ForeColor = SystemColors::ControlText;
				 year_label->ForeColor = SystemColors::ControlText;
				 pag_label->ForeColor = SystemColors::ControlText;
				 issn_label->ForeColor = SystemColors::ControlText;
				 load_pdf->ForeColor = SystemColors::ControlText;




				 bool erro = 0;





				 if (String::IsNullOrEmpty(title->Text)){

					 title_label->ForeColor = System::Drawing::Color::Red;
					 warning->Text = "Fill the red fields please!";
					 erro = 1;
				 }

				 if (String::IsNullOrEmpty(journal->Text)){

					 journal_label->ForeColor = System::Drawing::Color::Red;
					 warning->Text = "Fill the red fields please!";
					 erro = 1;
				 }
				 if (String::IsNullOrEmpty(volume->Text)){

					 volume_label->ForeColor = System::Drawing::Color::Red;
					 warning->Text = "Fill the red fields please!";
					 erro = 1;
				 }



				 if (String::IsNullOrEmpty(issue->Text)){

					 issue_label->ForeColor = System::Drawing::Color::Red;
					 warning->Text = "Fill the red fields please!";
					 erro = 1;
				 }

				 if (String::IsNullOrEmpty(publisher->Text)){

					 publisher_label->ForeColor = System::Drawing::Color::Red;
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

				 if (String::IsNullOrEmpty(issn->Text)){

					 issn_label->ForeColor = System::Drawing::Color::Red;
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









				 int cnt = list_author->Items->Count;

				 if (cnt == 0){

					 author_label->ForeColor = System::Drawing::Color::Red;
					 warning->Text = "Fill the red fields please!";
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





						 String^ path = Environment::CurrentDirectory + "\\Publications\\Journal\\" + id + ".pdf";


						 System::IO::File::Copy(path_pdf->Text, path, true);


						 String^ Command = "INSERT INTO journal(id, authors, title, journal, volume, issue, publisher, year, num_pages, issn, path, lastname) VALUES (";
						 Command += "'" + id + "'" + ",";
						 Command += "'" + autores + "'" + ",";
						 Command += "'" + title->Text + "'" + ",";
						 Command += "'" + journal->Text + "'" + ",";
						 Command += "'" + volume->Text + "'" + ",";
						 Command += "'" + issue->Text + "'" + ",";
						 Command += "'" + publisher->Text + "'" + ",";
						 Command += "'" + year->Text + "'" + ",";
						 Command += "'" + pag_num + "'" + ",";
						 Command += "'" + issn->Text + "'" + ",";
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



	private: System::Void load_pdf_Click(System::Object^  sender, System::EventArgs^  e) {



				 OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
				 String^ path;

				 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK){  // fico com o path do ficheiro PDF


					 // caminho do ficheiro --> openFileDialog1->FileName

					 path = openFileDialog1->FileName;
					 path_pdf->Text = path;

				 }


	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 this->DialogResult = System::Windows::Forms::DialogResult::Cancel;

				 Close();  // Fecha a form


	}
	
	
	private: System::Void add_journal_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

				 if (e->KeyCode == Keys::Escape)
				 {
					 this->Close();
				 }

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
};
}
