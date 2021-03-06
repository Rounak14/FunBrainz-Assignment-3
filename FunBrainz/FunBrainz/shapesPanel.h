#pragma once
#include "question_no_figure.h"
#include "question_with_figure.h"
#include "shape_defination.h"
#include "all_shape.h"
#include "game.h"
namespace FunBrainz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	using namespace System::IO;


	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class shapesPanel : public System::Windows::Forms::Form
	{
	public:
		shapesPanel(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		shapesPanel(Form^ obj)
		{
			InitializeComponent();
			caller=obj;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~shapesPanel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;


	private: System::Windows::Forms::Button^  button6;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(288, 146);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(58, 84);
			this->button1->TabIndex = 0;
			this->button1->Text = L"register_button";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &shapesPanel::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(106, 111);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(502, 20);
			this->textBox1->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(9, 326);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(172, 50);
			this->button2->TabIndex = 2;
			this->button2->Text = L"no_figure_question";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &shapesPanel::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(447, 245);
			this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(226, 84);
			this->button3->TabIndex = 3;
			this->button3->Text = L"figure_question";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &shapesPanel::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(325, 373);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"label1";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(9, 229);
			this->button4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(158, 46);
			this->button4->TabIndex = 5;
			this->button4->Text = L"shape_defination";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &shapesPanel::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(9, 158);
			this->button5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(122, 61);
			this->button5->TabIndex = 6;
			this->button5->Text = L"all_shape";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &shapesPanel::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(24, 42);
			this->button6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(129, 56);
			this->button6->TabIndex = 7;
			this->button6->Text = L"game";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &shapesPanel::button6_Click);
			// 
			// shapesPanel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(709, 443);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"shapesPanel";
			this->Text = L"shapesPanel";
			this->Load += gcnew System::EventHandler(this, &shapesPanel::shapesPanel_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Form^ caller;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 int ct=0;
				 String^ s=textBox1->Text;
				 try{
					 OleDbConnection^ dbcon = gcnew OleDbConnection();
					 dbcon->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=identify_shape.accdb;";

					 String ^ str = "SELECT * FROM register_table WHERE name='"+textBox1->Text+"';";
					 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(str, dbcon);
					 dbcon->Open();
					 OleDbDataReader^ reader;
					 reader = command->ExecuteReader();

					 while (reader->Read())
					 {// if(s==reader->GetString(1));
						 ct++;

					 }
					 dbcon->Close();
					 //if(ct==0)
					 // label1->Text="You are not registered";
					 //else
					 label1->Text="you are registered press button2 or button3";
				 }
				 catch (Exception ^ ex) {
					 MessageBox::Show(ex->Message);
				 }
			 }





	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

				 if( label1->Text=="you are registered press button2 or button3")
				 {
					 question_no_figure^ f2 = gcnew question_no_figure(textBox1->Text,this);
					 this->Hide();
					 f2->ShowDialog();
					 //this->Refresh();
					 this->Show();
				 }

			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(label1->Text=="you are registered press button2 or button3")
				 { question_with_figure^ f5 = gcnew question_with_figure(textBox1->Text,this);
				 this->Hide();
				 f5->ShowDialog();
				 //this->Refresh();
				 this->Show();	 }
			 }

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

				 shape_defination^ f1 = gcnew shape_defination();
				 this->Hide();
				 f1->ShowDialog();
				 //this->Refresh();
				 this->Show();	 
			 }
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
				 all_shape^ f3 = gcnew all_shape();
				 this->Hide();
				 f3->ShowDialog();
				 //this->Refresh();
				 this->Show();
			 }

	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(label1->Text=="you are registered press button2 or button3") 
				 { game^ f4 = gcnew game(textBox1->Text,this);
				 this->Hide();
				 f4->ShowDialog();
				 //this->Refresh();
				 this->Show();	 }
			 }

	private: System::Void shapesPanel_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}

