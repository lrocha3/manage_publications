#pragma once



#include "add_book.h"
#include "add_book_chapter.h"
#include "add_thesis.h"
#include "add_conference.h"
#include "add_journal.h"
#include "add_export_reference.h"


namespace Projecto {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;




	/// <summary>
	/// Summary for main
	/// </summary>
	public ref class main : public System::Windows::Forms::Form
	{
	public:
		main(void)
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
		~main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menu;
	protected:

	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;



























	private: System::Windows::Forms::ContextMenuStrip^  tree_publication_ContextMenuStrip;

	private: System::Windows::Forms::ToolStripMenuItem^  copyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  deleteReferenceToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^  citationKeyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  referenceToolStripMenuItem;

	private: System::Windows::Forms::ContextMenuStrip^  tree_select_ContextMenuStrip;
	private: System::Windows::Forms::ToolStripMenuItem^  deleteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  undoDeleteToolStripMenuItem;

















	private: System::Windows::Forms::ToolTip^  toolTip1;


	private: System::Windows::Forms::ToolStripMenuItem^  newPublicationToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  bookToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  bookChapterToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  conferenceToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  journalToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  thesisToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  changeOrderToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  byTypeToolStripMenuItem;




	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  ordenacao;
	private: System::Windows::Forms::ComboBox^  combo_box_Ordenar;
	private: System::Windows::Forms::Button^  button_thesis;
	private: System::Windows::Forms::Button^  button_conference;
	private: System::Windows::Forms::Button^  button_book_chapter;
	private: System::Windows::Forms::Button^  button_journal;
	private: System::Windows::Forms::Button^  button_book;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::TextBox^  current_selected;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel_new_selection;
	private: System::Windows::Forms::Button^  cancel_new_selection;
	private: System::Windows::Forms::Label^  new_selection_warning_label;
	private: System::Windows::Forms::Button^  ok_new_selection;
	private: System::Windows::Forms::TextBox^  new_selection;
	private: System::Windows::Forms::Label^  new_selection_name_label;
	private: System::Windows::Forms::Button^  create_selection;
	private: System::Windows::Forms::TreeView^  tree_publication;
	private: System::Windows::Forms::TreeView^  tree_select;
	private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::ToolStripMenuItem^  byYearDescendingToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  alphabeticToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  exportReferencesToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  openLocationToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  publicationsToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  selectionsToolStripMenuItem;





	private:








	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(main::typeid));
			this->menu = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newPublicationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bookToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bookChapterToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->conferenceToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->journalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->thesisToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->changeOrderToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->byTypeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->byYearDescendingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->alphabeticToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openLocationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->publicationsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->selectionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tree_publication_ContextMenuStrip = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->copyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->citationKeyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->referenceToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteReferenceToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tree_select_ContextMenuStrip = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->deleteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->undoDeleteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exportReferencesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->button_book = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->ordenacao = (gcnew System::Windows::Forms::Label());
			this->combo_box_Ordenar = (gcnew System::Windows::Forms::ComboBox());
			this->button_thesis = (gcnew System::Windows::Forms::Button());
			this->button_conference = (gcnew System::Windows::Forms::Button());
			this->button_book_chapter = (gcnew System::Windows::Forms::Button());
			this->button_journal = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->current_selected = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel_new_selection = (gcnew System::Windows::Forms::Panel());
			this->cancel_new_selection = (gcnew System::Windows::Forms::Button());
			this->new_selection_warning_label = (gcnew System::Windows::Forms::Label());
			this->ok_new_selection = (gcnew System::Windows::Forms::Button());
			this->new_selection = (gcnew System::Windows::Forms::TextBox());
			this->new_selection_name_label = (gcnew System::Windows::Forms::Label());
			this->create_selection = (gcnew System::Windows::Forms::Button());
			this->tree_publication = (gcnew System::Windows::Forms::TreeView());
			this->tree_select = (gcnew System::Windows::Forms::TreeView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menu->SuspendLayout();
			this->tree_publication_ContextMenuStrip->SuspendLayout();
			this->tree_select_ContextMenuStrip->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel_new_selection->SuspendLayout();
			this->SuspendLayout();
			// 
			// menu
			// 
			this->menu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->helpToolStripMenuItem
			});
			resources->ApplyResources(this->menu, L"menu");
			this->menu->Name = L"menu";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->newPublicationToolStripMenuItem,
					this->changeOrderToolStripMenuItem, this->openLocationToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			resources->ApplyResources(this->fileToolStripMenuItem, L"fileToolStripMenuItem");
			// 
			// newPublicationToolStripMenuItem
			// 
			this->newPublicationToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->bookToolStripMenuItem,
					this->bookChapterToolStripMenuItem, this->conferenceToolStripMenuItem, this->journalToolStripMenuItem, this->thesisToolStripMenuItem
			});
			this->newPublicationToolStripMenuItem->Name = L"newPublicationToolStripMenuItem";
			resources->ApplyResources(this->newPublicationToolStripMenuItem, L"newPublicationToolStripMenuItem");
			// 
			// bookToolStripMenuItem
			// 
			this->bookToolStripMenuItem->Name = L"bookToolStripMenuItem";
			resources->ApplyResources(this->bookToolStripMenuItem, L"bookToolStripMenuItem");
			this->bookToolStripMenuItem->Click += gcnew System::EventHandler(this, &main::bookToolStripMenuItem_Click);
			// 
			// bookChapterToolStripMenuItem
			// 
			this->bookChapterToolStripMenuItem->Name = L"bookChapterToolStripMenuItem";
			resources->ApplyResources(this->bookChapterToolStripMenuItem, L"bookChapterToolStripMenuItem");
			this->bookChapterToolStripMenuItem->Click += gcnew System::EventHandler(this, &main::bookChapterToolStripMenuItem_Click);
			// 
			// conferenceToolStripMenuItem
			// 
			this->conferenceToolStripMenuItem->Name = L"conferenceToolStripMenuItem";
			resources->ApplyResources(this->conferenceToolStripMenuItem, L"conferenceToolStripMenuItem");
			this->conferenceToolStripMenuItem->Click += gcnew System::EventHandler(this, &main::conferenceToolStripMenuItem_Click);
			// 
			// journalToolStripMenuItem
			// 
			this->journalToolStripMenuItem->Name = L"journalToolStripMenuItem";
			resources->ApplyResources(this->journalToolStripMenuItem, L"journalToolStripMenuItem");
			this->journalToolStripMenuItem->Click += gcnew System::EventHandler(this, &main::journalToolStripMenuItem_Click);
			// 
			// thesisToolStripMenuItem
			// 
			this->thesisToolStripMenuItem->Name = L"thesisToolStripMenuItem";
			resources->ApplyResources(this->thesisToolStripMenuItem, L"thesisToolStripMenuItem");
			this->thesisToolStripMenuItem->Click += gcnew System::EventHandler(this, &main::thesisToolStripMenuItem_Click);
			// 
			// changeOrderToolStripMenuItem
			// 
			this->changeOrderToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->byTypeToolStripMenuItem,
					this->byYearDescendingToolStripMenuItem, this->alphabeticToolStripMenuItem
			});
			this->changeOrderToolStripMenuItem->Name = L"changeOrderToolStripMenuItem";
			resources->ApplyResources(this->changeOrderToolStripMenuItem, L"changeOrderToolStripMenuItem");
			// 
			// byTypeToolStripMenuItem
			// 
			this->byTypeToolStripMenuItem->Name = L"byTypeToolStripMenuItem";
			resources->ApplyResources(this->byTypeToolStripMenuItem, L"byTypeToolStripMenuItem");
			this->byTypeToolStripMenuItem->Click += gcnew System::EventHandler(this, &main::byTypeToolStripMenuItem_Click);
			// 
			// byYearDescendingToolStripMenuItem
			// 
			this->byYearDescendingToolStripMenuItem->Name = L"byYearDescendingToolStripMenuItem";
			resources->ApplyResources(this->byYearDescendingToolStripMenuItem, L"byYearDescendingToolStripMenuItem");
			this->byYearDescendingToolStripMenuItem->Click += gcnew System::EventHandler(this, &main::byYearDescendingToolStripMenuItem_Click);
			// 
			// alphabeticToolStripMenuItem
			// 
			this->alphabeticToolStripMenuItem->Name = L"alphabeticToolStripMenuItem";
			resources->ApplyResources(this->alphabeticToolStripMenuItem, L"alphabeticToolStripMenuItem");
			this->alphabeticToolStripMenuItem->Click += gcnew System::EventHandler(this, &main::alphabeticToolStripMenuItem_Click);
			// 
			// openLocationToolStripMenuItem
			// 
			this->openLocationToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->publicationsToolStripMenuItem,
					this->selectionsToolStripMenuItem
			});
			this->openLocationToolStripMenuItem->Name = L"openLocationToolStripMenuItem";
			resources->ApplyResources(this->openLocationToolStripMenuItem, L"openLocationToolStripMenuItem");
			// 
			// publicationsToolStripMenuItem
			// 
			this->publicationsToolStripMenuItem->Name = L"publicationsToolStripMenuItem";
			resources->ApplyResources(this->publicationsToolStripMenuItem, L"publicationsToolStripMenuItem");
			this->publicationsToolStripMenuItem->Click += gcnew System::EventHandler(this, &main::publicationsToolStripMenuItem_Click);
			// 
			// selectionsToolStripMenuItem
			// 
			this->selectionsToolStripMenuItem->Name = L"selectionsToolStripMenuItem";
			resources->ApplyResources(this->selectionsToolStripMenuItem, L"selectionsToolStripMenuItem");
			this->selectionsToolStripMenuItem->Click += gcnew System::EventHandler(this, &main::selectionsToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			resources->ApplyResources(this->exitToolStripMenuItem, L"exitToolStripMenuItem");
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &main::exitToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutToolStripMenuItem });
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			resources->ApplyResources(this->helpToolStripMenuItem, L"helpToolStripMenuItem");
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			resources->ApplyResources(this->aboutToolStripMenuItem, L"aboutToolStripMenuItem");
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &main::aboutToolStripMenuItem_Click);
			// 
			// tree_publication_ContextMenuStrip
			// 
			this->tree_publication_ContextMenuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->copyToolStripMenuItem,
					this->deleteReferenceToolStripMenuItem
			});
			this->tree_publication_ContextMenuStrip->Name = L"contextMenuStrip1";
			resources->ApplyResources(this->tree_publication_ContextMenuStrip, L"tree_publication_ContextMenuStrip");
			this->tree_publication_ContextMenuStrip->Opening += gcnew System::ComponentModel::CancelEventHandler(this, &main::contextMenuStrip1_Opening);
			// 
			// copyToolStripMenuItem
			// 
			this->copyToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->citationKeyToolStripMenuItem,
					this->referenceToolStripMenuItem
			});
			this->copyToolStripMenuItem->Name = L"copyToolStripMenuItem";
			resources->ApplyResources(this->copyToolStripMenuItem, L"copyToolStripMenuItem");
			// 
			// citationKeyToolStripMenuItem
			// 
			this->citationKeyToolStripMenuItem->Name = L"citationKeyToolStripMenuItem";
			resources->ApplyResources(this->citationKeyToolStripMenuItem, L"citationKeyToolStripMenuItem");
			this->citationKeyToolStripMenuItem->Click += gcnew System::EventHandler(this, &main::citationKeyToolStripMenuItem_Click);
			// 
			// referenceToolStripMenuItem
			// 
			this->referenceToolStripMenuItem->Name = L"referenceToolStripMenuItem";
			resources->ApplyResources(this->referenceToolStripMenuItem, L"referenceToolStripMenuItem");
			this->referenceToolStripMenuItem->Click += gcnew System::EventHandler(this, &main::referenceToolStripMenuItem_Click);
			// 
			// deleteReferenceToolStripMenuItem
			// 
			this->deleteReferenceToolStripMenuItem->Name = L"deleteReferenceToolStripMenuItem";
			resources->ApplyResources(this->deleteReferenceToolStripMenuItem, L"deleteReferenceToolStripMenuItem");
			this->deleteReferenceToolStripMenuItem->Click += gcnew System::EventHandler(this, &main::deleteReferenceToolStripMenuItem_Click);
			// 
			// tree_select_ContextMenuStrip
			// 
			this->tree_select_ContextMenuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->deleteToolStripMenuItem,
					this->undoDeleteToolStripMenuItem, this->exportReferencesToolStripMenuItem
			});
			this->tree_select_ContextMenuStrip->Name = L"tree_select_ContextMenuStrip";
			resources->ApplyResources(this->tree_select_ContextMenuStrip, L"tree_select_ContextMenuStrip");
			this->tree_select_ContextMenuStrip->Opening += gcnew System::ComponentModel::CancelEventHandler(this, &main::tree_select_ContextMenuStrip_Opening);
			// 
			// deleteToolStripMenuItem
			// 
			this->deleteToolStripMenuItem->Name = L"deleteToolStripMenuItem";
			resources->ApplyResources(this->deleteToolStripMenuItem, L"deleteToolStripMenuItem");
			this->deleteToolStripMenuItem->Click += gcnew System::EventHandler(this, &main::deleteToolStripMenuItem_Click);
			// 
			// undoDeleteToolStripMenuItem
			// 
			this->undoDeleteToolStripMenuItem->Name = L"undoDeleteToolStripMenuItem";
			resources->ApplyResources(this->undoDeleteToolStripMenuItem, L"undoDeleteToolStripMenuItem");
			this->undoDeleteToolStripMenuItem->Click += gcnew System::EventHandler(this, &main::undoDeleteToolStripMenuItem_Click);
			// 
			// exportReferencesToolStripMenuItem
			// 
			this->exportReferencesToolStripMenuItem->Name = L"exportReferencesToolStripMenuItem";
			resources->ApplyResources(this->exportReferencesToolStripMenuItem, L"exportReferencesToolStripMenuItem");
			this->exportReferencesToolStripMenuItem->Click += gcnew System::EventHandler(this, &main::exportReferencesToolStripMenuItem_Click);
			// 
			// button_book
			// 
			resources->ApplyResources(this->button_book, L"button_book");
			this->button_book->Name = L"button_book";
			this->toolTip1->SetToolTip(this->button_book, resources->GetString(L"button_book.ToolTip"));
			this->button_book->UseVisualStyleBackColor = true;
			this->button_book->Click += gcnew System::EventHandler(this, &main::button_book_Click);
			// 
			// tableLayoutPanel1
			// 
			resources->ApplyResources(this->tableLayoutPanel1, L"tableLayoutPanel1");
			this->tableLayoutPanel1->Controls->Add(this->label3, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->panel1, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->panel2, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->tree_publication, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->tree_select, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->label2, 1, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->Name = L"label3";
			// 
			// panel1
			// 
			resources->ApplyResources(this->panel1, L"panel1");
			this->panel1->Controls->Add(this->ordenacao);
			this->panel1->Controls->Add(this->combo_box_Ordenar);
			this->panel1->Controls->Add(this->button_thesis);
			this->panel1->Controls->Add(this->button_conference);
			this->panel1->Controls->Add(this->button_book_chapter);
			this->panel1->Controls->Add(this->button_journal);
			this->panel1->Controls->Add(this->button_book);
			this->panel1->Name = L"panel1";
			// 
			// ordenacao
			// 
			resources->ApplyResources(this->ordenacao, L"ordenacao");
			this->ordenacao->Name = L"ordenacao";
			// 
			// combo_box_Ordenar
			// 
			resources->ApplyResources(this->combo_box_Ordenar, L"combo_box_Ordenar");
			this->combo_box_Ordenar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->combo_box_Ordenar->FormattingEnabled = true;
			this->combo_box_Ordenar->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				resources->GetString(L"combo_box_Ordenar.Items"),
					resources->GetString(L"combo_box_Ordenar.Items1"), resources->GetString(L"combo_box_Ordenar.Items2")
			});
			this->combo_box_Ordenar->Name = L"combo_box_Ordenar";
			this->combo_box_Ordenar->TextChanged += gcnew System::EventHandler(this, &main::combo_box_Ordenar_TextChanged);
			this->combo_box_Ordenar->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &main::combo_box_Ordenar_KeyPress_1);
			// 
			// button_thesis
			// 
			resources->ApplyResources(this->button_thesis, L"button_thesis");
			this->button_thesis->Name = L"button_thesis";
			this->button_thesis->UseVisualStyleBackColor = true;
			this->button_thesis->Click += gcnew System::EventHandler(this, &main::button_thesis_Click);
			// 
			// button_conference
			// 
			resources->ApplyResources(this->button_conference, L"button_conference");
			this->button_conference->Name = L"button_conference";
			this->button_conference->UseVisualStyleBackColor = true;
			this->button_conference->Click += gcnew System::EventHandler(this, &main::button_conference_Click);
			// 
			// button_book_chapter
			// 
			resources->ApplyResources(this->button_book_chapter, L"button_book_chapter");
			this->button_book_chapter->Name = L"button_book_chapter";
			this->button_book_chapter->UseVisualStyleBackColor = true;
			this->button_book_chapter->Click += gcnew System::EventHandler(this, &main::button_book_chapter_Click);
			// 
			// button_journal
			// 
			resources->ApplyResources(this->button_journal, L"button_journal");
			this->button_journal->Name = L"button_journal";
			this->button_journal->UseVisualStyleBackColor = true;
			this->button_journal->Click += gcnew System::EventHandler(this, &main::button_journal_Click);
			// 
			// panel2
			// 
			resources->ApplyResources(this->panel2, L"panel2");
			this->panel2->Controls->Add(this->current_selected);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->panel_new_selection);
			this->panel2->Controls->Add(this->create_selection);
			this->panel2->Name = L"panel2";
			// 
			// current_selected
			// 
			resources->ApplyResources(this->current_selected, L"current_selected");
			this->current_selected->Name = L"current_selected";
			this->current_selected->ReadOnly = true;
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			// 
			// panel_new_selection
			// 
			resources->ApplyResources(this->panel_new_selection, L"panel_new_selection");
			this->panel_new_selection->Controls->Add(this->cancel_new_selection);
			this->panel_new_selection->Controls->Add(this->new_selection_warning_label);
			this->panel_new_selection->Controls->Add(this->ok_new_selection);
			this->panel_new_selection->Controls->Add(this->new_selection);
			this->panel_new_selection->Controls->Add(this->new_selection_name_label);
			this->panel_new_selection->Name = L"panel_new_selection";
			// 
			// cancel_new_selection
			// 
			resources->ApplyResources(this->cancel_new_selection, L"cancel_new_selection");
			this->cancel_new_selection->Name = L"cancel_new_selection";
			this->cancel_new_selection->UseVisualStyleBackColor = true;
			this->cancel_new_selection->Click += gcnew System::EventHandler(this, &main::cancel_new_selection_Click);
			// 
			// new_selection_warning_label
			// 
			resources->ApplyResources(this->new_selection_warning_label, L"new_selection_warning_label");
			this->new_selection_warning_label->ForeColor = System::Drawing::Color::Red;
			this->new_selection_warning_label->Name = L"new_selection_warning_label";
			// 
			// ok_new_selection
			// 
			resources->ApplyResources(this->ok_new_selection, L"ok_new_selection");
			this->ok_new_selection->Name = L"ok_new_selection";
			this->ok_new_selection->UseVisualStyleBackColor = true;
			this->ok_new_selection->Click += gcnew System::EventHandler(this, &main::ok_new_selection_Click);
			// 
			// new_selection
			// 
			resources->ApplyResources(this->new_selection, L"new_selection");
			this->new_selection->Name = L"new_selection";
			// 
			// new_selection_name_label
			// 
			resources->ApplyResources(this->new_selection_name_label, L"new_selection_name_label");
			this->new_selection_name_label->Name = L"new_selection_name_label";
			// 
			// create_selection
			// 
			resources->ApplyResources(this->create_selection, L"create_selection");
			this->create_selection->Name = L"create_selection";
			this->create_selection->UseVisualStyleBackColor = true;
			this->create_selection->Click += gcnew System::EventHandler(this, &main::create_selection_Click);
			// 
			// tree_publication
			// 
			resources->ApplyResources(this->tree_publication, L"tree_publication");
			this->tree_publication->ContextMenuStrip = this->tree_publication_ContextMenuStrip;
			this->tree_publication->Name = L"tree_publication";
			this->tree_publication->ItemDrag += gcnew System::Windows::Forms::ItemDragEventHandler(this, &main::tree_publication_ItemDrag);
			this->tree_publication->NodeMouseClick += gcnew System::Windows::Forms::TreeNodeMouseClickEventHandler(this, &main::tree_publication_NodeMouseClick);
			this->tree_publication->NodeMouseDoubleClick += gcnew System::Windows::Forms::TreeNodeMouseClickEventHandler(this, &main::tree_publication_NodeMouseDoubleClick);
			// 
			// tree_select
			// 
			this->tree_select->AllowDrop = true;
			resources->ApplyResources(this->tree_select, L"tree_select");
			this->tree_select->ContextMenuStrip = this->tree_select_ContextMenuStrip;
			this->tree_select->Name = L"tree_select";
			this->tree_select->AfterCollapse += gcnew System::Windows::Forms::TreeViewEventHandler(this, &main::tree_select_AfterCollapse);
			this->tree_select->AfterExpand += gcnew System::Windows::Forms::TreeViewEventHandler(this, &main::tree_select_AfterExpand);
			this->tree_select->NodeMouseClick += gcnew System::Windows::Forms::TreeNodeMouseClickEventHandler(this, &main::tree_select_NodeMouseClick);
			this->tree_select->NodeMouseDoubleClick += gcnew System::Windows::Forms::TreeNodeMouseClickEventHandler(this, &main::tree_select_NodeMouseDoubleClick);
			this->tree_select->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &main::tree_select_DragDrop);
			this->tree_select->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &main::tree_select_DragEnter);
			this->tree_select->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &main::tree_select_DragOver);
			this->tree_select->Leave += gcnew System::EventHandler(this, &main::tree_select_Leave);
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->Name = L"label2";
			// 
			// main
			// 
			this->AllowDrop = true;
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->menu);
			this->MainMenuStrip = this->menu;
			this->Name = L"main";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &main::main_FormClosing);
			this->Load += gcnew System::EventHandler(this, &main::main_Load);
			this->menu->ResumeLayout(false);
			this->menu->PerformLayout();
			this->tree_publication_ContextMenuStrip->ResumeLayout(false);
			this->tree_select_ContextMenuStrip->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel_new_selection->ResumeLayout(false);
			this->panel_new_selection->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

				 System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
				 String^ path = System::IO::Directory::GetCurrentDirectory();
				 path = path + "\\music.wav";


				 player->SoundLocation = path;
				 player->Load();
				 player->Play();





				 if (MessageBox::Show("Application developped by:\n\nClaudio Araujo\nDiogo Remigio\nLuis Jacinto", "Authors", MessageBoxButtons::OK, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::OK)
				 {

					 player->Stop();


				 }

	}



	private: System::Void create_selection_Click(System::Object^  sender, System::EventArgs^  e) {

				 panel_new_selection->Show();

	}
	private: System::Void ok_new_selection_Click(System::Object^  sender, System::EventArgs^  e) {



				 bool erro = 0;

				 if (String::IsNullOrEmpty(new_selection->Text)){
					 new_selection_name_label->ForeColor = System::Drawing::Color::Red;
					 new_selection_warning_label->Text = "Fill the red field please!";
					 erro = 1;
				 }
				 else{
					 int cnt = tree_select->GetNodeCount(false);

					 if (cnt == 0){


						 String^ Command = "INSERT INTO selection(id) VALUES (";
						 Command += "'" + new_selection->Text + "'";
						 Command += ");";

						 DataBase A;
						 A.Open_DataBase();
						 A.Insert_DataBase(Command);
						 A.Close_DataBase();



						 tree_select->Nodes->Add("pai", new_selection->Text);
						 new_selection_name_label->ForeColor = SystemColors::ControlText;
						 new_selection->Text = "";
					 }
					 else
					 {  // tem elementos

						 bool existe = 0;

						 for (int i = 0; i < cnt; i++){  // verifica se o nome já existe

							 if (tree_select->Nodes[i]->Text == new_selection->Text){
								 existe = 1;
								 break;

							 }
						 }

						 if (existe){  // ja existe
							 new_selection_name_label->ForeColor = System::Drawing::Color::Red;
							 new_selection_warning_label->Text = "The name of selection you choose already exist!";
							 erro = 1;
						 }
						 else{  // é unica a seleção, cria

							 String^ Command = "INSERT INTO selection(id) VALUES (";
							 Command += "'" + new_selection->Text + "'";
							 Command += ");";

							 DataBase A;
							 A.Open_DataBase();
							 A.Insert_DataBase(Command);
							 A.Close_DataBase();

							 tree_select->Nodes->Add("pai", new_selection->Text);
							 new_selection_name_label->ForeColor = SystemColors::ControlText;
							 new_selection->Text = "";

						 }



					 }


				 }


				 if (!erro)
				 {
					 panel_new_selection->Hide();
					 new_selection_warning_label->Text = "";
				 }



	}




			 void new_book(){

				 add_book^ book = gcnew add_book;


				 if (book->ShowDialog() == System::Windows::Forms::DialogResult::OK)  // A form add_book fechou com o botão OK
				 {
					 actualizar_tree_publication();
				 }


			 }



	private: System::Void button_book_Click(System::Object^  sender, System::EventArgs^  e) {

				 new_book();





	}


			 void new_book_chapter(){

				 add_book_chapter^ book_chapter = gcnew add_book_chapter;



				 if (book_chapter->ShowDialog() == System::Windows::Forms::DialogResult::OK)  // A form add_book_chapter fechou com o botão OK
				 {
					 actualizar_tree_publication();
				 }



			 }


	private: System::Void button_book_chapter_Click(System::Object^  sender, System::EventArgs^  e) {

				 new_book_chapter();








	}


			 void new_thesis(){


				 add_thesis^ thesis = gcnew add_thesis;


				 if (thesis->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
					 actualizar_tree_publication();
				 }

			 }

	private: System::Void button_thesis_Click(System::Object^  sender, System::EventArgs^  e) {


				 new_thesis();




	}



			 void new_conference(){

				 add_conference^ conference = gcnew add_conference;



				 if (conference->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
					 actualizar_tree_publication();
				 }




			 }


	private: System::Void button_conference_Click(System::Object^  sender, System::EventArgs^  e) {

				 new_conference();


	}



			 void new_journal(){

				 add_journal^ journal = gcnew add_journal;


				 if (journal->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
					 actualizar_tree_publication();
				 }


			 }



	private: System::Void button_journal_Click(System::Object^  sender, System::EventArgs^  e) {

				 new_journal();




	}
	private: System::Void main_Load(System::Object^  sender, System::EventArgs^  e) {

				 if (!Directory::Exists(Environment::CurrentDirectory + "\\Publications"))
				 {
					 Directory::CreateDirectory(Environment::CurrentDirectory + "\\Publications");
					 Directory::CreateDirectory(Environment::CurrentDirectory + "\\Publications\\Book");
					 Directory::CreateDirectory(Environment::CurrentDirectory + "\\Publications\\Book Chapter");
					 Directory::CreateDirectory(Environment::CurrentDirectory + "\\Publications\\Conference");
					 Directory::CreateDirectory(Environment::CurrentDirectory + "\\Publications\\Journal");
					 Directory::CreateDirectory(Environment::CurrentDirectory + "\\Publications\\Thesis");


				 }

				 if (!Directory::Exists(Environment::CurrentDirectory + "\\Selections"))
				 {
					 Directory::CreateDirectory(Environment::CurrentDirectory + "\\Selections");
				 }

				 
				 DataBase B;
				 B.Create_DataBase();  // cria a base de dados se ainda nao existir
				 B.Close_DataBase();




				 String^ Command = "SELECT * FROM selection";
				 actualiza_tree_selection(Command);



				 preenche_filhos_tree_selection();   // Colocar os nos com as publicacoes das selecoes



				 combo_box_Ordenar->SelectedIndex = 0; // Escolho o tipo de ordenação por default - By type


	}






			 void actualiza_tree_publication(String^ Command, int indice, int n_campos){  // nos pais e filhos


				 DataBase B;
				 B.Open_DataBase();
				 B.Read_DataBase(Command, tree_publication, indice, n_campos);
				 B.Close_DataBase();




			 }

			 void actualiza_tree_selection(String^ Command){  // nos pais apenas


				 DataBase B;
				 B.Open_DataBase();
				 B.Read_DataBase(Command, tree_select);
				 B.Close_DataBase();


			 }

			 void preenche_filhos_tree_selection(){

				 String^ Command;
				 DataBase B;

				 int cnt = tree_select->GetNodeCount(false);

				 for (int i = 0; i < cnt; i++){

					 Command = "";
					 Command += "SELECT * from selection_publications WHERE id_father='" + tree_select->Nodes[i]->Text + "'";


					 B.Open_DataBase();
					 B.Read_DataBase(Command, tree_select, i);
					 B.Close_DataBase();

				 }


			 }








	private: System::Void tree_publication_NodeMouseDoubleClick(System::Object^  sender, System::Windows::Forms::TreeNodeMouseClickEventArgs^  e) {

				 if (e->Button == ::MouseButtons::Left){



					 if (e->Node->Name != "pai"){  // se nao é o pai é um filho -- > publicação

						 //e->Node->Name contem o id do nó
						 // e->Node->Parent->Index;  --> dá o indice do pai!!!!

						 DataBase A;
						 A.Open_DataBase();

						 String^ path = A.Get_Path(e->Node->Name->ToString());
						 A.Close_DataBase();





						 if (File::Exists(path)){

							 Process::Start(path);  // Abre o PDF
						 }




					 }

				 }



	}


	private: System::Void tree_publication_ItemDrag(System::Object^  sender, System::Windows::Forms::ItemDragEventArgs^  e) {

				 DoDragDrop(e->Item, DragDropEffects::Copy);


	}
	private: System::Void tree_select_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {



				 // Retrieve the client coordinates of the drop location.
				 Point targetPoint = tree_select->PointToClient(Point(e->X, e->Y));

				 // Retrieve the node at the drop location.
				 TreeNode^ targetNode = tree_select->GetNodeAt(targetPoint);

				 // Retrieve the node that was dragged.
				 TreeNode^ draggedNode = dynamic_cast<TreeNode^>(e->Data->GetData(TreeNode::typeid));

				 // Confirm that the node at the drop location is not  
				 // the dragged node or a descendant of the dragged node. 





				 if (targetNode == nullptr)
				 {
				 }
				 else{

					 

					 if (draggedNode->Name != "pai"){  // o item que está a ser arrastado é um nó filho (publicação)



						 
						 
						 

						 if (targetNode->Name == "pai")
						 {
							

							 if (e->Effect == DragDropEffects::Copy)
							 {
								 int cnt = targetNode->GetNodeCount(true);

								


								 bool existe = 0;

								 for (int i = 0; i < cnt; i++){ // verifico se o nó que queremos colocar o item arrastado já existe no sitio que quero por

									 if (draggedNode->Text == targetNode->Nodes[i]->Text){
										 existe = 1;
										 break;
									 }

								 }





								 cnt = tree_select->GetNodeCount(false);
								 int indice = -1;




								 // INDICE DO PAI COM COR BLUE
								 for (int i = 0; i < cnt; i++){

									 if (tree_select->Nodes[i]->ForeColor == Color::Blue){

										 indice = i;
										 break;
									 }

								 }

								 if (indice == -1){  // não ha nenhum pai azul

									 if (!existe){
										
										
										 targetNode->ForeColor = Color::Blue;
										 TreeNode^ node = dynamic_cast<TreeNode^>(draggedNode->Clone()); // no a ser arrastado

										 DataBase A;
										 A.Open_DataBase();

										 String^ path = A.Get_Path(node->Name->ToString());
										 A.Close_DataBase();
										
											 

										 String^ Command = "INSERT INTO selection_publications(id, reference, id_father, path) VALUES (";
										 Command += "'" + node->Name + "_" + targetNode->Text + "'" + ",";
										 Command += "'" + node->Text + "'" + ",";
										 Command += "'" + targetNode->Text + "'" + ",";
										 Command += "'" + path + "'";
										 Command += ");";

										 
										 A.Open_DataBase();
										 A.Insert_DataBase(Command);
										 A.Close_DataBase();

										 node->Name = path;  // ponho o path no name do no para depois abrir o pdf respectivo...

										 targetNode->Nodes->Add(node);  // no do tree_select que vai ficar o no arrastado
										 node->ForeColor = Color::Green;

										 targetNode->Expand();
									 }

								 }

								 else if (tree_select->Nodes[indice]->Text == targetNode->Text){  // é o pai azul  --> coloca no tree_select


									 if (!existe){  // se não existe adiciono o nó

										 TreeNode^ node = dynamic_cast<TreeNode^>(draggedNode->Clone()); // no a ser arrastado
										 node->ForeColor = Color::Green;

										 DataBase A;
										 A.Open_DataBase();

										 String^ path = A.Get_Path(node->Name->ToString());
										 A.Close_DataBase();
										



										 String^ Command = "INSERT INTO selection_publications(id, reference, id_father, path) VALUES (";
										 Command += "'" + node->Name + "_" + targetNode->Text + "'" + ",";
										 Command += "'" + node->Text + "'" + ",";
										 Command += "'" + targetNode->Text + "'" + ",";
										 Command += "'" + path + "'";
										 Command += ");";

										 
										 A.Open_DataBase();
										 A.Insert_DataBase(Command);
										 A.Close_DataBase();

										 node->Name = path;  // ponho o path no name do no para depois abrir o pdf respectivo...

										 targetNode->Nodes->Add(node);  // no do tree_select que vai ficar o no arrastado
										 node->ForeColor = Color::Green;

									 }



								 }
								 else // não é o pai azul
								 {
									 MessageBox::Show(String::Concat("The selection ", tree_select->Nodes[indice]->Text, " is open! You have to close it for adding more publications to ", targetNode->Text, "!"));


								 }












							 }



						 }
					 }
				 }

	}



	private: System::Void tree_select_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {


				 e->Effect = e->AllowedEffect;

	}
	private: System::Void tree_select_DragOver(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {

				 // Retrieve the client coordinates of the mouse position.
				 Point targetPoint = tree_select->PointToClient(Point(e->X, e->Y));

				 // Select the node at the mouse position.
				 tree_select->SelectedNode = tree_select->GetNodeAt(targetPoint);

	}



	private: System::Void contextMenuStrip1_Opening(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {

				 // Se usar o segundo do rato em cima dos nos pais cancelo a abertura do contextmenustrip

				 if (tree_publication->SelectedNode->Name == "pai")
					 e->Cancel = true;






	}
	private: System::Void tree_publication_NodeMouseClick(System::Object^  sender, System::Windows::Forms::TreeNodeMouseClickEventArgs^  e) {

				 // Seleciono o no em que usei o rato


				 tree_publication->SelectedNode = e->Node;



	}



	private: System::Void cancel_new_selection_Click(System::Object^  sender, System::EventArgs^  e) {

				 new_selection_name_label->ForeColor = SystemColors::ControlText;
				 new_selection->Text = "";
				 panel_new_selection->Hide();
				 new_selection_warning_label->Text = "";


	}


	private: System::Void referenceToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

				 System::Windows::Forms::Clipboard::SetText(tree_publication->SelectedNode->Text);


	}
	private: System::Void citationKeyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

				 System::Windows::Forms::Clipboard::SetText(tree_publication->SelectedNode->Name);
	}
	private: System::Void deleteReferenceToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {


				 if (MessageBox::Show("Do you really want to delete this publication?", "Delete", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes){

					 String^ table;

					 DataBase B;
					 B.Open_DataBase();
					 
					 if (B.Verifica_ID_DataBase("book", tree_publication->SelectedNode->Name)){
						 table = "book";
					 }
					 
					 B.Close_DataBase();

					 B.Open_DataBase();
					
					 if (B.Verifica_ID_DataBase("book_chapter", tree_publication->SelectedNode->Name)){
						 table = "book_chapter";
					 }

					 B.Close_DataBase();

					 B.Open_DataBase();
					 
					 if (B.Verifica_ID_DataBase("conference", tree_publication->SelectedNode->Name)){
						 table = "conference";
					 }

					 B.Close_DataBase();

					 B.Open_DataBase();
					
					 if (B.Verifica_ID_DataBase("journal", tree_publication->SelectedNode->Name)){
						 table = "journal";
					 }

					 B.Close_DataBase();

					 B.Open_DataBase();
					 
					 if (B.Verifica_ID_DataBase("thesis", tree_publication->SelectedNode->Name)){
						 table = "thesis";
					 }

					 B.Close_DataBase();



					

					 DataBase A;
					 A.Open_DataBase();


					 String^ path = A.Get_Path(tree_publication->SelectedNode->Name->ToString());

					 A.Close_DataBase();



					 String^ Command = "delete from " + table + " WHERE id='" + tree_publication->SelectedNode->Name + "'";


					 
					 B.Open_DataBase();
					 B.Delete_DataBase(Command);
					 B.Close_DataBase();



					 

					 File::Delete(path);

					
					 
					 

					 TreeNode ^ pai = tree_publication->SelectedNode->Parent;
					 
					 if (pai->GetNodeCount(true) == 1 && (combo_box_Ordenar->SelectedIndex == 1 || combo_box_Ordenar->SelectedIndex == 2)){

						 pai->Remove();

					 }
					 else
					 {
						 tree_publication->SelectedNode->Remove();
					 }




				 }

	}

	private: System::Void combo_box_Ordenar_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {

				 e->Handled = true;

	}



			 void sort_ascending(TreeView^ a)  // este esta mal
			 {

				 int i, j;
				 int n = a->GetNodeCount(false);

				 for (i = 0; i < n; i++)
				 {
					 for (j = 1; j < (n - i); j++)
					 {
						 String^ aux1 = a->Nodes[j - 1]->Text;
						 String^ aux2 = a->Nodes[j]->Text;

						 double foo = System::Convert::ToDouble(aux1);
						 int value_one = System::Convert::ToInt32(foo);


						 foo = System::Convert::ToDouble(aux2);
						 int value_two = System::Convert::ToInt32(foo);

					
						 if (value_one > value_two)
						 {

							 //Trocar os nos
							 TreeNode^ n1 = a->Nodes[j - 1];
							 TreeNode^ n2 = a->Nodes[j];
							 a->Nodes->Remove(n1);
							 a->Nodes->Remove(n2);
							 a->Nodes->Insert(j, n1);
							 a->Nodes->Insert(j - 1, n2);

						 }

					 }
				 }

			 }


			 void sort_descending_alphabetic(TreeView^ a){   // sort - alphabetic


				 int i, j;
				 int n = a->GetNodeCount(false);

				 for (i = 0; i < n; i++)
				 {
					 for (j = 1; j < (n - i); j++)
					 {
						 String^ aux1 = a->Nodes[j - 1]->Text;
						 String^ aux2 = a->Nodes[j]->Text;

						


						 if (aux1->CompareTo(aux2) > 0)
						 {

							 //Trocar os nos
							 TreeNode^ n1 = a->Nodes[j - 1];
							 TreeNode^ n2 = a->Nodes[j];
							 a->Nodes->Remove(n1);
							 a->Nodes->Remove(n2);
							 a->Nodes->Insert(j, n1);
							 a->Nodes->Insert(j - 1, n2);


						 }

					 }
				 }



			 }



			 void sort_descending_year(TreeView^ a)  // sort - year
			 {

				 int i, j;
				 int n = a->GetNodeCount(false);

				 for (i = 0; i < n; i++)
				 {
					 for (j = 1; j < (n - i); j++)
					 {
						 String^ aux1 = a->Nodes[j - 1]->Text;
						 String^ aux2 = a->Nodes[j]->Text;

						 double foo = System::Convert::ToDouble(aux1);
						 int value_one = System::Convert::ToInt32(foo);


						 foo = System::Convert::ToDouble(aux2);
						 int value_two = System::Convert::ToInt32(foo);

						// MessageBox::Show(String::Concat(value_one + "/" + value_two));

						 if (value_one < value_two)
						 {

							 //Trocar os nos
							 TreeNode^ n1 = a->Nodes[j - 1];
							 TreeNode^ n2 = a->Nodes[j];
							 a->Nodes->Remove(n1);
							 a->Nodes->Remove(n2);
							 a->Nodes->Insert(j, n1);
							 a->Nodes->Insert(j - 1, n2);
							 

						 }

					 }
				 }

			 }


			 void actualizar_tree_publication(){

				 String^ Command = "SELECT * FROM ";
				 String^ Aux = "";


				 Aux += combo_box_Ordenar->SelectedItem;

				 
				 if (Aux == "Year")
				 {


					 tree_publication->Nodes->Clear();

					 DataBase B;


					 // BOOK

					 Aux = Command + "book";



					 B.Open_DataBase();
					 B.Read_DataBase_year(Aux, tree_publication, 0, 8, 6);
					 B.Close_DataBase();

					 //BOOK CHAPTER

					 Aux = Command + "book_chapter";

					 B.Open_DataBase();
					 B.Read_DataBase_year(Aux, tree_publication, 2, 11, 8);
					 B.Close_DataBase();


					 //THESIS

					 Aux = Command + "thesis";

					 B.Open_DataBase();
					 B.Read_DataBase_year(Aux, tree_publication, 4, 7, 6);
					 B.Close_DataBase();


					 //JOURNAL

					 Aux = Command + "journal";

					 B.Open_DataBase();
					 B.Read_DataBase_year(Aux, tree_publication, 1, 10, 8);
					 B.Close_DataBase();

					 //CONFERENCE

					 Aux = Command + "conference";

					 B.Open_DataBase();
					 B.Read_DataBase_year(Aux, tree_publication, 3, 9, 7);
					 B.Close_DataBase();

					 sort_descending_year(tree_publication);
					 sort_descending_year(tree_publication);

				 }
				 else if (Aux == "Alphabetic"){



					 tree_publication->Nodes->Clear();

					 DataBase B;


					 // BOOK

					 Aux = Command + "book";



					 B.Open_DataBase();
					 B.Read_DataBase_alphabetic(Aux, tree_publication, 8, 9);
					 B.Close_DataBase();

					 //BOOK CHAPTER

					 Aux = Command + "book_chapter";

					 B.Open_DataBase();
					 B.Read_DataBase_alphabetic(Aux, tree_publication, 11, 12);
					 B.Close_DataBase();


					 //THESIS

					 Aux = Command + "thesis";

					 B.Open_DataBase();
					 B.Read_DataBase_alphabetic(Aux, tree_publication, 7, 8);
					 B.Close_DataBase();


					 //JOURNAL

					 Aux = Command + "journal";

					 B.Open_DataBase();
					 B.Read_DataBase_alphabetic(Aux, tree_publication, 10, 11);
					 B.Close_DataBase();

					 //CONFERENCE

					 Aux = Command + "conference";

					 B.Open_DataBase();
					 B.Read_DataBase_alphabetic(Aux, tree_publication, 9, 10);
					 B.Close_DataBase();

				

					 sort_descending_alphabetic(tree_publication);
					 sort_descending_alphabetic(tree_publication);



				 }
				 else if (Aux == "Type")
				 {


					 tree_publication->Nodes->Clear();
					 tree_publication->Nodes->Add("Book");
					 tree_publication->Nodes[0]->Name = "pai";
					 tree_publication->Nodes->Add("Journal");
					 tree_publication->Nodes[1]->Name = "pai";
					 tree_publication->Nodes->Add("Book Chapter");
					 tree_publication->Nodes[2]->Name = "pai";
					 tree_publication->Nodes->Add("Conference");
					 tree_publication->Nodes[3]->Name = "pai";
					 tree_publication->Nodes->Add("Thesis");
					 tree_publication->Nodes[4]->Name = "pai";





					 //BOOK

					 Aux = Command + "book";
					 actualiza_tree_publication(Aux, 0, 8);

					 //BOOK CHAPTER

					 Aux = Command + "book_chapter";
					 actualiza_tree_publication(Aux, 2, 11);

					 //THESIS

					 Aux = Command + "thesis";
					 actualiza_tree_publication(Aux, 4, 7);

					 //JOURNAL

					 Aux = Command + "journal";
					 actualiza_tree_publication(Aux, 1, 10);

					 //CONFERENCE

					 Aux = Command + "conference";
					 actualiza_tree_publication(Aux, 3, 9);



				 }


			 }


	private: System::Void combo_box_Ordenar_TextChanged(System::Object^  sender, System::EventArgs^  e) {

				 actualizar_tree_publication();




	}
	private: System::Void tree_select_NodeMouseClick(System::Object^  sender, System::Windows::Forms::TreeNodeMouseClickEventArgs^  e) {

				 int cnt = tree_select->GetNodeCount(false);
				 int indice = -1;



				 // É UM PAI
				 bool pai = 0;

				 cnt = tree_select->Nodes->Count;

				 for (int i = 0; i < cnt; i++){

					 if (tree_select->Nodes[i]->Text == e->Node->Text){  // verifico se o no que cliquei duas vezes não é um pai
						 pai = 1;
						 break;
					 }

				 }




				 if (pai){

					 // INDICE DO PAI COM COR BLUE
					 for (int i = 0; i < cnt; i++){

						 if (tree_select->Nodes[i]->ForeColor == Color::Blue){

							 indice = i;
							 break;
						 }

					 }





					 if (indice == -1){  // não ha nenhum pai azul
						 tree_select->SelectedNode = e->Node;
						 current_selected->Text = "";
						 current_selected->Text = "Father - " + tree_select->SelectedNode->Text;


					 }


					 else if (tree_select->Nodes[indice]->Text == e->Node->Text){  // é o pai azul
						 tree_select->SelectedNode = e->Node;
						 current_selected->Text = "";
						 current_selected->Text = "Father - " + tree_select->SelectedNode->Text;


					 }



					 else
					 {

						 tree_select->SelectedNode = e->Node;
						 current_selected->Text = "";
						 current_selected->Text = "Father - " + tree_select->SelectedNode->Text;
						 MessageBox::Show(String::Concat("The selection ", tree_select->Nodes[indice]->Text, " is open!"));


					 }

				 }


				 else{ // é um filho do pai azul 


					 // é um filho do pai azul

					 tree_select->SelectedNode = e->Node;
					 current_selected->Text = "";
					 current_selected->Text = "Son - " + tree_select->SelectedNode->Text;



				 }









	}
	private: System::Void tree_select_NodeMouseDoubleClick(System::Object^  sender, System::Windows::Forms::TreeNodeMouseClickEventArgs^  e) {




				 if (e->Button == ::MouseButtons::Left){

					 

					 if (tree_select->SelectedNode->Name != "pai"){  // se nao é o pai é um filho -- > publicação

						 //e->Node->Name contem o id do nó
						 // e->Node->Parent->Index;  --> dá o indice do pai!!!!

						 String^ path = e->Node->Name;  // contem o path do pdf

						 if (File::Exists(path)){

							 Process::Start(path);  // Abre o PDF
						 }
						 else  // nao existe o path, o que implica que a publicação foi apagada! Pergunto ao user se a quer apagar ja que esta ja foi apagada!
						 {

							 if (MessageBox::Show("This publication was deleted recently, do you want to remove it from this selection?", "Remove", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes){

								 String^ Command = "delete from selection_publications WHERE path='" + tree_select->SelectedNode->Name + "'";  

								 DataBase B;
								 B.Open_DataBase();
								 B.Delete_DataBase(Command);
								 B.Close_DataBase();

     							 tree_select->SelectedNode->Remove();


							 }


						 }



						 
					 }


				 }




	}
	private: System::Void deleteToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

				 // delete no tree_select
				 tree_select->SelectedNode->ForeColor = Color::Red;


				 if (tree_select->SelectedNode->Name == "pai") // é um pai
				 {

					 int cnt = tree_select->SelectedNode->Nodes->Count;

					 if (MessageBox::Show(String::Concat("Do you really want to erase entirely this selection?", tree_select->SelectedNode->Text), "Erase", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes){

						 DataBase B;

						 if (cnt == 0){ // nao tem filhos apaga pai apenas


							 String^ Command = "delete from selection WHERE id='" + tree_select->SelectedNode->Text + "'";  // apago o pai da base de dados
							 B.Open_DataBase();
							 B.Delete_DataBase(Command);
							 B.Close_DataBase();


							 tree_select->SelectedNode->Remove();  // apaga o no do treeview


						 }
						 else  // tem filhos
						 {


							 String^ Command = "delete from selection_publications WHERE id_father='" + tree_select->SelectedNode->Text + "'";  // apago todos os filhos



							 B.Open_DataBase();
							 B.Delete_DataBase(Command);
							 B.Close_DataBase();


							 // APAGAR PAI

							 Command = "delete from selection WHERE id='" + tree_select->SelectedNode->Text + "'";  // apago o pai
							 B.Open_DataBase();
							 B.Delete_DataBase(Command);
							 B.Close_DataBase();


							 tree_select->SelectedNode->Remove();  // apaga o no do treeview





						 }



					 }
					 else
					 {
						 tree_select->SelectedNode->ForeColor = Color::Black;
					 }




					 //MessageBox::Show("Deleting the selected selection will automatically delete the publications associated with it!");


				 }





	}
	private: System::Void undoDeleteToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

				 tree_select->SelectedNode->ForeColor = Color::Black;


	}
	private: System::Void tree_select_AfterCollapse(System::Object^  sender, System::Windows::Forms::TreeViewEventArgs^  e) {
				 if (e->Node->ForeColor == Color::Red)
				 {
					 if (MessageBox::Show(String::Concat("Do you really want to erase entirely this selection?", e->Node), "Erase", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes){

						 // APAGAR da base de dados toda a seleção

						 // apagar o no e os filhos todos 

						 // APAGAR FILHOS

						 String^ Command = "delete from selection_publications WHERE id_father='" + e->Node->Text + "'";  // apago todos os filhos


						 DataBase B;
						 B.Open_DataBase();
						 B.Delete_DataBase(Command);
						 B.Close_DataBase();


						 // APAGAR PAI

						 Command = "delete from selection WHERE id='" + e->Node->Text + "'";  // apago o pai
						 B.Open_DataBase();
						 B.Delete_DataBase(Command);
						 B.Close_DataBase();


						 e->Node->Remove();





					 }
					 else  // não quer apagar nenhum no -> por os vermelhos a preto
					 {

						 // NOS VERMELHOS PASSAM A PRETO
						 int cnt = e->Node->Nodes->Count;

						 for (int i = 0; i < cnt; i++){

							 e->Node->Nodes[i]->ForeColor = Color::Black; // Poem a preto


						 }




						 // NOS VERDES PASSAM A PRETO

						 for (int i = 0; i < cnt; i++){

							 if (e->Node->Nodes[i]->ForeColor == Color::Green){ // Poem a VERDE
								 e->Node->Nodes[i]->ForeColor = Color::Black;

							 }

						 }


						 e->Node->ForeColor = Color::Black;
					 }


				 }


				 else  // o no esta azul  --> apagar apenas os que estão a vermelho
				 {

					 bool vermelho = false;

					 DataBase B;
					 int cnt = e->Node->Nodes->Count;

					 for (int i = 0; i < cnt; i++){

						 if (e->Node->Nodes[i]->ForeColor == Color::Red){ // se esta a vermelho elimina da base de dados e do no pai



							 String^ Command = "delete from selection_publications WHERE path='" + e->Node->Nodes[i]->Name + "'";  // apago os filhos vermelhos



							 B.Open_DataBase();
							 B.Delete_DataBase(Command);
							 B.Close_DataBase();


							 vermelho = true;




						 }

					 }

					 if (vermelho){
						 // ELIMINAR NOS COM CUIDADO

						 int i = 0;
						 cnt = e->Node->Nodes->Count;


						 for (int i = 0; i < cnt; i++){

							 if (e->Node->Nodes[i]->ForeColor == Color::Red){

								 e->Node->Nodes[i]->Remove();

								 cnt--;

								 if (i == 0){
									 i--;
								 }
								 if (cnt == 0){
									 break;
								 }


							 }






						 }
					 }
					 // ELIMINA E TEM CUIDADO COM OS INDICES



					 // NOS VERDES PASSAM A PRETO

					 for (int i = 0; i < cnt; i++){

						 if (e->Node->Nodes[i]->ForeColor == Color::Green){ // Poem a VERDE
							 e->Node->Nodes[i]->ForeColor = Color::Black;

						 }

					 }

					 e->Node->ForeColor = Color::Black;



				 }





	}




	private: System::Void tree_select_AfterExpand(System::Object^  sender, System::Windows::Forms::TreeViewEventArgs^  e) {


				 int cnt = tree_select->GetNodeCount(false);
				 int indice1 = -1;
				 int indice2 = -1;




				 // INDICE DO PAI COM COR BLUE
				 for (int i = 0; i < cnt; i++){

					 if (tree_select->Nodes[i]->ForeColor == Color::Blue){

						 indice1 = i;
						 break;
					 }

				 }


				 // INDICE DO PAI COM COR BLUE
				 for (int i = 0; i < cnt; i++){

					 if (tree_select->Nodes[i]->ForeColor == Color::Red){

						 indice2 = i;
						 break;
					 }

				 }






				 if (indice1 == -1 && indice2 == -1){  // não ha nenhum pai azul nem vermelho
					 e->Node->ForeColor = Color::Blue;

				 }
				 else if (indice1 == -1)  //não há pai azul mas há pai vermelho
				 {

					 if (tree_select->Nodes[indice2]->Text != e->Node->Text){  // não é o paivermelho

						 e->Node->Collapse();  // não é o pai vermelho, logo fecha


					 }

				 }
				 else if (indice2 == -1)  //não há pai vermeho mas há pai azul
				 {
					 if (tree_select->Nodes[indice1]->Text == e->Node->Text){  // é o pai azul
					 }

					 else // não é o pai azul
					 {
						 e->Node->Collapse();


					 }



				 }







	}
	private: System::Void tree_select_ContextMenuStrip_Opening(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {


				 int cnt = tree_select->GetNodeCount(false);
				 int indice1 = -1;
				 int indice2 = -1;



				 // É UM PAI

				 bool pai = 0;

				 cnt = tree_select->Nodes->Count;

				 for (int i = 0; i < cnt; i++){

					 if (tree_select->Nodes[i]->Text == tree_select->SelectedNode->Text){  // verifico se o no que cliquei duas vezes é um pai
						 pai = 1;
						 break;
					 }

				 }


				 // cancel sem pai azul ; no pai sem ser azul

				 if (pai){

					 // INDICE DO PAI COM COR BLUE
					 for (int i = 0; i < cnt; i++){

						 if (tree_select->Nodes[i]->ForeColor == Color::Blue){

							 indice1 = i;
							 break;
						 }

					 }


					 // INDICE DO PAI COM COR BLUE
					 for (int i = 0; i < cnt; i++){

						 if (tree_select->Nodes[i]->ForeColor == Color::Red){

							 indice2 = i;
							 break;
						 }

					 }





					 if (indice1 == -1 && indice2 == -1){  // não ha nenhum pai azul nem vermelho
						 //e->Cancel = true;

					 }
					 else if (indice1 == -1)  //não há pai azul mas há pai vermelho
					 {
						 if (tree_select->SelectedNode->ForeColor == Color::Red){


						 }
						 else
						 {
							 e->Cancel = true;
						 }


					 }
					 else if (indice2 == -1)  //não há pai vermeho mas há pai azul
					 {
						 if (tree_select->SelectedNode->ForeColor == Color::Blue){


						 }
						 else
						 {
							 e->Cancel = true;
						 }


					 }
					 else
					 {
						 e->Cancel = true;
					 }









				 }






				 if (tree_select->GetNodeCount(false) == 0){

					 e->Cancel = true;
				 }











	}


	private: System::Void main_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {


				 if (MessageBox::Show("Do you really want to exit the program?", "Exit", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes)
					 e->Cancel = false;
				 else
					 e->Cancel = true;


	}

	private: System::Void bookToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

				 new_book();

	}
	private: System::Void bookChapterToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

				 new_book_chapter();


	}
	private: System::Void conferenceToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {


				 new_conference();

	}
	private: System::Void journalToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

				 new_journal();

	}
	private: System::Void thesisToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

				 new_thesis();

	}

	private: System::Void byTypeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

				 combo_box_Ordenar->SelectedIndex = 0;

	}
private: System::Void byYearDescendingToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 combo_box_Ordenar->SelectedIndex = 1;

}
private: System::Void alphabeticToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 combo_box_Ordenar->SelectedIndex = 2;

}
private: System::Void exportReferencesToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {


			 add_export_reference^ a = gcnew add_export_reference;

			 if (tree_select->SelectedNode->Name == "pai"){
				 a->selecionado = tree_select->SelectedNode->Text;

			 }
			 else
			 {
				 a->selecionado = tree_select->SelectedNode->Parent->Text;

		      }

			 




			 if (a->ShowDialog() == System::Windows::Forms::DialogResult::OK)  // A form add_book fechou com o botão OK
			 {
				 MessageBox::Show("Sucess - Export References ");
			 }




}
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 if (MessageBox::Show("Do you really want to exit the program?", "Exit", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes)
				 Application::Exit();

}
private: System::Void publicationsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 String^ path = Environment::CurrentDirectory + "\\Publications";
			 
			 if (Directory::Exists(path))
			 {
				 Process::Start("explorer.exe",path);
			 }


}
private: System::Void selectionsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 String^ path = Environment::CurrentDirectory + "\\Selections";

			 if (Directory::Exists(path))
			 {
				 Process::Start("explorer.exe", path);
			 }


}
private: System::Void tree_select_Leave(System::Object^  sender, System::EventArgs^  e) {

			 current_selected->Text = "";


}
private: System::Void combo_box_Ordenar_KeyPress_1(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {

			 e->Handled = true;

}
};
}















