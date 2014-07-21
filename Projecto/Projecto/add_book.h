#pragma once

#include "DataBase.h"



namespace Projecto {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;   // para poder usar o File::MOVE || tambem da para DIRECTORY::
	using namespace System::Diagnostics;  // Process




	/// <summary>
	/// Summary for add_book
	/// </summary>
	public ref class add_book : public System::Windows::Forms::Form
	{




	public:


		add_book(void)
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
		~add_book()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::TextBox^  series;

	private: System::Windows::Forms::Label^  series_label;
	protected:



	private: System::Windows::Forms::Label^  publisher_label;
	private: System::Windows::Forms::Label^  isbn_label;
	private: System::Windows::Forms::TextBox^  isbn;




	private: System::Windows::Forms::Label^  year_label;
	private: System::Windows::Forms::MaskedTextBox^  year;







	private: System::Windows::Forms::Button^  ok_book;
	private: System::Windows::Forms::Label^  author_label;
	private: System::Windows::Forms::TextBox^  author;
	private: System::Windows::Forms::TextBox^  publisher;






	private: System::Windows::Forms::TextBox^  title;



	private: System::Windows::Forms::Label^  edition_label;


	private: System::Windows::Forms::Label^  title_label;
	private: System::Windows::Forms::TextBox^  edition;
	private: System::Windows::Forms::Label^  warning;



	private: System::Windows::Forms::Button^  load_pdf;
	private: System::Windows::Forms::TextBox^  path_pdf;



	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  not_pdf_warning;
	private: System::Windows::Forms::ListBox^  list_author;
	private: System::Windows::Forms::Button^  remove;


	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;











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
			System::Windows::Forms::Panel^  panel_book;
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(add_book::typeid));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->remove = (gcnew System::Windows::Forms::Button());
			this->list_author = (gcnew System::Windows::Forms::ListBox());
			this->author = (gcnew System::Windows::Forms::TextBox());
			this->title = (gcnew System::Windows::Forms::TextBox());
			this->edition = (gcnew System::Windows::Forms::TextBox());
			this->publisher = (gcnew System::Windows::Forms::TextBox());
			this->series = (gcnew System::Windows::Forms::TextBox());
			this->year = (gcnew System::Windows::Forms::MaskedTextBox());
			this->isbn = (gcnew System::Windows::Forms::TextBox());
			this->path_pdf = (gcnew System::Windows::Forms::TextBox());
			this->not_pdf_warning = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->load_pdf = (gcnew System::Windows::Forms::Button());
			this->warning = (gcnew System::Windows::Forms::Label());
			this->series_label = (gcnew System::Windows::Forms::Label());
			this->publisher_label = (gcnew System::Windows::Forms::Label());
			this->isbn_label = (gcnew System::Windows::Forms::Label());
			this->year_label = (gcnew System::Windows::Forms::Label());
			this->ok_book = (gcnew System::Windows::Forms::Button());
			this->author_label = (gcnew System::Windows::Forms::Label());
			this->edition_label = (gcnew System::Windows::Forms::Label());
			this->title_label = (gcnew System::Windows::Forms::Label());
			panel_book = (gcnew System::Windows::Forms::Panel());
			panel_book->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel_book
			// 
			panel_book->Controls->Add(this->pictureBox2);
			panel_book->Controls->Add(this->pictureBox1);
			panel_book->Controls->Add(this->remove);
			panel_book->Controls->Add(this->list_author);
			panel_book->Controls->Add(this->author);
			panel_book->Controls->Add(this->title);
			panel_book->Controls->Add(this->edition);
			panel_book->Controls->Add(this->publisher);
			panel_book->Controls->Add(this->series);
			panel_book->Controls->Add(this->year);
			panel_book->Controls->Add(this->isbn);
			panel_book->Controls->Add(this->path_pdf);
			panel_book->Controls->Add(this->not_pdf_warning);
			panel_book->Controls->Add(this->button1);
			panel_book->Controls->Add(this->load_pdf);
			panel_book->Controls->Add(this->warning);
			panel_book->Controls->Add(this->series_label);
			panel_book->Controls->Add(this->publisher_label);
			panel_book->Controls->Add(this->isbn_label);
			panel_book->Controls->Add(this->year_label);
			panel_book->Controls->Add(this->ok_book);
			panel_book->Controls->Add(this->author_label);
			panel_book->Controls->Add(this->edition_label);
			panel_book->Controls->Add(this->title_label);
			panel_book->Dock = System::Windows::Forms::DockStyle::Fill;
			panel_book->Location = System::Drawing::Point(0, 0);
			panel_book->Name = L"panel_book";
			panel_book->Size = System::Drawing::Size(681, 419);
			panel_book->TabIndex = 7;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.InitialImage")));
			this->pictureBox2->Location = System::Drawing::Point(464, 4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(32, 44);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 49;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &add_book::pictureBox2_Click_1);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(464, 54);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(32, 45);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 48;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &add_book::pictureBox1_Click);
			// 
			// remove
			// 
			this->remove->Location = System::Drawing::Point(338, 110);
			this->remove->Name = L"remove";
			this->remove->Size = System::Drawing::Size(120, 23);
			this->remove->TabIndex = 45;
			this->remove->Text = L"Remove Author";
			this->remove->UseVisualStyleBackColor = true;
			this->remove->Click += gcnew System::EventHandler(this, &add_book::rem_Click);
			// 
			// list_author
			// 
			this->list_author->FormattingEnabled = true;
			this->list_author->Location = System::Drawing::Point(338, 4);
			this->list_author->Name = L"list_author";
			this->list_author->Size = System::Drawing::Size(120, 95);
			this->list_author->TabIndex = 44;
			// 
			// author
			// 
			this->author->Location = System::Drawing::Point(166, 4);
			this->author->Name = L"author";
			this->author->Size = System::Drawing::Size(100, 20);
			this->author->TabIndex = 0;
			this->author->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &add_book::author_KeyDown);
			// 
			// title
			// 
			this->title->Location = System::Drawing::Point(166, 32);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(100, 20);
			this->title->TabIndex = 1;
			// 
			// edition
			// 
			this->edition->Location = System::Drawing::Point(166, 54);
			this->edition->Name = L"edition";
			this->edition->Size = System::Drawing::Size(100, 20);
			this->edition->TabIndex = 2;
			// 
			// publisher
			// 
			this->publisher->Location = System::Drawing::Point(166, 78);
			this->publisher->Name = L"publisher";
			this->publisher->Size = System::Drawing::Size(100, 20);
			this->publisher->TabIndex = 3;
			// 
			// series
			// 
			this->series->Location = System::Drawing::Point(166, 104);
			this->series->Name = L"series";
			this->series->Size = System::Drawing::Size(100, 20);
			this->series->TabIndex = 4;
			// 
			// year
			// 
			this->year->Location = System::Drawing::Point(165, 128);
			this->year->Mask = L"0000";
			this->year->Name = L"year";
			this->year->Size = System::Drawing::Size(100, 20);
			this->year->TabIndex = 5;
			// 
			// isbn
			// 
			this->isbn->Location = System::Drawing::Point(166, 159);
			this->isbn->Name = L"isbn";
			this->isbn->Size = System::Drawing::Size(99, 20);
			this->isbn->TabIndex = 6;
			// 
			// path_pdf
			// 
			this->path_pdf->Location = System::Drawing::Point(165, 192);
			this->path_pdf->Name = L"path_pdf";
			this->path_pdf->Size = System::Drawing::Size(100, 20);
			this->path_pdf->TabIndex = 7;
			this->path_pdf->Visible = false;
			// 
			// not_pdf_warning
			// 
			this->not_pdf_warning->AutoSize = true;
			this->not_pdf_warning->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->not_pdf_warning->ForeColor = System::Drawing::Color::Red;
			this->not_pdf_warning->Location = System::Drawing::Point(15, 233);
			this->not_pdf_warning->Name = L"not_pdf_warning";
			this->not_pdf_warning->Size = System::Drawing::Size(0, 15);
			this->not_pdf_warning->TabIndex = 43;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(286, 273);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Cancel";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &add_book::button1_Click_1);
			// 
			// load_pdf
			// 
			this->load_pdf->ForeColor = System::Drawing::SystemColors::ControlText;
			this->load_pdf->Location = System::Drawing::Point(15, 195);
			this->load_pdf->Name = L"load_pdf";
			this->load_pdf->Size = System::Drawing::Size(75, 23);
			this->load_pdf->TabIndex = 7;
			this->load_pdf->Text = L"Load PDF";
			this->load_pdf->UseVisualStyleBackColor = true;
			this->load_pdf->Click += gcnew System::EventHandler(this, &add_book::button1_Click);
			// 
			// warning
			// 
			this->warning->AutoSize = true;
			this->warning->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->warning->ForeColor = System::Drawing::Color::Red;
			this->warning->Location = System::Drawing::Point(163, 252);
			this->warning->Name = L"warning";
			this->warning->Size = System::Drawing::Size(0, 15);
			this->warning->TabIndex = 39;
			// 
			// series_label
			// 
			this->series_label->AutoSize = true;
			this->series_label->Location = System::Drawing::Point(15, 108);
			this->series_label->Name = L"series_label";
			this->series_label->Size = System::Drawing::Size(36, 13);
			this->series_label->TabIndex = 14;
			this->series_label->Text = L"Series";
			// 
			// publisher_label
			// 
			this->publisher_label->AutoSize = true;
			this->publisher_label->Location = System::Drawing::Point(12, 84);
			this->publisher_label->Name = L"publisher_label";
			this->publisher_label->Size = System::Drawing::Size(50, 13);
			this->publisher_label->TabIndex = 13;
			this->publisher_label->Text = L"Publisher";
			// 
			// isbn_label
			// 
			this->isbn_label->AutoSize = true;
			this->isbn_label->Location = System::Drawing::Point(15, 165);
			this->isbn_label->Name = L"isbn_label";
			this->isbn_label->Size = System::Drawing::Size(32, 13);
			this->isbn_label->TabIndex = 16;
			this->isbn_label->Text = L"ISBN";
			// 
			// year_label
			// 
			this->year_label->AutoSize = true;
			this->year_label->Location = System::Drawing::Point(15, 138);
			this->year_label->Name = L"year_label";
			this->year_label->Size = System::Drawing::Size(29, 13);
			this->year_label->TabIndex = 15;
			this->year_label->Text = L"Year";
			// 
			// ok_book
			// 
			this->ok_book->Location = System::Drawing::Point(182, 273);
			this->ok_book->Name = L"ok_book";
			this->ok_book->Size = System::Drawing::Size(75, 23);
			this->ok_book->TabIndex = 8;
			this->ok_book->Text = L"OK";
			this->ok_book->UseVisualStyleBackColor = true;
			this->ok_book->Click += gcnew System::EventHandler(this, &add_book::ok_book_Click);
			// 
			// author_label
			// 
			this->author_label->AutoSize = true;
			this->author_label->Location = System::Drawing::Point(12, 9);
			this->author_label->Name = L"author_label";
			this->author_label->Size = System::Drawing::Size(148, 13);
			this->author_label->TabIndex = 10;
			this->author_label->Text = L"Author ( First Name;Surname )";
			// 
			// edition_label
			// 
			this->edition_label->AutoSize = true;
			this->edition_label->Location = System::Drawing::Point(12, 60);
			this->edition_label->Name = L"edition_label";
			this->edition_label->Size = System::Drawing::Size(39, 13);
			this->edition_label->TabIndex = 12;
			this->edition_label->Text = L"Edition";
			// 
			// title_label
			// 
			this->title_label->AutoSize = true;
			this->title_label->Location = System::Drawing::Point(12, 35);
			this->title_label->Name = L"title_label";
			this->title_label->Size = System::Drawing::Size(27, 13);
			this->title_label->TabIndex = 11;
			this->title_label->Text = L"Title";
			// 
			// add_book
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(681, 419);
			this->Controls->Add(panel_book);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->Name = L"add_book";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"add_book";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &add_book::add_book_KeyDown);
			panel_book->ResumeLayout(false);
			panel_book->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	
	private: System::Void ok_book_Click(System::Object^  sender, System::EventArgs^  e) {


				 String^ autores = "";
				 String^ id = "";
				 String^ aux = "";

				 String^ lastname = "";
				 warning->Text = "";
				 not_pdf_warning->Text = "";


				 // Definição da cor dos labels dos campos
				 author_label->ForeColor = SystemColors::ControlText;
				 title_label->ForeColor = SystemColors::ControlText;
				 edition_label->ForeColor = SystemColors::ControlText;
				 publisher_label->ForeColor = SystemColors::ControlText;
				 series_label->ForeColor = SystemColors::ControlText;
				 year_label->ForeColor = SystemColors::ControlText;
				 isbn_label->ForeColor = SystemColors::ControlText;
				 load_pdf->ForeColor = SystemColors::ControlText;




				 bool erro = 0;





				 if (String::IsNullOrEmpty(title->Text)){

					 title_label->ForeColor = System::Drawing::Color::Red;
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


					// Verificação do ficheiro

					

					 
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





						 String^ path = Environment::CurrentDirectory + "\\Publications\\Book\\" + id + ".pdf";


						 System::IO::File::Copy(path_pdf->Text, path, true);


						 String^ Command = "INSERT INTO book(id, authors, title, edition, publisher, series, year , isbn, path, lastname) VALUES (";
						 Command += "'" + id + "'" + ",";
						 Command += "'" + autores + "'" + ",";
						 Command += "'" + title->Text + "'" + ",";
						 Command += "'" + edition->Text + "'" + ",";
						 Command += "'" + publisher->Text + "'" + ",";
						 Command += "'" + series->Text + "'" + ",";
						 Command += "'" + year->Text + "'" + ",";
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



	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {


				 OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
				 String^ path;

				 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK){  // fico com o path do ficheiro PDF


					 // caminho do ficheiro --> openFileDialog1->FileName

					 path = openFileDialog1->FileName;
					 path_pdf->Text = path;

				 }


	}
	private: System::Void add_book_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

				 if (e->KeyCode == Keys::Escape)
				 {
					 this->Close();
				 }

	}
	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {

				 this->DialogResult = System::Windows::Forms::DialogResult::Cancel;

				 Close();  // Fecha a form


	}
	private: System::Void rem_Click(System::Object^  sender, System::EventArgs^  e) {

				 list_author->Items->Remove(list_author->SelectedItem);


	}

private: System::Void pictureBox2_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 
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
