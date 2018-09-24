#pragma once

namespace MF_DB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Selection
	/// </summary>
	public ref class Selection : public System::Windows::Forms::Form
	{
	public:
		// adding the strings
		property String^ userName;
		property String^ selectStu;
		property String^ selectMajor;
		property String^ selectGPA;
		property String^ selectHours;
		property String^ selectAdv;

		Selection(void)
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
		~Selection()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  stuNumLbl;
	private: System::Windows::Forms::Label^  majorLbl;
	private: System::Windows::Forms::Label^  gpaLbl;
	private: System::Windows::Forms::Label^  hoursLbl;
	private: System::Windows::Forms::Label^  advisorLbl;






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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->stuNumLbl = (gcnew System::Windows::Forms::Label());
			this->majorLbl = (gcnew System::Windows::Forms::Label());
			this->gpaLbl = (gcnew System::Windows::Forms::Label());
			this->hoursLbl = (gcnew System::Windows::Forms::Label());
			this->advisorLbl = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(81, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"StuNum: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(100, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Major: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(104, 115);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"GPA: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(56, 149);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(95, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Total Hours:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(85, 182);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(69, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Advisor: ";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(42, 103);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(196, 114);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// stuNumLbl
			// 
			this->stuNumLbl->AutoSize = true;
			this->stuNumLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stuNumLbl->ForeColor = System::Drawing::Color::Blue;
			this->stuNumLbl->Location = System::Drawing::Point(162, 30);
			this->stuNumLbl->Name = L"stuNumLbl";
			this->stuNumLbl->Size = System::Drawing::Size(38, 20);
			this->stuNumLbl->TabIndex = 6;
			this->stuNumLbl->Text = L"N/A";
			// 
			// majorLbl
			// 
			this->majorLbl->AutoSize = true;
			this->majorLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->majorLbl->ForeColor = System::Drawing::Color::Blue;
			this->majorLbl->Location = System::Drawing::Point(162, 64);
			this->majorLbl->Name = L"majorLbl";
			this->majorLbl->Size = System::Drawing::Size(38, 20);
			this->majorLbl->TabIndex = 7;
			this->majorLbl->Text = L"N/A";
			// 
			// gpaLbl
			// 
			this->gpaLbl->AutoSize = true;
			this->gpaLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gpaLbl->ForeColor = System::Drawing::Color::Fuchsia;
			this->gpaLbl->Location = System::Drawing::Point(162, 115);
			this->gpaLbl->Name = L"gpaLbl";
			this->gpaLbl->Size = System::Drawing::Size(38, 20);
			this->gpaLbl->TabIndex = 8;
			this->gpaLbl->Text = L"N/A";
			// 
			// hoursLbl
			// 
			this->hoursLbl->AutoSize = true;
			this->hoursLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hoursLbl->ForeColor = System::Drawing::Color::Fuchsia;
			this->hoursLbl->Location = System::Drawing::Point(162, 149);
			this->hoursLbl->Name = L"hoursLbl";
			this->hoursLbl->Size = System::Drawing::Size(38, 20);
			this->hoursLbl->TabIndex = 9;
			this->hoursLbl->Text = L"N/A";
			// 
			// advisorLbl
			// 
			this->advisorLbl->AutoSize = true;
			this->advisorLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->advisorLbl->ForeColor = System::Drawing::Color::Fuchsia;
			this->advisorLbl->Location = System::Drawing::Point(162, 182);
			this->advisorLbl->Name = L"advisorLbl";
			this->advisorLbl->Size = System::Drawing::Size(38, 20);
			this->advisorLbl->TabIndex = 10;
			this->advisorLbl->Text = L"N/A";
			// 
			// Selection
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 247);
			this->Controls->Add(this->advisorLbl);
			this->Controls->Add(this->hoursLbl);
			this->Controls->Add(this->gpaLbl);
			this->Controls->Add(this->majorLbl);
			this->Controls->Add(this->stuNumLbl);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Selection";
			this->Text = L"MyDetails";
			this->Load += gcnew System::EventHandler(this, &Selection::Selection_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Selection_Load(System::Object^  sender, System::EventArgs^  e) {
		this->Text = "Welcome! " + this->userName;
		stuNumLbl->Text = selectStu;
		majorLbl->Text = selectMajor;
		gpaLbl->Text = selectGPA;
		hoursLbl->Text = selectHours;
		advisorLbl->Text = selectAdv;
	}
	};
}
