#pragma once


namespace iwillcrashcppclr {

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
	private: System::Windows::Forms::Button^ btnAccessToNull;
	protected:

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
			this->btnAccessToNull = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnAccessToNull
			// 
			this->btnAccessToNull->Location = System::Drawing::Point(12, 64);
			this->btnAccessToNull->Name = L"btnAccessToNull";
			this->btnAccessToNull->Size = System::Drawing::Size(212, 23);
			this->btnAccessToNull->TabIndex = 0;
			this->btnAccessToNull->Text = L"&Access to null pointer";
			this->btnAccessToNull->UseVisualStyleBackColor = true;
			this->btnAccessToNull->Click += gcnew System::EventHandler(this, &Form1::btnAccessToNull_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(882, 341);
			this->Controls->Add(this->btnAccessToNull);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnAccessToNull_Click(System::Object^ sender, System::EventArgs^ e) {
		*(int*)0 = 1;
	}
	};
}

