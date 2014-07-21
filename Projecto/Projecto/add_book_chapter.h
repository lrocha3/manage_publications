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
	/// Summary for add_book_chapter
	/// </summary>
	public ref class add_book_chapter : public System::Windows::Forms::Form
	{
	public:
		add_book_chapter(void)
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
		~add_book_chapter()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel_book_chapter;
	private: System::Windows::Forms::Label^  series_label;
	protected:


	private: System::Windows::Forms::TextBox^  series;
	private: System::Windows::Forms::Label^  isbn_label;


	private: System::Windows::Forms::TextBox^  isbn;
	private: System::Windows::Forms::Label^  publisher_label;


	private: System::Windows::Forms::TextBox^  publisher;
	private: System::Windows::Forms::Label^  pag_label;



	private: System::Windows::Forms::TextBox^  pag;
	private: System::Windows::Forms::Label^  year_label;




	private: System::Windows::Forms::MaskedTextBox^  year;





	private: System::Windows::Forms::Label^  edition_label;

	private: System::Windows::Forms::TextBox^  edition;

	private: System::Windows::Forms::Button^  ok_book_chapter;
	private: System::Windows::Forms::Label^  author_label;
	private: System::Windows::Forms::Label^  editor_label;


	private: System::Windows::Forms::TextBox^  author;
	private: System::Windows::Forms::TextBox^  editor;
	private: System::Windows::Forms::TextBox^  title;
	private: System::Windows::Forms::Label^  book_title_label;






	private: System::Windows::Forms::Label^  title_label;

	private: System::Windows::Forms::TextBox^  book_title;

	private: System::Windows::Forms::TextBox^  path_pdf;

	private: System::Windows::Forms::Button^  load_pdf;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  warning;
	private: System::Windows::Forms::Label^  not_pdf_warning;

	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private: System::Windows::Forms::ListBox^  list_author;
	private: System::Windows::Forms::Button^  remove;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(add_book_chapter::typeid));
			this->panel_book_chapter = (gcnew System::Windows::Forms::Panel());
			this->remove = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->list_author = (gcnew System::Windows::Forms::ListBox());
			this->not_pdf_warning = (gcnew System::Windows::Forms::Label());
			this->warning = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->path_pdf = (gcnew System::Windows::Forms::TextBox());
			this->load_pdf = (gcnew System::Windows::Forms::Button());
			this->series_label = (gcnew System::Windows::Forms::Label());
			this->series = (gcnew System::Windows::Forms::TextBox());
			this->isbn_label = (gcnew System::Windows::Forms::Label());
			this->isbn = (gcnew System::Windows::Forms::TextBox());
			this->publisher_label = (gcnew System::Windows::Forms::Label());
			this->publisher = (gcnew System::Windows::Forms::TextBox());
			this->pag_label = (gcnew System::Windows::Forms::Label());
			this->pag = (gcnew System::Windows::Forms::TextBox());
			this->year_label = (gcnew System::Windows::Forms::Label());
			this->year = (gcnew System::Windows::Forms::MaskedTextBox());
			this->edition_label = (gcnew System::Windows::Forms::Label());
			this->edition = (gcnew System::Windows::Forms::TextBox());
			this->ok_book_chapter = (gcnew System::Windows::Forms::Button());
			this->author_label = (gcnew System::Windows::Forms::Label());
			this->editor_label = (gcnew System::Windows::Forms::Label());
			this->author = (gcnew System::Windows::Forms::TextBox());
			this->editor = (gcnew System::Windows::Forms::TextBox());
			this->title = (gcnew System::Windows::Forms::TextBox());
			this->book_title_label = (gcnew System::Windows::Forms::Label());
			this->title_label = (gcnew System::Windows::Forms::Label());
			this->book_title = (gcnew System::Windows::Forms::TextBox());
			this->panel_book_chapter->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel_book_chapter
			// 
			this->panel_book_chapter->Controls->Add(this->remove);
			this->panel_book_chapter->Controls->Add(this->pictureBox2);
			this->panel_book_chapter->Controls->Add(this->pictureBox1);
			this->panel_book_chapter->Controls->Add(this->list_author);
			this->panel_book_chapter->Controls->Add(this->not_pdf_warning);
			this->panel_book_chapter->Controls->Add(this->warning);
			this->panel_book_chapter->Controls->Add(this->button1);
			this->panel_book_chapter->Controls->Add(this->path_pdf);
			this->panel_book_chapter->Controls->Add(this->load_pdf);
			this->panel_book_chapter->Controls->Add(this->series_label);
			this->panel_book_chapter->Controls->Add(this->series);
			this->panel_book_chapter->Controls->Add(this->isbn_label);
			this->panel_book_chapter->Controls->Add(this->isbn);
			this->panel_book_chapter->Controls->Add(this->publisher_label);
			this->panel_book_chapter->Controls->Add(this->publisher);
			this->panel_book_chapter->Controls->Add(this->pag_label);
			this->panel_book_chapter->Controls->Add(this->pag);
			this->panel_book_chapter->Controls->Add(this->year_label);
			this->panel_book_chapter->Controls->Add(this->year);
			this->panel_book_chapter->Controls->Add(this->edition_label);
			this->panel_book_chapter->Controls->Add(this->edition);
			this->panel_book_chapter->Controls->Add(this->ok_book_chapter);
			this->panel_book_chapter->Controls->Add(this->author_label);
			this->panel_book_chapter->Controls->Add(this->editor_label);
			this->panel_book_chapter->Controls->Add(this->author);
			this->panel_book_chapter->Controls->Add(this->editor);
			this->panel_book_chapter->Controls->Add(this->title);
			this->panel_book_chapter->Controls->Add(this->book_title_label);
			this->panel_book_chapter->Controls->Add(this->title_label);
			this->panel_book_chapter->Controls->Add(this->book_title);
			this->panel_book_chapter->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_book_chapter->Location = System::Drawing::Point(0, 0);
			this->panel_book_chapter->Name = L"panel_book_chapter";
			this->panel_book_chapter->Size = System::Drawing::Size(681, 419);
			this->panel_book_chapter->TabIndex = 34;
			// 
			// remove
			// 
			this->remove->Location = System::Drawing::Point(334, 134);
			this->remove->Name = L"remove";
			this->remove->Size = System::Drawing::Size(120, 23);
			this->remove->TabIndex = 54;
			this->remove->Text = L"Remove Author";
			this->remove->UseVisualStyleBackColor = true;
			this->remove->Click += gcnew System::EventHandler(this, &add_book_chapter::remove_Click_1);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.InitialImage")));
			this->pictureBox2->Location = System::Drawing::Point(460, 9);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(32, 44);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 53;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &add_book_chapter::pictureBox2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(460, 59);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(32, 45);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 52;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &add_book_chapter::pictureBox1_Click);
			// 
			// list_author
			// 
			this->list_author->FormattingEnabled = true;
			this->list_author->Location = System::Drawing::Point(334, 9);
			this->list_author->Name = L"list_author";
			this->list_author->Size = System::Drawing::Size(120, 95);
			this->list_author->TabIndex = 50;
			// 
			// not_pdf_warning
			// 
			this->not_pdf_warning->AutoSize = true;
			this->not_pdf_warning->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->not_pdf_warning->ForeColor = System::Drawing::Color::Red;
			this->not_pdf_warning->Location = System::Drawing::Point(12, 302);
			this->not_pdf_warning->Name = L"not_pdf_warning";
			this->not_pdf_warning->Size = System::Drawing::Size(0, 15);
			this->not_pdf_warning->TabIndex = 47;
			// 
			// warning
			// 
			this->warning->AutoSize = true;
			this->warning->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->warning->ForeColor = System::Drawing::Color::Red;
			this->warning->Location = System::Drawing::Point(242, 320);
			this->warning->Name = L"warning";
			this->warning->Size = System::Drawing::Size(0, 15);
			this->warning->TabIndex = 46;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(486, 341);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Cancel";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &add_book_chapter::button1_Click);
			// 
			// path_pdf
			// 
			this->path_pdf->Location = System::Drawing::Point(169, 279);
			this->path_pdf->Name = L"path_pdf";
			this->path_pdf->Size = System::Drawing::Size(100, 20);
			this->path_pdf->TabIndex = 12;
			this->path_pdf->Visible = false;
			// 
			// load_pdf
			// 
			this->load_pdf->ForeColor = System::Drawing::SystemColors::ControlText;
			this->load_pdf->Location = System::Drawing::Point(12, 276);
			this->load_pdf->Name = L"load_pdf";
			this->load_pdf->Size = System::Drawing::Size(75, 23);
			this->load_pdf->TabIndex = 11;
			this->load_pdf->Text = L"Load PDF";
			this->load_pdf->UseVisualStyleBackColor = true;
			this->load_pdf->Click += gcnew System::EventHandler(this, &add_book_chapter::load_pdf_Click);
			// 
			// series_label
			// 
			this->series_label->AutoSize = true;
			this->series_label->Location = System::Drawing::Point(12, 163);
			this->series_label->Name = L"series_label";
			this->series_label->Size = System::Drawing::Size(36, 13);
			this->series_label->TabIndex = 34;
			this->series_label->Text = L"Series";
			// 
			// series
			// 
			this->series->Location = System::Drawing::Point(170, 159);
			this->series->Name = L"series";
			this->series->Size = System::Drawing::Size(100, 20);
			this->series->TabIndex = 6;
			// 
			// isbn_label
			// 
			this->isbn_label->AutoSize = true;
			this->isbn_label->Location = System::Drawing::Point(16, 247);
			this->isbn_label->Name = L"isbn_label";
			this->isbn_label->Size = System::Drawing::Size(32, 13);
			this->isbn_label->TabIndex = 32;
			this->isbn_label->Text = L"ISBN";
			// 
			// isbn
			// 
			this->isbn->Location = System::Drawing::Point(170, 244);
			this->isbn->Name = L"isbn";
			this->isbn->Size = System::Drawing::Size(100, 20);
			this->isbn->TabIndex = 9;
			// 
			// publisher_label
			// 
			this->publisher_label->AutoSize = true;
			this->publisher_label->Location = System::Drawing::Point(12, 136);
			this->publisher_label->Name = L"publisher_label";
			this->publisher_label->Size = System::Drawing::Size(50, 13);
			this->publisher_label->TabIndex = 30;
			this->publisher_label->Text = L"Publisher";
			// 
			// publisher
			// 
			this->publisher->Location = System::Drawing::Point(170, 132);
			this->publisher->Name = L"publisher";
			this->publisher->Size = System::Drawing::Size(100, 20);
			this->publisher->TabIndex = 5;
			// 
			// pag_label
			// 
			this->pag_label->AutoSize = true;
			this->pag_label->Location = System::Drawing::Point(15, 217);
			this->pag_label->Name = L"pag_label";
			this->pag_label->Size = System::Drawing::Size(146, 13);
			this->pag_label->TabIndex = 28;
			this->pag_label->Text = L"Interval of Pages ( initial;end )";
			// 
			// pag
			// 
			this->pag->Location = System::Drawing::Point(170, 214);
			this->pag->Name = L"pag";
			this->pag->Size = System::Drawing::Size(100, 20);
			this->pag->TabIndex = 8;
			// 
			// year_label
			// 
			this->year_label->AutoSize = true;
			this->year_label->Location = System::Drawing::Point(15, 190);
			this->year_label->Name = L"year_label";
			this->year_label->Size = System::Drawing::Size(29, 13);
			this->year_label->TabIndex = 24;
			this->year_label->Text = L"Year";
			// 
			// year
			// 
			this->year->Location = System::Drawing::Point(169, 183);
			this->year->Mask = L"0000";
			this->year->Name = L"year";
			this->year->Size = System::Drawing::Size(100, 20);
			this->year->TabIndex = 7;
			// 
			// edition_label
			// 
			this->edition_label->AutoSize = true;
			this->edition_label->Location = System::Drawing::Point(12, 110);
			this->edition_label->Name = L"edition_label";
			this->edition_label->Size = System::Drawing::Size(39, 13);
			this->edition_label->TabIndex = 20;
			this->edition_label->Text = L"Edition";
			// 
			// edition
			// 
			this->edition->Location = System::Drawing::Point(170, 106);
			this->edition->Name = L"edition";
			this->edition->Size = System::Drawing::Size(100, 20);
			this->edition->TabIndex = 4;
			// 
			// ok_book_chapter
			// 
			this->ok_book_chapter->Location = System::Drawing::Point(405, 341);
			this->ok_book_chapter->Name = L"ok_book_chapter";
			this->ok_book_chapter->Size = System::Drawing::Size(75, 23);
			this->ok_book_chapter->TabIndex = 13;
			this->ok_book_chapter->Text = L"OK";
			this->ok_book_chapter->UseVisualStyleBackColor = true;
			this->ok_book_chapter->Click += gcnew System::EventHandler(this, &add_book_chapter::ok_book_chapter_Click);
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
			// editor_label
			// 
			this->editor_label->AutoSize = true;
			this->editor_label->Location = System::Drawing::Point(12, 85);
			this->editor_label->Name = L"editor_label";
			this->editor_label->Size = System::Drawing::Size(34, 13);
			this->editor_label->TabIndex = 11;
			this->editor_label->Text = L"Editor";
			// 
			// author
			// 
			this->author->Location = System::Drawing::Point(170, 9);
			this->author->Name = L"author";
			this->author->Size = System::Drawing::Size(100, 20);
			this->author->TabIndex = 0;
			this->author->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &add_book_chapter::author_KeyDown);
			// 
			// editor
			// 
			this->editor->Location = System::Drawing::Point(170, 81);
			this->editor->Name = L"editor";
			this->editor->Size = System::Drawing::Size(100, 20);
			this->editor->TabIndex = 3;
			// 
			// title
			// 
			this->title->Location = System::Drawing::Point(170, 35);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(100, 20);
			this->title->TabIndex = 1;
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
			// title_label
			// 
			this->title_label->AutoSize = true;
			this->title_label->Location = System::Drawing::Point(12, 35);
			this->title_label->Name = L"title_label";
			this->title_label->Size = System::Drawing::Size(27, 13);
			this->title_label->TabIndex = 7;
			this->title_label->Text = L"Title";
			// 
			// book_title
			// 
			this->book_title->Location = System::Drawing::Point(170, 57);
			this->book_title->Name = L"book_title";
			this->book_title->Size = System::Drawing::Size(100, 20);
			this->book_title->TabIndex = 2;
			// 
			// add_book_chapter
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(681, 419);
			this->Controls->Add(this->panel_book_chapter);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->Name = L"add_book_chapter";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"add_book_chapter";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &add_book_chapter::add_book_chapter_KeyDown);
			this->panel_book_chapter->ResumeLayout(false);
			this->panel_book_chapter->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	
	private: System::Void ok_book_chapter_Click(System::Object^  sender, System::EventArgs^  e) {




				 String^ autores = "";
				 String^ id = "";
				 String^ pag_num = "";
				 String^ aux = "";

				 String^ lastname = "";
				 warning->Text = "";


				 // Definição da cor dos labels dos campos
				 author_label->ForeColor = SystemColors::ControlText;
				 title_label->ForeColor = SystemColors::ControlText;
				 book_title_label->ForeColor = SystemColors::ControlText;
				 editor_label->ForeColor = SystemColors::ControlText;
				 edition_label->ForeColor = SystemColors::ControlText;
				 publisher_label->ForeColor = SystemColors::ControlText;
				 series_label->ForeColor = SystemColors::ControlText;
				 year_label->ForeColor = SystemColors::ControlText;
				 pag_label->ForeColor = SystemColors::ControlText;
				 isbn_label->ForeColor = SystemColors::ControlText;
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
				 if (String::IsNullOrEmpty(editor->Text)){

					 editor_label->ForeColor = System::Drawing::Color::Red;
					 warning->Text = "Fill the red fields please!";
					 erro = 1;
				 }



				 if (String::IsNullOrEmpty(edition->Text)){

					 edition_label->ForeColor = System::Drawing::Color::Red;
					 warning->Text = "Fill the red fields please!";
					 erro = 1;
				 }

				 if (String::IsNullOrEmpty(publisher->Text)){

					 publisher_label->ForeColor = System::Drawing::Color::Red;
					 warning->Text = "Fill the red fields please!";
					 erro = 1;
				 }

				 if (String::IsNullOrEmpty(series->Text)){

					 series_label->ForeColor = System::Drawing::Color::Red;
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

				 if (String::IsNullOrEmpty(isbn->Text)){

					 isbn_label->ForeColor = System::Drawing::Color::Red;
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





						 String^ path = Environment::CurrentDirectory + "\\Publications\\Book Chapter\\" + id + ".pdf";


						 System::IO::File::Copy(path_pdf->Text, path, true);


						 String^ Command = "INSERT INTO book_chapter(id, authors, title, book_title, editor, edition, publisher, series, year, num_pages, isbn, path, lastname) VALUES (";
						 Command += "'" + id + "'" + ",";
						 Command += "'" + autores + "'" + ",";
						 Command += "'" + title->Text + "'" + ",";
						 Command += "'" + book_title->Text + "'" + ",";
						 Command += "'" + editor->Text + "'" + ",";
						 Command += "'" + edition->Text + "'" + ",";
						 Command += "'" + publisher->Text + "'" + ",";
						 Command += "'" + series->Text + "'" + ",";
						 Command += "'" + year->Text + "'" + ",";
						 Command += "'" + pag_num + "'" + ",";
						 Command += "'" + isbn->Text + "'" + ",";
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



	private: System::Void add_book_chapter_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

				 if (e->KeyCode == Keys::Escape)
				 {
					 this->Close();
				 }

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


private: System::Void remove_Click_1(System::Object^  sender, System::EventArgs^  e) {

			 list_author->Items->Remove(list_author->SelectedItem);




}
};
}
