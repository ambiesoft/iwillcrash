#pragma once


namespace skelton2019 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
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
	private: System::Windows::Forms::TextBox^ txtTarget;
	protected:
	private: System::Windows::Forms::TextBox^ txtInput;

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
			this->txtTarget = (gcnew System::Windows::Forms::TextBox());
			this->txtInput = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// txtTarget
			// 
			this->txtTarget->Location = System::Drawing::Point(54, 170);
			this->txtTarget->Multiline = true;
			this->txtTarget->Name = L"txtTarget";
			this->txtTarget->ReadOnly = true;
			this->txtTarget->Size = System::Drawing::Size(790, 117);
			this->txtTarget->TabIndex = 0;
			// 
			// txtInput
			// 
			this->txtInput->Location = System::Drawing::Point(54, 21);
			this->txtInput->Multiline = true;
			this->txtInput->Name = L"txtInput";
			this->txtInput->Size = System::Drawing::Size(790, 99);
			this->txtInput->TabIndex = 1;
			this->txtInput->TextChanged += gcnew System::EventHandler(this, &Form1::txtInput_TextChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(882, 315);
			this->Controls->Add(this->txtInput);
			this->Controls->Add(this->txtTarget);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void txtInput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		txtTarget->Text = txtInput->Text;
	}
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		System::Drawing::Font^ font = gcnew System::Drawing::Font("Meiryo UI", 15.75, System::Drawing::FontStyle::Regular);
		txtTarget->Font = font;
	}
	};
}

