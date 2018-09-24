#pragma once
#include "Selection.h"

namespace MF_DB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	// addition#####
	using namespace System::Data::OleDb;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:

		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnEnter;
	protected:
	private: System::Windows::Forms::Button^  btnClear;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  stuNumText;
	private: System::Windows::Forms::TextBox^  majorText;
	private: System::Windows::Forms::Label^  testLbl1;
	private: System::Windows::Forms::Label^  testLbl2;
	private: System::Windows::Forms::Label^  testLbl3;



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
			this->btnEnter = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->stuNumText = (gcnew System::Windows::Forms::TextBox());
			this->majorText = (gcnew System::Windows::Forms::TextBox());
			this->testLbl1 = (gcnew System::Windows::Forms::Label());
			this->testLbl2 = (gcnew System::Windows::Forms::Label());
			this->testLbl3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnEnter
			// 
			this->btnEnter->Location = System::Drawing::Point(219, 81);
			this->btnEnter->Name = L"btnEnter";
			this->btnEnter->Size = System::Drawing::Size(75, 23);
			this->btnEnter->TabIndex = 0;
			this->btnEnter->Text = L"Enter";
			this->btnEnter->UseVisualStyleBackColor = true;
			this->btnEnter->Click += gcnew System::EventHandler(this, &MyForm::btnEnter_Click);
			// 
			// btnClear
			// 
			this->btnClear->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnClear->Location = System::Drawing::Point(312, 81);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(75, 23);
			this->btnClear->TabIndex = 1;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &MyForm::btnClear_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(37, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"StuNum:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(57, 81);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Major:";
			// 
			// stuNumText
			// 
			this->stuNumText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stuNumText->Location = System::Drawing::Point(107, 36);
			this->stuNumText->Name = L"stuNumText";
			this->stuNumText->Size = System::Drawing::Size(91, 26);
			this->stuNumText->TabIndex = 4;
			// 
			// majorText
			// 
			this->majorText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->majorText->Location = System::Drawing::Point(107, 78);
			this->majorText->Name = L"majorText";
			this->majorText->Size = System::Drawing::Size(91, 26);
			this->majorText->TabIndex = 5;
			// 
			// testLbl1
			// 
			this->testLbl1->AutoSize = true;
			this->testLbl1->Location = System::Drawing::Point(243, 28);
			this->testLbl1->Name = L"testLbl1";
			this->testLbl1->Size = System::Drawing::Size(0, 13);
			this->testLbl1->TabIndex = 6;
			// 
			// testLbl2
			// 
			this->testLbl2->AutoSize = true;
			this->testLbl2->Location = System::Drawing::Point(337, 28);
			this->testLbl2->Name = L"testLbl2";
			this->testLbl2->Size = System::Drawing::Size(0, 13);
			this->testLbl2->TabIndex = 7;
			// 
			// testLbl3
			// 
			this->testLbl3->AutoSize = true;
			this->testLbl3->Location = System::Drawing::Point(284, 48);
			this->testLbl3->Name = L"testLbl3";
			this->testLbl3->Size = System::Drawing::Size(0, 13);
			this->testLbl3->TabIndex = 8;
			// 
			// MyForm
			// 
			this->AcceptButton = this->btnEnter;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->btnClear;
			this->ClientSize = System::Drawing::Size(406, 139);
			this->Controls->Add(this->testLbl3);
			this->Controls->Add(this->testLbl2);
			this->Controls->Add(this->testLbl1);
			this->Controls->Add(this->majorText);
			this->Controls->Add(this->stuNumText);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnEnter);
			this->Name = L"MyForm";
			this->Text = L"Student Database";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnClear_Click(System::Object^  sender, System::EventArgs^  e) {
		stuNumText->Text = "";
		majorText->Text = "";
	}
private: System::Void btnEnter_Click(System::Object^  sender, System::EventArgs^  e) {

	if (stuNumText->Text == "" || majorText->Text == "") {
		/* if (MessageBox::Show("Both StuNum and Major are required to continue!",
			"Cannot access", MessageBoxButtons::OKCancel)
			== System::Windows::Forms::DialogResult::Cancel)
			this->Close(); */
		(MessageBox::Show("Both StuNum and Major are required to continue!", "Cannot access",
			MessageBoxButtons::OK));

		stuNumText->Text = "";
		majorText->Text = "";
		stuNumText->Focus();
	}
	else {
		String^ connString = "Provider = Microsoft.ACE.OLEDB.12.0; Data Source = C:\\3331\\database\\School.accdb;Persist Security Info = False;";
		OleDbConnection^ conn = gcnew OleDbConnection(connString);

		String^ qry = "SELECT* FROM Students Where StuNum = '" + stuNumText->Text + "'" + "AND Major = '" + majorText->Text + "'";
		// String^ qry = "SELECT* FROM Students Where StuNum = '" + stuNumText->Text + "'AND Major = '" + majorText->Text + "';";
		/* String^ qry = "select Major, GPA, TotalHours, AdvisorName " + // 
			"from Students " +
			"where StuNum = '" + stuNumText->Text + "'AND Major = '" + majorText->Text + "';"; */
		OleDbCommand^ cmd = gcnew OleDbCommand(qry, conn); 
		OleDbDataReader^ r;


		conn->Open();
		r = cmd->ExecuteReader();
		
		// second box up
		Selection^ sForm = gcnew Selection;

		bool pick = 1;
		// int i;
		while (r->Read())
		{
			pick = 0;
			// i = 0;
			// if ((stuNumText->Text == r[i]->ToString()) && (majorText->Text == r[i+1]->ToString())) {
				
			/*
				// tests to see if data is passed on first form
				testLbl1->Text = r[0]->ToString();
				testLbl2->Text = r[1]->ToString();
				testLbl3->Text = r[2]->ToString(); 
			*/
				
				// passes database info to second form
				sForm->userName = stuNumText->Text;
				// a) using textbox info to pass information
				sForm->selectStu = stuNumText->Text;
				// b) using name of col to pass info
				sForm->selectMajor = r["Major"]->ToString();
				// c) using col numbers to pass info
				sForm->selectGPA = r[2]->ToString();
				sForm->selectHours = r[3]->ToString();
				sForm->selectAdv = r[4]->ToString(); 

				sForm->ShowDialog();
			// }
			// i++;
		}

		if (pick) {
			/* if (MessageBox::Show("Sorry, StuNum and Major do not match!",
				"Cannot access", MessageBoxButtons::OKCancel)
				== System::Windows::Forms::DialogResult::Cancel)
				this->Close(); */
			(MessageBox::Show("Sorry, StuNum and Major do not match!",
				"Cannot access", MessageBoxButtons::OK));
		}
		r->Close();
		conn->Close();
		
	}
}
};
}
