#pragma once
#include "Calculator.h"

namespace VizcarraP4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	SimpleCalc calc;
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ Welcome;
	protected:

	private: System::Windows::Forms::Button^ DivideButton;
	private: System::Windows::Forms::Button^ SubtractButton;



	private: System::Windows::Forms::Button^ MultiplyButton;

	private: System::Windows::Forms::Button^ AddButton;
	private: System::Windows::Forms::TextBox^ TextNum1;
	private: System::Windows::Forms::TextBox^ TextNum2;
	private: System::Windows::Forms::TextBox^ Results;
	private: System::Windows::Forms::Label^ lblOps;





	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ ClearButton;


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
			this->Welcome = (gcnew System::Windows::Forms::Label());
			this->DivideButton = (gcnew System::Windows::Forms::Button());
			this->SubtractButton = (gcnew System::Windows::Forms::Button());
			this->MultiplyButton = (gcnew System::Windows::Forms::Button());
			this->AddButton = (gcnew System::Windows::Forms::Button());
			this->TextNum1 = (gcnew System::Windows::Forms::TextBox());
			this->TextNum2 = (gcnew System::Windows::Forms::TextBox());
			this->Results = (gcnew System::Windows::Forms::TextBox());
			this->lblOps = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->ClearButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 23);
			this->label1->TabIndex = 12;
			// 
			// Welcome
			// 
			this->Welcome->AutoSize = true;
			this->Welcome->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Welcome->Location = System::Drawing::Point(32, 27);
			this->Welcome->Name = L"Welcome";
			this->Welcome->Size = System::Drawing::Size(484, 38);
			this->Welcome->TabIndex = 1;
			this->Welcome->Text = L"                         Welcome to the C++ Calculator!\r\nEnter two numbers and pr"
				L"ess the operation button to calculate\r\n";
			// 
			// DivideButton
			// 
			this->DivideButton->BackColor = System::Drawing::Color::DimGray;
			this->DivideButton->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DivideButton->Location = System::Drawing::Point(230, 236);
			this->DivideButton->Name = L"DivideButton";
			this->DivideButton->Size = System::Drawing::Size(139, 86);
			this->DivideButton->TabIndex = 2;
			this->DivideButton->Text = L"/";
			this->DivideButton->UseVisualStyleBackColor = false;
			this->DivideButton->Click += gcnew System::EventHandler(this, &MyForm::DivideButton_Click);
			// 
			// SubtractButton
			// 
			this->SubtractButton->BackColor = System::Drawing::Color::DimGray;
			this->SubtractButton->Font = (gcnew System::Drawing::Font(L"Arial", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SubtractButton->Location = System::Drawing::Point(230, 348);
			this->SubtractButton->Name = L"SubtractButton";
			this->SubtractButton->Size = System::Drawing::Size(139, 83);
			this->SubtractButton->TabIndex = 3;
			this->SubtractButton->Text = L"-";
			this->SubtractButton->UseVisualStyleBackColor = false;
			this->SubtractButton->Click += gcnew System::EventHandler(this, &MyForm::SubtractButton_Click);
			// 
			// MultiplyButton
			// 
			this->MultiplyButton->BackColor = System::Drawing::Color::DimGray;
			this->MultiplyButton->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MultiplyButton->Location = System::Drawing::Point(12, 348);
			this->MultiplyButton->Name = L"MultiplyButton";
			this->MultiplyButton->Size = System::Drawing::Size(148, 83);
			this->MultiplyButton->TabIndex = 4;
			this->MultiplyButton->Text = L"X";
			this->MultiplyButton->UseVisualStyleBackColor = false;
			this->MultiplyButton->Click += gcnew System::EventHandler(this, &MyForm::MultiplyButton_Click);
			// 
			// AddButton
			// 
			this->AddButton->BackColor = System::Drawing::Color::DimGray;
			this->AddButton->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddButton->Location = System::Drawing::Point(12, 236);
			this->AddButton->Name = L"AddButton";
			this->AddButton->Size = System::Drawing::Size(146, 86);
			this->AddButton->TabIndex = 5;
			this->AddButton->Text = L"+";
			this->AddButton->UseVisualStyleBackColor = false;
			this->AddButton->Click += gcnew System::EventHandler(this, &MyForm::AddButton_Click);
			// 
			// TextNum1
			// 
			this->TextNum1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TextNum1->Location = System::Drawing::Point(4, 127);
			this->TextNum1->Name = L"TextNum1";
			this->TextNum1->Size = System::Drawing::Size(93, 26);
			this->TextNum1->TabIndex = 6;
			this->TextNum1->Text = L"\r\n";
			// 
			// TextNum2
			// 
			this->TextNum2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TextNum2->Location = System::Drawing::Point(145, 127);
			this->TextNum2->Name = L"TextNum2";
			this->TextNum2->Size = System::Drawing::Size(87, 26);
			this->TextNum2->TabIndex = 7;
			// 
			// Results
			// 
			this->Results->BackColor = System::Drawing::SystemColors::Window;
			this->Results->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
			this->Results->Location = System::Drawing::Point(295, 127);
			this->Results->Multiline = true;
			this->Results->Name = L"Results";
			this->Results->Size = System::Drawing::Size(232, 33);
			this->Results->TabIndex = 8;
			// 
			// lblOps
			// 
			this->lblOps->AutoSize = true;
			this->lblOps->Location = System::Drawing::Point(94, 126);
			this->lblOps->Name = L"lblOps";
			this->lblOps->Size = System::Drawing::Size(0, 27);
			this->lblOps->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(248, 127);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(29, 33);
			this->label4->TabIndex = 10;
			this->label4->Text = L"=";
			// 
			// ClearButton
			// 
			this->ClearButton->BackColor = System::Drawing::Color::DimGray;
			this->ClearButton->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ClearButton->Location = System::Drawing::Point(420, 236);
			this->ClearButton->Name = L"ClearButton";
			this->ClearButton->Size = System::Drawing::Size(96, 195);
			this->ClearButton->TabIndex = 11;
			this->ClearButton->Text = L"Clear";
			this->ClearButton->UseVisualStyleBackColor = false;
			this->ClearButton->Click += gcnew System::EventHandler(this, &MyForm::ClearButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 27);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PaleGreen;
			this->ClientSize = System::Drawing::Size(532, 494);
			this->Controls->Add(this->ClearButton);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->lblOps);
			this->Controls->Add(this->Results);
			this->Controls->Add(this->TextNum2);
			this->Controls->Add(this->TextNum1);
			this->Controls->Add(this->AddButton);
			this->Controls->Add(this->MultiplyButton);
			this->Controls->Add(this->SubtractButton);
			this->Controls->Add(this->DivideButton);
			this->Controls->Add(this->Welcome);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe Script", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"MyForm";
			this->Text = L"Valeria Vizcarra Program #4 Simple Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: void Calculate(char operation)
	{
		double n1 = Convert::ToDouble(TextNum1->Text);
		double n2 = Convert::ToDouble(TextNum2->Text);

		calc.SetOperation(operation, n1, n2);
		Results->Text = gcnew String(calc.GetResults().c_str());
		lblOps->Text = Convert:: ToChar(operation).ToString();

	}
	private: System::Void AddButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Calculate('+');
	}
private: System::Void DivideButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	Calculate('/');
}
private: System::Void MultiplyButton_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Calculate('X');

}
private: System::Void SubtractButton_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Calculate('-');
}
private: System::Void ClearButton_Click(System::Object^ sender, System::EventArgs^ e) 
{
	TextNum1->Clear();
	TextNum2->Clear();
	Results->Clear();
	lblOps->Text = "";
}
};
}
