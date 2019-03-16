#pragma once
#include "Cricket.h"
#include "GlobalFuncs.h"
namespace FunBrainz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(95, 101);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 try { 
					 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection(); 
					 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;"; 
					 String ^ Sql = "Delete from Students where StudentId = 3"; 
					 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con); 
					 con->Open(); 
					 command->ExecuteNonQuery(); 
					 con->Close(); }
				 catch (Exception ^ ex) { 
					 MessageBox::Show(ex->Message); 
				 } 
				 std::pair <std::string, long int> ques = GlobalFuncs::generateQuestion(4, 1);
				 String ^ x = gcnew String(ques.first.c_str());
				 MessageBox::Show(x); 
				 Cricket ^ form = gcnew Cricket(this, 1); 
				 form->ShowDialog();
			 }

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 srand(time(0));
			 }
	};
}
