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
	/// Summary for add_export_reference
	/// </summary>
	public ref class add_export_reference : public System::Windows::Forms::Form
	{
	public:
		add_export_reference(void)
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
		~add_export_reference()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  name_file;
	protected:

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  ok_export_reference;
	private: System::Windows::Forms::Button^  cancel_export_reference;
	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(add_export_reference::typeid));
			this->name_file = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ok_export_reference = (gcnew System::Windows::Forms::Button());
			this->cancel_export_reference = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// name_file
			// 
			this->name_file->Location = System::Drawing::Point(106, 12);
			this->name_file->Name = L"name_file";
			this->name_file->Size = System::Drawing::Size(166, 20);
			this->name_file->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Name of the file:";
			// 
			// ok_export_reference
			// 
			this->ok_export_reference->Location = System::Drawing::Point(57, 47);
			this->ok_export_reference->Name = L"ok_export_reference";
			this->ok_export_reference->Size = System::Drawing::Size(75, 23);
			this->ok_export_reference->TabIndex = 1;
			this->ok_export_reference->Text = L"OK";
			this->ok_export_reference->UseVisualStyleBackColor = true;
			this->ok_export_reference->Click += gcnew System::EventHandler(this, &add_export_reference::ok_export_reference_Click);
			// 
			// cancel_export_reference
			// 
			this->cancel_export_reference->Location = System::Drawing::Point(138, 47);
			this->cancel_export_reference->Name = L"cancel_export_reference";
			this->cancel_export_reference->Size = System::Drawing::Size(75, 23);
			this->cancel_export_reference->TabIndex = 2;
			this->cancel_export_reference->Text = L"Cancel";
			this->cancel_export_reference->UseVisualStyleBackColor = true;
			this->cancel_export_reference->Click += gcnew System::EventHandler(this, &add_export_reference::cancel_export_reference_Click);
			// 
			// add_export_reference
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(292, 83);
			this->Controls->Add(this->cancel_export_reference);
			this->Controls->Add(this->ok_export_reference);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->name_file);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"add_export_reference";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"add_export_reference";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &add_export_reference::add_export_reference_KeyDown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		public: String^ selecionado;

	private: System::Void add_export_reference_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

				 if (e->KeyCode == Keys::Escape)
				 {
					 this->Close();
				 }

	}
	private: System::Void ok_export_reference_Click(System::Object^  sender, System::EventArgs^  e) {

				 
				
			

				 if (!String::IsNullOrEmpty(name_file->Text)){
				


				String^ Command = "SELECT * from selection_publications WHERE id_father='" + selecionado + "'";

				DataBase B;
				B.Open_DataBase();
				B.Write_in_File(Command,name_file->Text);
				B.Close_DataBase();


				 this->DialogResult = System::Windows::Forms::DialogResult::OK;

				 Close();  // Fecha a form

				 }


	}
private: System::Void cancel_export_reference_Click(System::Object^  sender, System::EventArgs^  e) {


			 
			 this->DialogResult = System::Windows::Forms::DialogResult::Cancel;

			 Close();  // Fecha a form

}
};
}
